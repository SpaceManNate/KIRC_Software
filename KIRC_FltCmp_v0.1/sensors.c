/********************************************************************
 * HEAD: sensors.c
 * DESC: Contains functions for initializing and reading the
 * 		different sensors contained in the IMU
 * AUTH: Nathaniel Cain
 ********************************************************************/
#include "system.h"
#include "math.h"

//*************************************************************************
// Accel_Init function
// I/O: Void
// Initializes the accelerometer (ADXL345)
//*************************************************************************
void Accel_Init(void) {
	//Reset Accel
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x2D, 0x00);
	//Standby Mode
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x2D, 0x10);
	//Set Resolution, Set 16G max read limit
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x31, 0x0B);
	//Measure Mode
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x2D, 0x08);
}

//*************************************************************************
// GetData_Accel function
// Outputs Raw Sensor Data as RawIMUdata_t structure
// Reads the accelerometer for all axes
//*************************************************************************
RawIMUdata_t GetData_Accel(void) {
	RawIMUdata_t Accel;
	unsigned short i;
	char readingAccel[6];
	unsigned char registerAddr;

	registerAddr = ADXL_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for (i = 0; i < 6; i++) {
		readingAccel[i] = I2C0_RxData(ADXL_SLAVE_ADDRESS, registerAddr++);
	}
	//Bit shift values for each axis
	Accel.x = (readingAccel[1] << 8) | readingAccel[0];
	Accel.y = (readingAccel[3] << 8) | readingAccel[2];
	Accel.z = (readingAccel[5] << 8) | readingAccel[4];

	return Accel; //Return the structure
}

//*************************************************************************
// Calib_Accel function
// I/O: VOID
// Calibrates the accelerometer and sends the offset
// directly to the sensor (has built in offset registers)
//*************************************************************************
void Calib_Accel(void) {
	RawIMUdata_t Accel;
	unsigned short i;
	short tot_x = 0, tot_y = 0, tot_z = 0;
	short off_x, off_y, off_z;

	//read 50 data points
	for (i = 0; i < 50; i++) {
		SysCtlDelay(100000); //delay some to get new samples
		Accel = GetData_Accel(); //read accel
		//Keep running total for each axis
		tot_x += Accel.x;
		tot_y += Accel.y;
		tot_z += Accel.z;
	}

	//Find the offset based on the average
	off_x = (-1) * (((tot_x / 50)) / 4);
	off_y = (-1) * (((tot_y / 50)) / 4);
	off_z = (-1) * (((tot_z / 50) - 255) / 4);

	//Send offsets to the accelerometer
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x1E, off_x);
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x1F, off_y);
	I2C0_TxData(ADXL_SLAVE_ADDRESS, 0x20, off_z);
}

//*************************************************************************
// Read_Accel function
// Input: raw data, Output: processed data
// Processes the raw accelerometer data by converting to float
// and filtering noise
//*************************************************************************
IMUdata_t Read_Accel(void) {
	IMUdata_t Accel;
	RawIMUdata_t rawAccel;

	//Read the accelerometer
	rawAccel = GetData_Accel();
	//Convert to float and put into structure
	Accel.x = 0.0039 * rawAccel.x;
	Accel.y = 0.0039 * rawAccel.y;
	Accel.z = 0.0039 * rawAccel.z;
	//PUT FILTERING ALGORITHM HERE

	return Accel;
}

//*************************************************************************
// Gyro_Init function
// I/O: VOID
// Initializes the gyroscope (L3G4200D)
//*************************************************************************
void Gyro_Init(void) {
	//Set Gyro to continuous update
	//250DPS sensitivity
	I2C0_TxData(GYRO_SLAVE_ADDRESS, 0x23, 0x00);
	//Start measurement mode
	I2C0_TxData(GYRO_SLAVE_ADDRESS, 0x20, 0x1F);
}

//*************************************************************************
// GetData_Gyro function
// Outputs Raw Sensor Data as IMUdata_t structure
// Reads the gyroscope for all axes
//*************************************************************************
RawIMUdata_t GetData_Gyro(void) {
	RawIMUdata_t Gyro;
	unsigned short i;
	char readingGyro[6];
	unsigned char registerAddr;

	registerAddr = GYRO_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for (i = 0; i < 6; i++) {
		readingGyro[i] = I2C0_RxData(GYRO_SLAVE_ADDRESS, registerAddr++);
	}
	//Bit shift values for each axis
	Gyro.x = (readingGyro[1] << 8) | readingGyro[0];
	Gyro.y = (readingGyro[3] << 8) | readingGyro[2];
	Gyro.z = (readingGyro[5] << 8) | readingGyro[4];

	return Gyro; //Return the structure
}

