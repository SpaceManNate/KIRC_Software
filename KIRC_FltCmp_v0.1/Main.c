/*************************************************************
 * TITLE: Main.c
 * DESCR: Contains entry point into program
 *		  See README.txt for description of project
 * AUTHR: Nathaniel Cain
 * 		  Wade Henderson
 ************************************************************/
#include "system.h"

// ======== consoleFxn ========
Void consoleFxn(UArg arg0, UArg arg1) {

	//Read write example
	/*
	 printf("Enter a duration (ms): ");
	 fflush(stdout);
	 scanf("%d", &sleepDur);
	 fflush(stdin);
	 */

	I2C_Handle i2c;
	I2C_Params i2cParams;

	// Create I2C for usage
	I2C_Params_init(&i2cParams);
	i2cParams.bitRate = I2C_400kHz;
	i2c = I2C_open(Board_I2C0, &i2cParams);
	if (i2c == NULL) {
		System_abort("Error Initializing I2C\n");
	} else {
		System_printf("I2C Initialized!\n");
	}
	System_flush();


	IMUdata_t Accel;
	IMUdata_t Gyro, Gyro_Offset;
	IMUdata_t Magn, Magn_Offset;
	ALTM_CalData_t Altim_caldata;
	float altitude;
	long temp, tempC, pressure;
	float groundLevel=0;
	int i;

	Quaternion_t State;
	State.q1 = 1.0;
	State.q2 = 0.0;
	State.q3 = 0.0;
	State.q4 = 0.0;
	float Gyro_memory[15];
	Clear_Array(Gyro_memory, sizeof(Gyro_memory) / 4); //Clear gyro memory array

	I2C0_MasterInit();	//delete later maybe

	//Init Sensors
	Accel_Init();
	Task_sleep(50);
	Gyro_Init();
	Task_sleep(50);
	Magn_Init();
	Altim_caldata = Altm_Init();

	//Calibrate sensors
	Calib_Accel();
	Task_sleep(50);
	Gyro_Offset = Calib_Gyro();
	Task_sleep(50);
/*
	for(i=0; i<15; i++){
		groundLevel += Get_Altitude(Altim_caldata);
	}
	groundLevel = groundLevel/15.0;
*/
	while (1) {
		GPIO_toggle(Board_LED1);
		Accel = Read_Accel(); //Read the accelerometer
		Gyro = Read_Gyro(Gyro_Offset); //Read the Gyroscope
		Magn = Read_Magn(Magn_Offset); //Read Magnetometer
		Gyro = Filter_Data(Gyro, Gyro_memory); //Filter the gyro data
		State = Update_State(Gyro, Accel, State, SAMPLETIME);

		//Altitude = Get_Altitude(Altim_caldata)-groundLevel;
		altitude = Get_Altitude(Altim_caldata);
		temp =  Get_Temp(Altim_caldata);
		tempC = Get_TempC(Altim_caldata);
		pressure = Get_Pressure(Altim_caldata, temp);

		//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",State.q1,State.q2,State.q3,State.q4);
		//printf("%f\n", Altitude);
		//printf("Altitude\t%0.1f Feet\n", ((double)Altitude)*3.280839895);

		printf("Pressure %d Pa, TempC %d C, Temp %d, Altitude %0.1f\n", (int)pressure, (int)tempC, (int)temp, altitude);
		fflush(stdout);

		Task_sleep(25);
	} //END OF WHILE(1)
}


//======== main ========
Int main(Void) {
	// Call board init functions
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initUSB(Board_USBDEVICE);
	Board_initI2C();

	// Turn on user LED
	GPIO_write(Board_LED0, Board_LED_ON);

	System_printf("Starting KIRC flight computer software...\n");

	/*
	 *  Add the UART device to the system.
	 *  All UART peripherals must be setup and the module must be initialized
	 *  before opening.  This is done by Board_initUART().  The functions used
	 *  are implemented in UARTUtils.c.
	 */
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


	// Start BIOS
	BIOS_start();

	return (0);
}
