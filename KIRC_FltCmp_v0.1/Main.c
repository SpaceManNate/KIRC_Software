/*************************************************************
 * TITLE: Main.c
 * DESCR: Contains entry point into program, and task routines
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

_RxInput RxData = {.input = {533,533,533,533,533,533}, .PWMticks = {0,0,0,0,0,0,0,0}, .dataRdy = false};
_IMUdata IMUdata = {.acc = {0,0,0}, .gyr = {0,0,0}, .mag = {0,0,0}};
_controlData controlData = {.angle_desired = {0,0,0}, .angle_current = {0,0,0}, .Quaternion = {1,0,0,0},
					        .Offset = {0,0}, .IntegralSum = {0,0,0}, .QuadState = QUAD_DISABLED};


// ======== ReadSensorsFxn ========
Void ReadSensorsFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing Sensors...\n");
	System_flush();

	//Init Sensors
	Accel_Init();
	Gyro_Init();
	//Magn_Init();

	//Delay long enough for user to place the quad on a level surface for calibration
	Task_sleep(100000);

	//Calibrate sensors and state estimator
	Calib_Accel();
	Task_sleep(500);
	Calib_Gyro();
	Task_sleep(500);
	StateEst_Calib();

	while (1) {
		//Read Sensors
		GPIO_toggle(Board_LED1);
		Read_Accel();
		Read_Gyro();
		//Read_Magn(); //Read Magnetometer
		Filter_GyroData(); //Filter the gyro data
		Update_State();

		//controlData.angle_current[0] = controlData.angle_current[0] - Offset_pitch;
		//controlData.angle_current[1] = controlData.angle_current[1] - Offset_roll;

		//printf("%2.3f, %2.3f, %2.3f\r\n",IMUdata.gyr[0],IMUdata.gyr[1],IMUdata.gyr[2]);
		//printf("%2.3f, %2.3f, %2.3f\r\n",controlData.angle_current[0],controlData.angle_current[1],controlData.angle_current[2]);
		//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",controlData.Quaternion[0],controlData.Quaternion[1],controlData.Quaternion[2],controlData.Quaternion[3]);
		//fflush(stdout);
		Task_sleep(2500); //Delay (100 Hz)
	} //END OF WHILE(1)
}

// ======== ControlFxn ========
Void ControlFxn(UArg arg0, UArg arg1) {
	//init vars
	float Kp=0.4,Ki=0.0,Kd=0.080;
	float Kpy=1.0,Kiy=0,Kdy=0;
	uint32_t output[4];
	float error[3];
	float previous_error[3] = {0,0,0};
	float deriv0,deriv1,deriv2;
	float cntl_input[3] = {0,0,0};
	float yaw_input;
	int Compensation[3];

	motors_init();
	System_printf("Initializing Feedback Controller...\n");
	System_flush();

	while (1) {
		if(controlData.QuadState == QUAD_ENABLED){
			GPIO_write(Board_LED2, Board_LED_ON);
			GPIO_write(Board_LED0, Board_LED_OFF);
			//Get gains from AUX Pit. trim
			Ki = (float) 0.5*((RxData.input[5]-520)/430.0);
			//printf("%2.3f\r\n", Ki);
			//fflush(stdout);

			//Convert input (pitch roll yaw) into degrees
			cntl_input[0] =(float) (-1.0)*(40.0*(RxData.input[1]-525)/430.0 - 20.0);
			cntl_input[1] =(float) (40.0*(RxData.input[3]-525)/430.0 - 20.0);
			yaw_input = (float) 5.0*(RxData.input[0] - 537)/430.0 - 2.5;
			//limit the sensitivity of the yaw control (to avoid drift)
			if(yaw_input > 0.1 || yaw_input < -0.1)
				cntl_input[2] += yaw_input;
			//Yaw loop condition
			if(cntl_input[2] > 180.0 || cntl_input[2] <-180.0)
				cntl_input[2] *= -1.0;

			//printf("%2.3f, %2.3f\n",cntl_input[2],yaw_input);
			//fflush(stdout);

			//Error Calculation, and throw out bad inputs
			if(cntl_input[0]<30.0 && cntl_input[0]>-30.0 )
				error[0] = cntl_input[0]-controlData.angle_current[0]; //PITCH CALCULATION
			if(cntl_input[1]<30.0 && cntl_input[1]>-30.0 )
				error[1] = cntl_input[1]-controlData.angle_current[1]; //ROLL CALCULATION

			//PID calculations
			controlData.IntegralSum[0] += error[0]*dT;
			controlData.IntegralSum[1] += error[1]*dT;
			controlData.IntegralSum[2] += error[2]*dT;
			deriv0 = (error[0] - previous_error[0])/dT;
			deriv1 = (error[1] - previous_error[1])/dT;
			deriv2 = (error[2] - previous_error[2])/dT;

			//PID compensations
			Compensation[0] = (int) (Kp*error[0] + Ki*controlData.IntegralSum[0] + Kd*deriv0);
			Compensation[1] = (int) (Kp*error[1] + Ki*controlData.IntegralSum[1] + Kd*deriv1);
			Compensation[2] = (int) (Kpy*error[2] + Kiy*controlData.IntegralSum[2] + Kdy*deriv2);

			//previous_error = error
			previous_error[0] = error[0];
			previous_error[1] = error[1];
			previous_error[2] = error[2];

			//Calculate control actions
			output[0] = RxData.input[2]+Compensation[0]-Compensation[1];//+Compensation[2];
			output[1] = RxData.input[2]-Compensation[0]-Compensation[1];//+Compensation[2];
			output[2] = RxData.input[2]+Compensation[0]+Compensation[1];//-Compensation[2];
			output[3] = RxData.input[2]-Compensation[0]+Compensation[1];//-Compensation[2];

			System_printf("OUTPUT 1: %d,  OUTPUT2: %d,  OUTPUT3: %d,  OUTPUT4: %d\r\n",output[0],output[1],output[2],output[3]);
			System_flush();
			motors_out(output);
		}
		else{
			motorsDisable();
			GPIO_write(Board_LED2, Board_LED_OFF);
			GPIO_write(Board_LED0, Board_LED_ON);
		}


		Task_sleep(2500); //Delay (100Hz)
	} //END OF WHILE(1)
}


// ======== ReadInputFxn ========
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
			timeout = Clock_getTicks();
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

		if(Clock_getTicks() > (timeout + 10000)){
			controlData.QuadState = QUAD_DISABLED;
		}
		else if(RxData.input[4] < 600){
    		controlData.QuadState = QUAD_DISABLED;
    	}
    	else if(RxData.input[4] > 900 && RxData.input[4] < 1000){
    		controlData.QuadState = QUAD_ENABLED;
    	}
	} //END OF WHILE(1)
}

//======== main ========
Int main(Void) {
	// Call board init functions
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initI2C();
	Board_initPWM();

	// Turn on user LED
	GPIO_write(Board_LED0, Board_LED_ON);

	// Add the UART device to the system.
	add_device("UART", _MSA, UARTUtils_deviceopen, UARTUtils_deviceclose,
			UARTUtils_deviceread, UARTUtils_devicewrite, UARTUtils_devicelseek,
			UARTUtils_deviceunlink, UARTUtils_devicerename);

	// Open UART0 for writing to stdout and set buffer
	freopen("UART:0", "w", stdout);
	setvbuf(stdout, NULL, _IOLBF, 128);

	// Open UART0 for reading from stdin and set buffer
	freopen("UART:0", "r", stdin);
	setvbuf(stdin, NULL, _IOLBF, 128);

	/*
	 *  Initialize UART port 0 used by SysCallback.  This and other SysCallback
	 *  UART functions are implemented in UARTUtils.c. Calls to System_printf
	 *  will go to UART0, the same as printf.
	 */
	UARTUtils_systemInit(0);

    // Initialize interrupts for all ports that need them
	GPIO_setupCallbacks(&Board_gpioCallbacks0);
    GPIO_setupCallbacks(&Board_gpioCallbacks1);

	System_printf("\fStarting BIOS...\n");
	System_flush();

	BIOS_start();	// Start BIOS
	return (0);
}

