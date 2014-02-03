/*************************************************************
 * TITLE: Main.c
 * DESCR: Contains entry point into program
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

#define PWM_FREQUENCY 51
volatile uint32_t ui32Load;
volatile uint32_t ui32PWMClock;
volatile uint32_t ui8Adjust = 500;

// ======== consoleFxn ========
Void ReadSensorsFxn(UArg arg0, UArg arg1) {
	IMUdata_t Accel;
	IMUdata_t Gyro, Gyro_Offset;
	IMUdata_t Magn, Magn_Offset;
	Quaternion_t State;
	State.q1 = 1.0;
	State.q2 = 0.0;
	State.q3 = 0.0;
	State.q4 = 0.0;
	float Gyro_memory[15];
	Clear_Array(Gyro_memory, sizeof(Gyro_memory) / 4); //Clear gyro memory array

	//I2C0_MasterInit();	//delete later maybe

	//Init Sensors
	Accel_Init();
	Task_sleep(50);
	Gyro_Init();
	Task_sleep(50);
	Magn_Init();

	//Calibrate sensors
	Calib_Accel();
	Task_sleep(50);
	Gyro_Offset = Calib_Gyro();
	Task_sleep(50);

	while (1) {
		GPIO_toggle(Board_LED1);
		Accel = Read_Accel(); //Read the accelerometer
		Gyro = Read_Gyro(Gyro_Offset); //Read the Gyroscope
		Magn = Read_Magn(Magn_Offset); //Read Magnetometer
		Gyro = Filter_Data(Gyro, Gyro_memory); //Filter the gyro data
		State = Update_State(Gyro, Accel, State, SAMPLETIME);

		printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",State.q1,State.q2,State.q3,State.q4);
		fflush(stdout);

		Task_sleep(25);
	} //END OF WHILE(1)
}

/*
 *  ======== gpioButtonFxn0 ========
 *  Callback function for the GPIO interrupt on Board_BUTTON0.
 */
Void gpioButtonFxn0(Void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_toggle(Board_LED2);
    GPIO_clearInt(Board_BUTTON0);
    ui8Adjust -= 5;
	if (ui8Adjust < 500){
		ui8Adjust = 500;
	}
	PWMPulseWidthSet(PWM1_BASE, PWM_OUT_0, ui8Adjust * ui32Load / 10000);
}

/*
 *  ======== gpioButtonFxn1 ========
 *  Callback function for the GPIO interrupt on Board_BUTTON1.
 *  This may not be used for all boards.
 */
Void gpioButtonFxn1(Void)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_toggle(Board_LED2);
    GPIO_clearInt(Board_BUTTON1);
    ui8Adjust += 5;
	if (ui8Adjust > 1000){
		ui8Adjust = 1000;
	}
	PWMPulseWidthSet(PWM1_BASE, PWM_OUT_0, ui8Adjust * ui32Load / 10000);
}

//======== main ========
Int main(Void) {
	// Call board init functions
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initUSB(Board_USBDEVICE);
	Board_initI2C();
	Board_initPWM();

	// Turn on user LED
	GPIO_write(Board_LED0, Board_LED_ON);

	System_printf("Starting up KIRC flight computer software...\n");

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

	// Initialize the USB CDC device for logging transport
	USBCDCD_init();

    // Initialize interrupts for all ports that need them
    GPIO_setupCallbacks(&Board_gpioCallbacks0);

    // Enable interrupts
    GPIO_enableInt(Board_BUTTON0, GPIO_INT_BOTH_EDGES);
	GPIO_enableInt(Board_BUTTON1, GPIO_INT_BOTH_EDGES);

	ui32PWMClock = SysCtlClockGet() / 64;
	ui32Load = (ui32PWMClock / PWM_FREQUENCY) - 1;
	PWMGenConfigure(PWM1_BASE, PWM_GEN_0, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM1_BASE, PWM_GEN_0, ui32Load);

	PWMPulseWidthSet(PWM1_BASE, PWM_OUT_0, 500 * ui32Load / 10000);
	PWMOutputState(PWM1_BASE, PWM_OUT_0_BIT, true);
	PWMGenEnable(PWM1_BASE, PWM_GEN_0);

	srand(0xBEA5);

	// Start BIOS
	BIOS_start();

	return (0);
}