//*************************************************************************
// Calib_Gyro function
// Outputs Calibration info as IMUdata_t structure
// Calibrates the gyroscope for all axes
//*************************************************************************
IMUdata_t Calib_Gyro(void) {
	IMUdata_t Gyro_Offset;
	RawIMUdata_t rawGyro;
	unsigned short i;
	float tot_x = 0, tot_y = 0, tot_z = 0;

	//Take 200 samples and keep running total
	for (i = 0; i < 200; i++) {
		SysCtlDelay(100000); //delay some to get new samples
		rawGyro = GetData_Gyro(); //read accel
		//Convert to float, subtract offset, and put into structure
		Gyro_Offset.x = 1.2 * 0.02625 * rawGyro.x;
		Gyro_Offset.y = 1.2 * 0.02625 * rawGyro.y;
		Gyro_Offset.z = 1.2 * 0.02625 * rawGyro.z;

		//Keep running total for each axis
		tot_x += Gyro_Offset.x;
		tot_y += Gyro_Offset.y;
		tot_z += Gyro_Offset.z;
	}

	//take average of all the samples as an offset
	Gyro_Offset.x = tot_x / 200.0;
	Gyro_Offset.y = tot_y / 200.0;
	Gyro_Offset.z = tot_z / 200.0;
	return Gyro_Offset; //Return the structure
}

//*************************************************************************
// Read_Gyro function
// Outputs processed gyro data as structure
// Input is offset from calibration
// Reads the gyro, processes the data, and outputs in structure format
//*************************************************************************
IMUdata_t Read_Gyro(IMUdata_t Offset) {
	IMUdata_t Gyro;
	RawIMUdata_t rawGyro;

	//Read the sensor
	rawGyro = GetData_Gyro();
	//Convert to float, subtract offset, and put into structure
	Gyro.x = 1.2 * 0.02625 * rawGyro.x - Offset.x;
	Gyro.y = 1.2 * 0.02625 * rawGyro.y - Offset.y;
	Gyro.z = 1.2 * 0.02625 * rawGyro.z - Offset.z;

	//Convert from deg/s to rad/s
	Gyro.x = Gyro.x * PI / 180.0;
	Gyro.y = Gyro.y * PI / 180.0;
	Gyro.z = Gyro.z * PI / 180.0;

	return Gyro; //Return the structure
}

//*************************************************************************
// Magn_Init function
// I/O: VOID
// Initializes the magnetometer (HMC5883L)
//*************************************************************************
void Magn_Init(void) {
	//Put sensor in standby
	I2C0_TxData(MAGN_SLAVE_ADDRESS, 0x02, 0x02);
	//Set Magn to 80Hz, no bias, no averaging
	I2C0_TxData(MAGN_SLAVE_ADDRESS, 0x00, 0x18);
	// +/-1.3Ga sensitivity, 1090 LSb/Ga
	I2C0_TxData(MAGN_SLAVE_ADDRESS, 0x01, 0x20);
	// Start measurement, continuous mode
	I2C0_TxData(MAGN_SLAVE_ADDRESS, 0x02, 0x00);
}

//*************************************************************************
// GetData_Magn function
// OUTPUT: Raw Magnetometer data
// Gets the raw unprocessed data from the magnetometer
//*************************************************************************
RawIMUdata_t GetData_Magn(void) {
	RawIMUdata_t Magn;
	unsigned short i;
	char readingMagn[6];
	unsigned char registerAddr;

	registerAddr = MAGN_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for (i = 0; i < 6; i++) {
		readingMagn[i] = I2C0_RxData(MAGN_SLAVE_ADDRESS, registerAddr++);
	}
	//Bit shift values for each axis (Z and Y axes were switched for this sensor)
	Magn.x = (readingMagn[1] << 8) | readingMagn[0];
	Magn.z = (readingMagn[3] << 8) | readingMagn[2];
	Magn.y = (readingMagn[5] << 8) | readingMagn[4];

	return Magn; //Return the structure
}

