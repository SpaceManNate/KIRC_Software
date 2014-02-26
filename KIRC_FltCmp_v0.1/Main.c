/*************************************************************
 * TITLE: Main.c
 * DESCR: Contains entry point into program, and task routines
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

volatile uint32_t ui32Load;
volatile uint32_t ui32PWMClock;
volatile uint32_t input[4] = {533,533,533,533};
float total;
int total2;
uint32_t rising,falling;
uint8_t flag=0;


_IMUdata IMUdata = {.acc = {0,0,0}, .gyr = {0,0,0}, .mag = {0,0,0}};
_controlData controlData = {.angle_desired = {0,0,0}, .angle_current = {0,0,0},
							.angle_last = {0,0,0}, .IntegralSum = {0,0,0}, .QuadState = QUAD_ENABLED};


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
		printf("%2.3f, %2.3f, %2.3f\r\n",controlData.angle_current[0],controlData.angle_current[1],controlData.angle_current[2]);
		//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",State.q1,State.q2,State.q3,State.q4);
		fflush(stdout);
		Task_sleep(2500); //Delay (100 Hz)
	} //END OF WHILE(1)
}


// ======== ReadInputFxn ========
Void ReadInputFxn(UArg arg0, UArg arg1) {
	//Init Turnigy Receiver listening
	System_printf("Initializing RC Input...\n");
	System_flush();

	while (1) {
		//GPIO_toggle(Board_LED2);
		GPIO_enableInt(Board_PA2,GPIO_INT_RISING);
		Task_sleep(700);
		GPIO_disableInt(Board_PA2); //might be redundant
		GPIO_enableInt(Board_PA3,GPIO_INT_RISING);
		Task_sleep(700);
		GPIO_disableInt(Board_PA3); //might be redundant
		GPIO_enableInt(Board_PA4,GPIO_INT_RISING);
		Task_sleep(700);
		GPIO_disableInt(Board_PA4); //might be redundant
		GPIO_enableInt(Board_PA5,GPIO_INT_RISING);
		Task_sleep(700);
		GPIO_disableInt(Board_PA5); //might be redundant
		//System_printf("input 1: %d,	input 2: %d, input 3: %d, input 4: %d\n", input[0],input[1],input[2],input[3]);
    	//System_flush();
	} //END OF WHILE(1)
}

// ======== ControlFxn ========
Void ControlFxn(UArg arg0, UArg arg1) {
	//init vars
	float Kp=2.0,Ki=0,Kd=0;
	uint32_t output[4];
	float error[3];
	float previous_error[3] = {0,0,0};

	float deriv0,deriv1;
	float cntl_input[3];
	int Compensation[3];

	System_printf("Initializing Feedback Controller...\n");
	System_flush();

	while (1) {
		//Convert input (pitch roll) into degrees
		cntl_input[0] =(float) (-1.0)*(30.0*(input[1]-532)/430.0 - 15.0);
		cntl_input[1] =(float) (-1.0)*(30.0*(input[3]-532)/430.0 - 15.0);

		//Error Calculation, and throw out bad inputs
		if(cntl_input[0]<15.0 && cntl_input[0]>-15.0 )
			error[0] = cntl_input[0]-controlData.angle_current[0]; //PITCH CALCULATION
		if(cntl_input[1]<15.0 && cntl_input[1]>-15.0 )
			error[1] = cntl_input[1]-controlData.angle_current[1]; //ROLL CALCULATION

		//PID calculations
		controlData.IntegralSum[0] += error[0]*dT;
		controlData.IntegralSum[1] += error[0]*dT;
		deriv0 = (error[0] - previous_error[0])/dT;
		deriv1 = (error[1] - previous_error[1])/dT;

		//PID compensations
		Compensation[0] = (int) (Kp*error[0]+Ki*controlData.IntegralSum[0]+Kd*deriv0);
		Compensation[1] = (int) (Kp*error[1]+Ki*controlData.IntegralSum[1]+Kd*deriv1);

		//previous_error = error
		previous_error[0] = error[0];
		previous_error[1] = error[1];
		previous_error[2] = error[2];

		//Calculate control actions
		output[0] = input[0]+Compensation[0]-Compensation[1];
		output[1] = input[0]-Compensation[0]-Compensation[1];
		output[2] = input[0]+Compensation[0]+Compensation[1];
		output[3] = input[0]-Compensation[0]+Compensation[1];

		//Output PWM to motors
		PWMPulseWidthSet(PWM0_BASE, PWM_OUT_0, (output[0]+20) * ui32Load / 10000);
		PWMPulseWidthSet(PWM0_BASE, PWM_OUT_2, (output[1]-10) * ui32Load / 10000);
		PWMPulseWidthSet(PWM0_BASE, PWM_OUT_4, (output[2]-10) * ui32Load / 10000);
		PWMPulseWidthSet(PWM0_BASE, PWM_OUT_6, (output[3]-10) * ui32Load / 10000);
		Task_sleep(2500); //Delay (100Hz)
	} //END OF WHILE(1)
}

Void PWMinputFxn0(Void)
{
	if(flag == 0){
		rising = Clock_getTicks();
		GPIO_enableInt(Board_PA2,GPIO_INT_FALLING);
		flag = 1;
	}
	else if(flag == 1){
		falling = Clock_getTicks();
		GPIO_disableInt(Board_PA2);
		flag = 0;
		total = (float) (falling - rising)*51.18;
		total2 = (int) (total/10) + 5;
		if(total2 < 1100)
			input[0] = total2;

	    GPIO_clearInt(Board_PA2);
	}
}

Void PWMinputFxn1(Void)
{
	if(flag == 0){
		rising = Clock_getTicks();
		GPIO_enableInt(Board_PA3,GPIO_INT_FALLING);
		flag = 1;
	}
	else if(flag == 1){
		falling = Clock_getTicks();
		GPIO_disableInt(Board_PA3);
		flag = 0;
		total = (float) (falling - rising)*51.18;
		total2 = (int) (total/10) + 5;
		if(total2 < 1100)
			input[1] = total2;

	    GPIO_clearInt(Board_PA3);
	}
}

//
Void PWMinputFxn2(Void)
{
	if(flag == 0){
		rising = Clock_getTicks();
		GPIO_enableInt(Board_PA4,GPIO_INT_FALLING);
		flag = 1;
	}
	else if(flag == 1){
		falling = Clock_getTicks();
		GPIO_disableInt(Board_PA4);
		flag = 0;
		total = (float) (falling - rising)*51.18;
		total2 = (int) (total/10) + 5;
		if(total2 < 1100)
			input[2] = total2;

	    GPIO_clearInt(Board_PA5);
	}
}

//
Void PWMinputFxn3(Void)
{
	if(flag == 0){
		rising = Clock_getTicks();
		GPIO_enableInt(Board_PA5,GPIO_INT_FALLING);
		flag = 1;
	}
	else if(flag == 1){
		falling = Clock_getTicks();
		GPIO_disableInt(Board_PA5);
		flag = 0;
		total = (float) (falling - rising)*51.18;
		total2 = (int) (total/10) + 5;
		if(total2 < 1100)
			input[3] = total2;

	    GPIO_clearInt(Board_PA5);
	}
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

	System_printf("Starting up KIRC flight computer software...\n");
	System_flush();

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
    GPIO_setupCallbacks(&Board_gpioCallbacks1);

	// Enable PWM
	ui32PWMClock = SysCtlClockGet() / 64;
	ui32Load = (ui32PWMClock / PWM_FREQUENCY) - 1;


	PWMGenConfigure(PWM0_BASE, PWM_GEN_0, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_0, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_1, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_1, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_2, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_2, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_3, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_3, ui32Load);

	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_0, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_0_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_0);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_2, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_2_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_1);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_4, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_4_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_2);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_6, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_6_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_3);

	System_printf("\fStarting BIOS...\n");
	System_flush();

	BIOS_start();	// Start BIOS
	return (0);
}
