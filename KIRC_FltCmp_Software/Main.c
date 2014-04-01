/*************************************************************
 * TITLE: Main.c, KIRC project
 * DESCR: Contains entry point into program, and task routines
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

_RxInput RxData = {.input = {533,533,533,533,533,533}, .PWMticks = {0,0,0,0,0,0,0,0}, .dataRdy = false};
_IMUdata IMUdata = {.acc = {0,0,0}, .gyr = {0,0,0}, .mag = {0,0,0}};
_controlData controlData = {.angle_desired = {0,0,0}, .angle_current = {0,0,0}, .Quaternion = {1.0,0,0,0},
					        .Offset = {0,0}, .QuadState = QUAD_INIT};
_TelemData TelemData = {"$GPGLL",0.0,0};

// ======== ReadSensorsFxn ========
// Priority 3 (Highest)
Void ReadSensorsFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing Sensors...\n");
	System_flush();
	controlData.QuadState = QUAD_INIT;

	Accel_Init();
	Gyro_Init();

	//Delay long enough for user to place the quad on a level surface for calibration
	Task_sleep(50000);

	//Calibrate sensors and state estimator
	Calib_Accel();
	Task_sleep(500);
	Calib_Gyro();
	Task_sleep(500);
	StateEst_Calib();
	controlData.QuadState = QUAD_DISABLED;

	while (1) {
		//Toggle (blink) light to show that sensors are reading
		GPIO_toggle(Board_LED1);
		Read_Accel();	//Read ADXL345 Accel
		Read_Gyro();	//Read L3G4200D Gyro
		Filter_GyroData(); //Filter the gyro data

		Update_State(); //Update the State Estimator
		Task_sleep(2500); //Delay (100 Hz)
	} //END OF WHILE(1)
}


// ======== ControlFxn ========
// Priority 2 (Middle)
Void ControlFxn(UArg arg0, UArg arg1) {
	//___INIT PID GAINS____//
	//float Kp=0.545,Ki=0.25,Kd=0.084;
	float Kp=0.315,Ki=0.140,Kd=0.0665;
	//float Kpy=0.350,Kiy=0.0,Kdy=0.065;
	float Kpy=0.47,Kiy=0.041,Kdy=0.093;
	//float Kpy=0.0,Kiy=0.0,Kdy=0.1;

	//init support variables
	uint32_t output[4];
	float error[3];
	float deriv[3] = {0,0,0};
	float ErrorSum[3] = {0,0,0};
	float angle_last[3] = {0,0,0};

	short Compensation[3];
	static float IntLimit = 60.0;
	int PIDLimit;
	volatile unsigned short i;

	motors_init();
	System_printf("Initializing Feedback Controller...\n");
	System_flush();

	while (1) {
		if(controlData.QuadState == QUAD_ENABLED){
			//Change blue light to red to signify motors are armed
			GPIO_write(Board_LED2, Board_LED_ON);
			GPIO_write(Board_LED0, Board_LED_OFF);

			PIDLimit = 0.45*(RxData.input[2]-525); //Limit PID compensation to 50% of the throttle
			ProcessRxData(); //Process the latest Rx data

			//Get gains from AUX Pit. trim
			Ki = (float) 0.2*((RxData.input[5]-520)/430.0);
			printf("%2.3f\r\n", Ki);
			fflush(stdout);

			//Error Calculation, and throw out bad inputs
			if(controlData.angle_desired[0]<30.0 && controlData.angle_desired[0]>-30.0 )
				error[0] = controlData.angle_desired[0]-controlData.angle_current[0]; //ROLL CALCULATION
			if(controlData.angle_desired[1]<30.0 && controlData.angle_desired[1]>-30.0 )
				error[1] = controlData.angle_desired[1]-controlData.angle_current[1]; //PITCH CALCULATION

			printf("%2.3f	%2.3f\r\n",controlData.angle_current[2], controlData.angle_desired[2]);
			fflush(stdout);

			//PID calculation (ROLL and PITCH)
			for(i=0;i<2;i++){
				ErrorSum[i] += Ki*error[i]*dT;
				//Integration Limiter
				if(ErrorSum[i] > IntLimit)
					ErrorSum[i] = IntLimit;
				else if(ErrorSum[i] < -IntLimit)
					ErrorSum[i] = -IntLimit;

				deriv[i] = (controlData.angle_current[i] - angle_last[i])/dT;

				//Calculate PID
				Compensation[i] = (int) (Kp*error[i] + ErrorSum[i] - Kd*deriv[i]);

				//PID limiter
				if(Compensation[i] > PIDLimit)
					Compensation[i] = PIDLimit;
				if(Compensation[i] < -PIDLimit)
					Compensation[i] = -PIDLimit;
				angle_last[i] =  controlData.angle_current[i];

			}

			//Calculate control actions (ROLL PITCH)
			output[0] = RxData.input[2]-Compensation[1];
			output[1] = RxData.input[2]-Compensation[0];
			output[2] = RxData.input[2]+Compensation[0];
			output[3] = RxData.input[2]+Compensation[1];


			//PID calculation (YAW)
			error[2] = controlData.angle_desired[2] -  controlData.angle_current[2];
			//Yaw Loop Condition
			if(error[2] > 180)
				error[2] -= 360.0;
			else if(error[2] < -180)
				error[2] += 360.0;

			//Integral
			ErrorSum[2] += Kiy*error[2]*dT;
			if(ErrorSum[i] > IntLimit)
				ErrorSum[i] = IntLimit;
			else if(ErrorSum[i] < -IntLimit)
				ErrorSum[i] = -IntLimit;

			//Derivative
			deriv[2] =  (controlData.angle_current[2] - angle_last[2]);
			if(deriv[2] > 180)
				deriv[2] -= 360.0;
			else if(deriv[2] < -180)
				deriv[2] += 360.0;

			angle_last[2] =  controlData.angle_current[2];

			//PID Calculation
			Compensation[2] = (int) (Kpy*error[2] + ErrorSum[2] - Kdy*deriv[2]/dT);
			//PID limiter
			if(Compensation[2] > PIDLimit)
				Compensation[2] = PIDLimit;
			else if(Compensation[2] < -PIDLimit)
				Compensation[2] = -PIDLimit;

			//Calculate control actions (ROLL PITCH)
			output[0] -= Compensation[2];
			output[1] += Compensation[2];
			output[2] += Compensation[2];
			output[3] -= Compensation[2];

			//System_printf("OUTPUT 1: %d,  OUTPUT2: %d,  OUTPUT3: %d,  OUTPUT4: %d\r\n",output[0],output[1],output[2],output[3]);
			//
			System_flush();

			motors_out(output); //Output control to motors
		}

		else{
			//If quad is not enabled, safe the motors, and turn off red light
			motorsDisable();
			controlData.angle_desired[2] =  controlData.angle_current[2];
			GPIO_write(Board_LED2, Board_LED_OFF);
			GPIO_write(Board_LED0, Board_LED_ON);
		}

		Task_sleep(2500); //Delay (100Hz)
	} //END OF WHILE(1)
}

// ======== ReadInputFxn ========
// Priority 1 (Lowest)
Void ReadInputFxn(UArg arg0, UArg arg1) {
	//Init Turnigy Receiver listening
	System_printf("Initializing RC Input...\n");
	System_flush();
	float total[6] = {0.0,0.0,0.0,0.0,0.0,0.0};
	volatile unsigned short i;
	uint32_t timeout = 0;
	EnableRxInterrupts();

	while (1) {
		if(RxData.dataRdy){
			timeout = Clock_getTicks(); //update new timeout
			DisableRxInterrupts();
			for(i=0;i<5;i++){
				total[i] = ((float) (RxData.PWMticks[i+1] - RxData.PWMticks[i])/20.0);
				RxData.input[i] = 100*total[i];
			}
			total[5] = ((float) (RxData.PWMticks[7] - RxData.PWMticks[6]))/20.0;
			RxData.input[5] = 100*total[5];
			//System_printf("INPUT 1: %d, INPUT 2: %d, INPUT 3: %d, INPUT 4: %d, INPUT 5: %d, INPUT 6: %d\r\n",
			//    		  RxData.input[0],RxData.input[1],RxData.input[2],RxData.input[3],RxData.input[4],RxData.input[5]);
			//System_flush();
			EnableRxInterrupts();
			RxData.dataRdy = false;
		}

		ProcessStateMachine(timeout);
		Task_sleep(2500); //Delay (100Hz)
	} //END OF WHILE(1)
}

// ======== GPSFxn ========
// Priority 1 (Lowest)
Void GPSFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing GPS...\n");
	System_flush();
	//UInt8 req_buf[100];
	UART_Handle uart = GPS_Init();
	int rx_size;
	Char U6TxBuf[150];

	UART_Handle uart2;
	UART_Params uartParams;
	//Create a UART with data processing off.
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	uartParams.readReturnMode = UART_RETURN_FULL;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 115200;
	uart2 = UART_open(Board_UART3, &uartParams);

	while (1) {
		//Get NMEA GPGLL GPS sentence
		//UART_write(uart2, hello, sizeof(hello));

		rx_size = UART_read(uart, (Char*) TelemData.GPS, sizeof(TelemData.GPS));
		TelemData.GPS[rx_size-2] = '\0';
		//Forward
		//for (i = 0; i < rx_size; i++) {
		//	System_printf("%c", req_buf[i]);
		//}

		sprintf(U6TxBuf,"%s,%d,%d,%d,\n", TelemData.GPS,(int)TelemData.Alt,TelemData.Batt,controlData.QuadState);
		UART_write(uart2, U6TxBuf, sizeof(U6TxBuf)-2);
		U6TxBuf[0] = 0x0A;
		UART_write(uart2, U6TxBuf, 1);

	}

}

// ======== AltimeterFxn ========
// Priority 1 (Lowest)
Void AltimeterFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing Altimeter...\n");
	System_flush();
	ALTM_CalData_t Altim_caldata;
	//float altitude;
	float groundLevel = 0;
	int i;

	Altim_caldata = Altm_Init();

	for (i = 0; i < 15; i++) {
		groundLevel += Get_Altitude(Altim_caldata);
	}
	groundLevel = groundLevel / 15.0;

	while(1){

		TelemData.Alt = Get_Altitude(Altim_caldata) - groundLevel; //Altitude from starting point

		//printf("!Alt,%0.1f\n", altitude);
		//fflush(stdout);
		Task_sleep(1000);

	}
}

// ======== BatteryMonitorFxn ========
// Priority 1 (Lowest)
Void BatteryMonitorFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing BatteryMonitor...\n");
	System_flush();
	// This array is used for storing the data read from the ADC FIFO. It
	// must be as large as the FIFO for the sequencer in use.  This example
	// uses sequence 3 which has a FIFO depth of 1.  If another sequence
	// was used with a deeper FIFO, then the array size must be changed.
	uint32_t pui32ADC0Value[1];

	BatteryMonitorInit();
	// Sample AIN0 forever.  Display the value on the console.

	while (1) {
		// Trigger the ADC conversion.
		ADCProcessorTrigger(ADC0_BASE, 3);

		// Wait for conversion to be completed.
		while (!ADCIntStatus(ADC0_BASE, 3, false)) {
		}

		// Clear the ADC interrupt flag.
		ADCIntClear(ADC0_BASE, 3);

		// Read ADC Value.
		ADCSequenceDataGet(ADC0_BASE, 3, pui32ADC0Value);

		TelemData.Batt = pui32ADC0Value[0];
		// Display the AIN0 (PE7) digital value on the console.
		//printf("Batt = %4d\n", pui32ADC0Value[0]);
		//fflush(stdout);

		//Delay 250ms arbitrarily.
		Task_sleep(25000);
	}

}

//======== main ========
//This is the main entry point into the program
Int main(Void) {
	// Init board drivers
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initI2C();
	Board_initPWM();

	// Turn on Blue LED (signify RTOS is running)
	GPIO_write(Board_LED0, Board_LED_ON);

	// Add the UART device to system.
	add_device("UART", _MSA, UARTUtils_deviceopen, UARTUtils_deviceclose,
			UARTUtils_deviceread, UARTUtils_devicewrite, UARTUtils_devicelseek,
			UARTUtils_deviceunlink, UARTUtils_devicerename);

	// Open UART0 for writing to stdin/out and set buffer
	freopen("UART:0", "w", stdout);
	setvbuf(stdout, NULL, _IOLBF, 128);
	freopen("UART:0", "r", stdin);
	setvbuf(stdin, NULL, _IOLBF, 128);

	//  Initialize UART port 0 used by SysCallback. Calls to System_printf
	//  will go to UART0, the same as printf.
	UARTUtils_systemInit(0);

    // Initialize interrupts for all ports that need them
	GPIO_setupCallbacks(&Board_gpioCallbacks0);
    GPIO_setupCallbacks(&Board_gpioCallbacks1);

	System_printf("\fStarting BIOS...\n");
	System_flush();
	BIOS_start();	// Start BIOS
	return (0);
}