//*************************************************************************
// Calib_Magn function
// OUTPUT: Magnetometer offset calibration constant
// Takes 100 samples, averages, then returns the float values to
// be used as an offset later for the magnetometer
//*************************************************************************
IMUdata_t Calib_Magn(void) {
	IMUdata_t Magn_Offset;
	RawIMUdata_t rawMagn;
	unsigned short i;
	float tot_x = 0, tot_y = 0, tot_z = 0;

	//Take 200 samples and keep running total
	for (i = 0; i < 200; i++) {
		SysCtlDelay(100000); //delay some to get new samples
		rawMagn = GetData_Magn(); //read accel
		//Convert to float, subtract offset, and put into structure
		Magn_Offset.x = 0.00092 * rawMagn.x;
		Magn_Offset.y = 0.00092 * rawMagn.y;
		Magn_Offset.z = 0.00092 * rawMagn.z;

		//Keep running total for each axis
		tot_x += Magn_Offset.x;
		tot_y += Magn_Offset.y;
		tot_z += Magn_Offset.z;
	}

	//take average of all the samples as an offset
	Magn_Offset.x = 0.0;		// tot_x/200.0;
	Magn_Offset.y = 0.0;		//tot_y/200.0;
	Magn_Offset.z = 0.0;		//tot_z/200.0;
	return Magn_Offset; //Return the structure
}

//*************************************************************************
// Read_Magn function
// OUTPUT: Processed Magnetometer data
// Reads the magnetometer, procceses the data, and outputs
//*************************************************************************
IMUdata_t Read_Magn(IMUdata_t Offset) {
	IMUdata_t Magn;
	RawIMUdata_t rawMagn;

	//Read the sensor
	rawMagn = GetData_Magn();
	//Convert to float, subtract offset, and put into structure
	Magn.x = 0.00092 * rawMagn.x; //-Offset.x;
	Magn.y = 0.00092 * rawMagn.y; //-Offset.y;
	Magn.z = 0.00092 * rawMagn.z; //-Offset.z;

	return Magn; //Return the structure
}

//*************************************************************************
// Filter_Data function
// INPUT: Unfiltered data and last 5 measurements on each axis
// OUTPUT: Filtered data
// Uses a running average filter to filter each axis of data
//*************************************************************************
IMUdata_t Filter_Data(IMUdata_t Data, float Memory[15]) {
	unsigned short i;
	//Running average filter
	Memory[0] = (Data.x + Memory[1] + Memory[2] + Memory[3] + Memory[4]) / 5;
	Memory[5] = (Data.y + Memory[6] + Memory[7] + Memory[8] + Memory[9]) / 5;
	Memory[10] = (Data.z + Memory[11] + Memory[12] + Memory[13] + Memory[14])
			/ 5;

	//Move back memory elements for next measurement
	for (i = 0; i < 4; i++) {
		Memory[i + 1] = Memory[i];
		Memory[i + 6] = Memory[i + 5];
		Memory[i + 11] = Memory[i + 10];
	}
	Data.x = Memory[0];
	Data.y = Memory[5];
	Data.z = Memory[10];

	return Data;
}

//*************************************************************************
// Clear_Array function
// INPUT: Initialized array with random values
// OUTPUT: Zero-d array
// Cycles through all array elements and clears them
//*************************************************************************
void Clear_Array(float *Array, unsigned int size) {
	unsigned short index;
	//Reset all array elements to zero
	for (index = 0; index < size; index++) {
		*Array = 0;
		Array++;
	}
}

//*************************************************************************
// Altm_Init function
// INPUT: Void
// OUTPUT: Calibration data that comes with the altimeter
// Initializes the altimeter (BMP085) by getting all of the calibration data
//*************************************************************************
ALTM_CalData_t Altm_Init(void) {
	ALTM_CalData_t Altim;
	unsigned char cal[22];
	unsigned short i;
	unsigned char registerAddr = 0xAA;

	for (i = 0; i < 22; i++) {
		cal[i] = I2C0_RxData(ALTM_SLAVE_ADDRESS, registerAddr++);
	}

	Altim.AC1 = (cal[0] << 8) | cal[1];
	Altim.AC2 = (cal[2] << 8) | cal[3];
	Altim.AC3 = (cal[4] << 8) | cal[5];
	Altim.AC4 = (cal[6] << 8) | cal[7];
	Altim.AC5 = (cal[8] << 8) | cal[9];
	Altim.AC6 = (cal[10] << 8) | cal[11];
	Altim.B1 = (cal[12] << 8) | cal[13];
	Altim.B2 = (cal[14] << 8) | cal[15];
	Altim.MB = (cal[16] << 8) | cal[17];
	Altim.MC = (cal[18] << 8) | cal[19];
	Altim.MD = (cal[20] << 8) | cal[21];

	return Altim;
}

