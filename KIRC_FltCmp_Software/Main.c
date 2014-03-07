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
_controlData controlData = {.angle_desired = {0,0,0}, .angle_current = {0,0,0}, .Quaternion = {1.0,0,0,0},
					        .Offset = {0,0}, .QuadState = QUAD_DISABLED};

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

		//printf("%2.3f, %2.3f, %2.3f\r\n",controlData.angle_current[0],controlData.angle_current[1],controlData.angle_current[2]);
		//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",controlData.Quaternion[0],controlData.Quaternion[1],controlData.Quaternion[2],controlData.Quaternion[3]);
		//fflush(stdout);
		Task_sleep(2500); //Delay (100 Hz)
	} //END OF WHILE(1)
}

// ======== ControlFxn ========
Void ControlFxn(UArg arg0, UArg arg1) {
	System_printf("Initializing Feedback Controller...\n");
	System_flush();
	//___INIT PID GAINS____//
	float Kp=4.0,Ki=0.0,Kd=0.0;
	float Kpy=0.0,Kiy=0,Kdy=0;

	//init support variables
	uint32_t output[4];
	float error[3];
	float deriv[3] = {0,0,0};
	float ErrorSum[3] = {0,0,0};
	float angle_last[3] = {0,0,0};
	float yaw_input;
	short Compensation[3];
	static float IntLimit = 100.0;
	volatile unsigned short i;

	motors_init();

	while (1) {
		if(controlData.QuadState == QUAD_ENABLED){
			GPIO_write(Board_LED2, Board_LED_ON);
			GPIO_write(Board_LED0, Board_LED_OFF);
			//Get gains from AUX Pit. trim
			//Ki = (float) 2.0*((RxData.input[5]-520)/430.0);
			//printf("%2.2f\r\n", Ki);
			//fflush(stdout);

			//Convert input (pitch roll yaw) into degrees
			controlData.angle_desired[0] =(float) (60.0*(RxData.input[3]-525)/430.0 - 30.0);
			controlData.angle_desired[1] =(float) (60.0*(RxData.input[1]-525)/430.0 - 30.0);
			yaw_input = (float) 5.0*(RxData.input[0] - 537)/430.0 - 2.5;

			//limit the sensitivity of the yaw control (to avoid drift)
			if(yaw_input > 0.1 || yaw_input < -0.1)
				controlData.angle_desired[2] += yaw_input;
			//Yaw loop condition
			if(controlData.angle_desired[2] > 180.0 || controlData.angle_desired[2] <-180.0)
				controlData.angle_desired[2] *= -1.0;

			//Error Calculation, and throw out bad inputs
			if(controlData.angle_desired[0]<30.0 && controlData.angle_desired[0]>-30.0 )
				error[0] = controlData.angle_desired[0]-controlData.angle_current[0]; //ROLL CALCULATION
			if(controlData.angle_desired[1]<30.0 && controlData.angle_desired[1]>-30.0 )
				error[1] = controlData.angle_desired[1]-controlData.angle_current[1]; //PITCH CALCULATION

			//PID calculation (ROLL and PITCH)
			for(i=0;i<2;i++){
				ErrorSum[i] += Ki*error[i]*dT;
				if(ErrorSum[i] > IntLimit)
					ErrorSum[i] = IntLimit;
				else if(ErrorSum[i] < -IntLimit)
					ErrorSum[i] = -IntLimit;

				deriv[i] = (controlData.angle_current[i] - angle_last[i])/dT;

				Compensation[i] = (int) (Kp*error[i] + ErrorSum[i] - Kd*deriv[i]);
				angle_last[i] =  controlData.angle_current[i];

			}

			//PID calculation (YAW)

			//Calculate control actions
			output[0] = RxData.input[2]-Compensation[1];//+Compensation[2];
			output[1] = RxData.input[2]-Compensation[0];//+Compensation[2];
			output[2] = RxData.input[2]+Compensation[0];//-Compensation[2];
			output[3] = RxData.input[2]+Compensation[1];//-Compensation[2];
			//output[0] = RxData.input[2]+Compensation[0]-Compensation[1];//+Compensation[2];
			//output[1] = RxData.input[2]-Compensation[0]-Compensation[1];//+Compensation[2];
			//output[2] = RxData.input[2]+Compensation[0]+Compensation[1];//-Compensation[2];
			//output[3] = RxData.input[2]-Compensation[0]+Compensation[1];//-Compensation[2];
			motors_out(output); //Output control to motors

			//System_printf("OUTPUT 1: %d,  OUTPUT2: %d,  OUTPUT3: %d,  OUTPUT4: %d\r\n",output[0],output[1],output[2],output[3]);
			//System_flush();
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

		if(Clock_getTicks() > (timeout + 15000)){
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
//This is the main entry point into the program
Int main(Void) {
	// Init board drivers
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initI2C();
	Board_initPWM();

	// Turn on Blue LED
	GPIO_write(Board_LED0, Board_LED_ON);

	// Add the UART device to system.
	add_device("UART", _MSA, UARTUtils_deviceopen, UARTUtils_deviceclose,
			UARTUtils_deviceread, UARTUtils_devicewrite, UARTUtils_devicelseek,
			UARTUtils_deviceunlink, UARTUtils_devicerename);

	// Open UART0 for writing to stdout and set buffer
	freopen("UART:0", "w", stdout);
	setvbuf(stdout, NULL, _IOLBF, 128);

	// Open UART0 for reading from stdin and set buffer
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

