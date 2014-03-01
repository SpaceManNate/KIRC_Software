/*************************************************************
 * TITLE: Main.c
 * DESCR: Contains entry point into program, and task routines
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

volatile int input[6] = {533,533,533,533,533,533};

unsigned char RXChannelLock = true;
unsigned int PWMticks[8] = {0,0,0,0,0,0,0,0};
unsigned char dataRdy = false;
volatile unsigned char currentRXChannel=0;


_IMUdata IMUdata = {.acc = {0,0,0}, .gyr = {0,0,0}, .mag = {0,0,0}};
_controlData controlData = {.angle_desired = {0,0,0}, .angle_current = {0,0,0},
							.angle_last = {0,0,0}, .IntegralSum = {0,0,0}, .QuadState = QUAD_DISABLED};


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

	//Calibrate sensors
	Calib_Accel();
	Task_sleep(500);
	Calib_Gyro();
	Task_sleep(500);

	while (1) {
		GPIO_toggle(Board_LED1);
		//Read Sensors
		Read_Accel();
		Read_Gyro();
		//Read_Magn(); //Read Magnetometer
		Filter_GyroData(); //Filter the gyro data
		Update_State();

		//printf("%2.3f, %2.3f, %2.3f\r\n",IMUdata.gyr[0],IMUdata.gyr[1],IMUdata.gyr[2]);
		//printf("%2.3f, %2.3f, %2.3f\r\n",controlData.angle_current[0],controlData.angle_current[1],controlData.angle_current[2]);
		//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",State.q1,State.q2,State.q3,State.q4);
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
			//Get gains from AUX Pit. trim
			Ki = (float) 0.5*((input[5]-520)/430.0);
			//printf("%2.3f\r\n", Ki);
			//fflush(stdout);

			//Convert input (pitch roll yaw) into degrees
			cntl_input[0] =(float) (-1.0)*(40.0*(input[1]-532)/430.0 - 20.0);
			cntl_input[1] =(float) (40.0*(input[3]-532)/430.0 - 20.0);
			yaw_input = (float) 5.0*(input[0] - 537)/430.0 - 2.5;
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
			output[0] = input[2]+Compensation[0]-Compensation[1];//+Compensation[2];
			output[1] = input[2]-Compensation[0]-Compensation[1];//+Compensation[2];
			output[2] = input[2]+Compensation[0]+Compensation[1];//-Compensation[2];
			output[3] = input[2]-Compensation[0]+Compensation[1];//-Compensation[2];

			System_printf("OUTPUT 1: %d,  OUTPUT2: %d,  OUTPUT3: %d,  OUTPUT4: %d\r\n",output[0],output[1],output[2],output[3]);
			System_flush();
			motors_out(output);
		}
		else
			motorsDisable();

		Task_sleep(2500); //Delay (100Hz)
	} //END OF WHILE(1)
}


// ======== ReadInputFxn ========
Void ReadInputFxn(UArg arg0, UArg arg1) {
	//Init Turnigy Receiver listening
	System_printf("Initializing RC Input...\n");
	System_flush();
	float total[6] = {0.0,0.0,0.0,0.0,0.0,0.0};
	//unsigned int timer = 0;
	uint32_t timeout = 0;
	GPIO_enableInt(Board_PA2,GPIO_INT_BOTH_EDGES);
	GPIO_enableInt(Board_PA3,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PA4,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PA5,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PF0,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PF4,GPIO_INT_BOTH_EDGES);

	while (1) {
		//System_printf("FUCK ME\r\n");
		//System_flush();
		//printf("SHIIITT\n");
		//fflush(stdout);
		if(dataRdy){
			timeout = Clock_getTicks();
			GPIO_disableInt(Board_PA2);
			GPIO_disableInt(Board_PA3);
			GPIO_disableInt(Board_PA4);
			GPIO_disableInt(Board_PA5);
			GPIO_disableInt(Board_PF0);
			GPIO_disableInt(Board_PF4);
			total[0] = ((float) (PWMticks[1] - PWMticks[0]))/20.0;
			total[1] = ((float) (PWMticks[2] - PWMticks[1]))/20.0;
			total[2] = ((float) (PWMticks[3] - PWMticks[2]))/20.0;
			total[3] = ((float) (PWMticks[4] - PWMticks[3]))/20.0;
			total[4] = ((float) (PWMticks[5] - PWMticks[4]))/20.0;
			total[5] = ((float) (PWMticks[7] - PWMticks[6]))/20.0;
			input[0] = 100*total[0];
			input[1] = 100*total[1];
			input[2] = 100*total[2];
			input[3] = 100*total[3];
			input[4] = 100*total[4];
			input[5] = 100*total[5];
			//System_printf("INPUT 1: %d, INPUT 2: %d, INPUT 3: %d, INPUT 4: %d, INPUT 5: %d, INPUT 6: %d\r\n",input[0],input[1],input[2],input[3],input[4],input[5]);
			//System_flush();
			GPIO_enableInt(Board_PA2,GPIO_INT_BOTH_EDGES);
			GPIO_enableInt(Board_PA3,GPIO_INT_FALLING);
			GPIO_enableInt(Board_PA4,GPIO_INT_FALLING);
			GPIO_enableInt(Board_PA5,GPIO_INT_FALLING);
			GPIO_enableInt(Board_PF0,GPIO_INT_FALLING);
			GPIO_enableInt(Board_PF4,GPIO_INT_BOTH_EDGES);
			dataRdy = false;
		}

		if(Clock_getTicks() > (timeout + 10000)){
			controlData.QuadState = QUAD_DISABLED;
		}
		else if(input[4] < 600){
    		controlData.QuadState = QUAD_DISABLED;
    		//System_printf("Disabled\n");
    		//System_flush();
    	}
    	else if(input[4] > 900){
    		controlData.QuadState = QUAD_ENABLED;
    		//System_printf("Enabled\n");
    		//System_flush();
    	}

	} //END OF WHILE(1)
}

/*
 * RC Input Interrupt handler
 */
Void RCinputIntHandler(Void){
	GPIO_clearInt(Board_PA2);
	GPIO_clearInt(Board_PA3);
	GPIO_clearInt(Board_PA4);
	GPIO_clearInt(Board_PA5);
	GPIO_clearInt(Board_PF0);
	GPIO_clearInt(Board_PF4);
	unsigned int currentTicks =  Clock_getTicks();
	unsigned char pinStatus = GPIOPinRead(GPIO_PORTA_BASE, GPIO_PIN_2);

	//Check if channel is locked (OFF)
	if(RXChannelLock){
		//Check for false start
		if(pinStatus != 0x04)
			return;

		RXChannelLock = false;
		currentRXChannel = 0;
	}

	PWMticks[currentRXChannel] = currentTicks; //store current time

	//Check for false start
	if(currentRXChannel == 0 && pinStatus != 0x04)
		RXChannelLock = true;

	//Check if on the last channel, flag to process time
	if(currentRXChannel == 7){
		dataRdy = true;
		currentRXChannel = 0;
		return;
	}

	currentRXChannel++; //increment to next channel
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

	//System_printf("Starting up KIRC flight computer software...\n");
	//System_flush();

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