//*************************************************************************
// Get_Temp function
// INPUT: Calibration data
// OUTPUT: Raw temperature
// Retrieves and calculates raw temperature
//*************************************************************************
long Get_Temp(ALTM_CalData_t Cal) {
	unsigned char read[2];
	long UT, X1, X2, B5;

	////// Read uncompensated temperature value //////
	I2C0_TxData(ALTM_SLAVE_ADDRESS, 0xF4, 0x2E);
	//wait 4.5 ms
	Task_sleep(450);
	read[0] = I2C0_RxData(ALTM_SLAVE_ADDRESS, 0xF6);
	read[1] = I2C0_RxData(ALTM_SLAVE_ADDRESS, 0xF7);
	UT = (read[0] << 8) | read[1];

	////// Calculate true temperature //////
	X1 = ((UT - Cal.AC6) * Cal.AC5) >> 15;
	X2 = (Cal.MC << 11) / (X1 + Cal.MD);
	B5 = X1 + X2;

	return B5;
}

//*************************************************************************
// Get_TempC function
// INPUT: Calibration data
// OUTPUT: Temperature in degrees celsius
// Retrieves raw temperature from Get_Temp and converts to C.
// Used for testing, not needed for altitude calculation.
//*************************************************************************
float Get_TempC(ALTM_CalData_t Cal) {
	long B5;
	B5 = Get_Temp(Cal);

	return ((float) ((B5 + 8) >> 4)) / 10; //in 1.0 degrees C
}

//*************************************************************************
// Get_Pressure function
// INPUT: Calibration data and B5 for raw temp.
// OUTPUT: Pressure in Pa
// Retrieves raw pressure and converts to Pa
//*************************************************************************
long Get_Pressure(ALTM_CalData_t Cal, long B5) {
	unsigned char read[3];
	long UP, X1, X2, X3, B3, B6, p;
	unsigned long B4, B7;
	short oss = 3; //over-sampling setting

	////// Read uncompensated pressure value //////
	I2C0_TxData(ALTM_SLAVE_ADDRESS, 0xF4, (0x34 + (oss << 6)));
	//wait 25.5 ms
	Task_sleep(2550);

	read[0] = I2C0_RxData(ALTM_SLAVE_ADDRESS, 0xF6); //MSB
	read[1] = I2C0_RxData(ALTM_SLAVE_ADDRESS, 0xF7); //LSB
	read[2] = I2C0_RxData(ALTM_SLAVE_ADDRESS, 0xF8); //XLSB
	UP = ((read[0] << 16) | (read[1] << 8) | read[2]) >> (8 - oss);

	////// Calculate true pressure //////
	B6 = B5 - 4000;
	X1 = (B6 * B6) >> 12;
	X1 = (X1 * Cal.B2) >> 11;
	X2 = (Cal.AC2 * B6) >> 11;
	X3 = X1 + X2;
	B3 = ((((Cal.AC1 << 2) + X3) << oss) + 2) >> 2;
	X1 = (Cal.AC3 * B6) >> 13;
	X2 = (B6 * B6) >> 12;
	X2 = (X2 * Cal.B1) >> 16;
	X3 = ((X1 + X2) + 2) >> 2;
	B4 = (Cal.AC4 * (unsigned long) (X3 + 32768)) >> 15;
	B7 = ((unsigned long) UP - B3) * (50000 >> oss);

	if (B7 < 0x80000000)
		p = (B7 << 1) / B4;
	else
		p = (B7 / B4) << 1;

	X1 = (p >> 8);
	X1 = (X1 * X1 * 3038) >> 16;
	X2 = (-7357 * p) >> 16;
	p += ((X1 + X2 + 3791) >> 4);

	return p; //in Pa
}

//*************************************************************************
// Get_Altitude function
// INPUT: Calibration data
// OUTPUT: Altiude in feet
// Gets both raw temp and pressure and calculates the altitude
//*************************************************************************
float Get_Altitude(ALTM_CalData_t Cal) {
	long temp;
	float pressure, altitude, A, B;

	temp = Get_Temp(Cal);
	pressure = Get_Pressure(Cal, temp);

	A = pressure / 101325;
	B = 0.190284;
	altitude = 1 - powf(A, B);
	altitude = altitude * 145366.45;

	return altitude;
}

//*************************************************************************
// GPS_Init function
// INPUT: Void
// OUTPUT: Uart handle
// Sets speed and configures GPS for UART1
//*************************************************************************
UART_Handle GPS_Init(void) {
	UART_Handle uart;
	UART_Params uartParams;

	//Create a UART with data processing off.
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	uartParams.readReturnMode = UART_RETURN_FULL;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 9600;
	uart = UART_open(Board_UART1, &uartParams);

	if (uart == NULL) {
		System_abort("Error opening the UART");
	}

	//Disable sentences that are not needed to save time
	const Char disableGGA[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x24 };
	UART_write(uart, disableGGA, sizeof(disableGGA));
	const Char disableGSA[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x02,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x32 };
	UART_write(uart, disableGSA, sizeof(disableGSA));
	const Char disableGSV[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x03,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x39 };
	UART_write(uart, disableGSV, sizeof(disableGSV));
	const Char disableRMC[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x04,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x40 };
	UART_write(uart, disableRMC, sizeof(disableRMC));
	const Char disableVTG[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x05,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x05, 0x47 };
	UART_write(uart, disableVTG, sizeof(disableVTG));
	const Char disableZDA[] = { 0xB5, 0x62, 0x06, 0x01, 0x08, 0x00, 0xF0, 0x08,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x5B };
	UART_write(uart, disableZDA, sizeof(disableZDA));

	//Change update rate to 5 Hz
	const Char FiveHz[] = { 0xB5, 0x62, 0x06, 0x08, 0x06, 0x00, 0xC8, 0x00,
			0x01, 0x00, 0x01, 0x00, 0xDE, 0x6A };
	UART_write(uart, FiveHz, sizeof(FiveHz));

	//115200 baud command
	const Char baudRate[] = { 0xB5, 0x62, 0x06, 0x00, 0x14, 0x00, 0x01, 0x00,
			0x00, 0x00, 0xD0, 0x08, 0x00, 0x00, 0x00, 0xC2, 0x01, 0x00, 0x07,
			0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x96 };

	UART_write(uart, baudRate, sizeof(baudRate));
	UART_close(uart);

	//Open new UART parameters for new baud rate
	UART_Params_init(&uartParams);
	uartParams.writeDataMode = UART_DATA_BINARY;
	uartParams.readDataMode = UART_DATA_BINARY;
	uartParams.readReturnMode = UART_RETURN_NEWLINE;
	uartParams.readEcho = UART_ECHO_OFF;
	uartParams.baudRate = 115200;
	uart = UART_open(Board_UART1, &uartParams);

	return uart;
}

//*************************************************************************
// BatteryMonitor function
// INPUT: Void
// OUTPUT: Void
// Sets up ADC on PE3 to monitor battery voltage
//*************************************************************************
void BatteryMonitorInit(void) {
	// The ADC0 peripheral must be enabled for use.
	SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);

	// For this example ADC0 is used with AIN0 on port E7.
	// The actual port and pins used may be different on your part, consult
	// the data sheet for more information.  GPIO port E needs to be enabled
	// so these pins can be used.
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);

	// Select the analog ADC function for these pins.
	// Consult the data sheet to see which functions are allocated per pin.
	GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_6);

	// Enable sample sequence 3 with a processor signal trigger.  Sequence 3
	// will do a single sample when the processor sends a signal to start the
	// conversion.  Each ADC module has 4 programmable sequences, sequence 0
	// to sequence 3.  This example is arbitrarily using sequence 3.
	ADCSequenceConfigure(ADC0_BASE, 3, ADC_TRIGGER_PROCESSOR, 0);

	// Configure step 0 on sequence 3.  Sample channel 0 (ADC_CTL_CH0) in
	// single-ended mode (default) and configure the interrupt flag
	// (ADC_CTL_IE) to be set when the sample is done.  Tell the ADC logic
	// that this is the last conversion on sequence 3 (ADC_CTL_END).  Sequence
	// 3 has only one programmable step.  Sequence 1 and 2 have 4 steps, and
	// sequence 0 has 8 programmable steps.  Since we are only doing a single
	// conversion using sequence 3 we will only configure step 0.  For more
	// information on the ADC sequences and steps, reference the datasheet.
	ADCSequenceStepConfigure(ADC0_BASE, 3, 0,
			ADC_CTL_CH0 | ADC_CTL_IE | ADC_CTL_END);

	// Since sample sequence 3 is now configured, it must be enabled.
	ADCSequenceEnable(ADC0_BASE, 3);

	// Clear the interrupt status flag.  This is done to make sure the
	// interrupt flag is cleared before we sample.
	ADCIntClear(ADC0_BASE, 3);

}
