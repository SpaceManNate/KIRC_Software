/********************************************************************
* HEAD: sensors.c
* DESC: Contains functions for initializing and reading the
* 		different sensors contained in the IMU
* AUTH: Nathaniel Cain
********************************************************************/
#include "system.h"

//*************************************************************************
// Accel_Init function
// I/O: Void
// Initializes the accelerometer (ADXL345)
//*************************************************************************
void Accel_Init(void){
	//Reset Accel
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x2D,0x00);
	//Standby Mode
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x2D,0x10);
	//Set Resolution, Set 16G max read limit
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x31,0x0B);
	//Measure Mode
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x2D,0x08);
}

//*************************************************************************
// GetData_Accel function
// Outputs Raw Sensor Data as RawIMUdata_t structure
// Reads the accelerometer for all axes
//*************************************************************************
RawIMUdata_t GetData_Accel(void){
	RawIMUdata_t Accel;
	unsigned short i;
	char readingAccel[6];
	unsigned char registerAddr;

	registerAddr = ADXL_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for(i=0; i<6; i++){
		readingAccel[i] = I2C0_RxData(ADXL_SLAVE_ADDRESS,registerAddr++);
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
void Calib_Accel(void){
	RawIMUdata_t Accel;
	unsigned short i;
	short tot_x=0,tot_y=0,tot_z=0;
	short off_x,off_y,off_z;

	//read 50 data points
	for(i=0;i<50;i++){
		SysCtlDelay(100000); //delay some to get new samples
		Accel=GetData_Accel(); //read accel
		//Keep running total for each axis
		tot_x += Accel.x;
		tot_y += Accel.y;
		tot_z += Accel.z;
	}

	//Find the offset based on the average
	off_x = (-1)*(((tot_x/50))/4);
	off_y = (-1)*(((tot_y/50))/4);
	off_z = (-1)*(((tot_z/50) - 255)/4);

	//Send offsets to the accelerometer
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x1E,off_x);
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x1F,off_y);
	I2C0_TxData(ADXL_SLAVE_ADDRESS,0x20,off_z);
}

//*************************************************************************
// Read_Accel function
// Input: raw data, Output: processed data
// Processes the raw accelerometer data by converting to float
// and filtering noise
//*************************************************************************
IMUdata_t Read_Accel(void){
	IMUdata_t Accel;
	RawIMUdata_t rawAccel;

	//Read the accelerometer
	rawAccel = GetData_Accel();
	//Convert to float and put into structure
	Accel.x = 0.0039*rawAccel.x;
	Accel.y = 0.0039*rawAccel.y;
	Accel.z = 0.0039*rawAccel.z;
	//PUT FILTERING ALGORITHM HERE

	return Accel;
}

//*************************************************************************
// Gyro_Init function
// I/O: VOID
// Initializes the gyroscope (L3G4200D)
//*************************************************************************
void Gyro_Init(void){
	//Set Gyro to continuous update
	//250DPS sensitivity
	I2C0_TxData(GYRO_SLAVE_ADDRESS,0x23,0x00);
	//Start measurement mode
	I2C0_TxData(GYRO_SLAVE_ADDRESS,0x20,0x1F);
}

//*************************************************************************
// GetData_Gyro function
// Outputs Raw Sensor Data as IMUdata_t structure
// Reads the gyroscope for all axes
//*************************************************************************
RawIMUdata_t GetData_Gyro(void){
	RawIMUdata_t Gyro;
	unsigned short i;
	char readingGyro[6];
	unsigned char registerAddr;

	registerAddr = GYRO_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for(i=0; i<6; i++){
		readingGyro[i] = I2C0_RxData(GYRO_SLAVE_ADDRESS,registerAddr++);
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
IMUdata_t Calib_Gyro(void){
	IMUdata_t Gyro_Offset;
	RawIMUdata_t rawGyro;
	unsigned short i;
	float tot_x=0, tot_y=0, tot_z=0;

	//Take 200 samples and keep running total
	for(i=0;i<200;i++){
		SysCtlDelay(100000); //delay some to get new samples
		rawGyro = GetData_Gyro(); //read accel
		//Convert to float, subtract offset, and put into structure
		Gyro_Offset.x = 1.2*0.02625*rawGyro.x;
		Gyro_Offset.y = 1.2*0.02625*rawGyro.y;
		Gyro_Offset.z = 1.2*0.02625*rawGyro.z;

		//Keep running total for each axis
		tot_x += Gyro_Offset.x;
		tot_y += Gyro_Offset.y;
		tot_z += Gyro_Offset.z;
	}

	//take average of all the samples as an offset
	Gyro_Offset.x = tot_x/200.0;
	Gyro_Offset.y = tot_y/200.0;
	Gyro_Offset.z = tot_z/200.0;
	return Gyro_Offset; //Return the structure
}

//*************************************************************************
// Read_Gyro function
// Outputs processed gyro data as structure
// Input is offset from calibration
// Reads the gyro, processes the data, and outputs in structure format
//*************************************************************************
IMUdata_t Read_Gyro(IMUdata_t Offset){
	IMUdata_t Gyro;
	RawIMUdata_t rawGyro;

	//Read the sensor
	rawGyro = GetData_Gyro();
	//Convert to float, subtract offset, and put into structure
	Gyro.x = 1.2*0.02625*rawGyro.x-Offset.x;
	Gyro.y = 1.2*0.02625*rawGyro.y-Offset.y;
	Gyro.z = 1.2*0.02625*rawGyro.z-Offset.z;

	//Convert from deg/s to rad/s
	Gyro.x = Gyro.x*PI/180.0;
	Gyro.y = Gyro.y*PI/180.0;
	Gyro.z = Gyro.z*PI/180.0;

	return Gyro; //Return the structure
}

//*************************************************************************
// Magn_Init function
// I/O: VOID
// Initializes the magnetometer (HMC5883L)
//*************************************************************************
void Magn_Init(void){
	//Put sensor in standby
	I2C0_TxData(MAGN_SLAVE_ADDRESS,0x02,0x02);
	//Set Magn to 80Hz, no bias, no averaging
	I2C0_TxData(MAGN_SLAVE_ADDRESS,0x00,0x18);
	// +/-1.3Ga sensitivity, 1090 LSb/Ga
	I2C0_TxData(MAGN_SLAVE_ADDRESS,0x01,0x20);
	// Start measurement, continuous mode
	I2C0_TxData(MAGN_SLAVE_ADDRESS,0x02,0x00);
}

//*************************************************************************
// GetData_Magn function
// OUTPUT: Raw Magnetometer data
// Gets the raw unprocessed data from the magnetometer
//*************************************************************************
RawIMUdata_t GetData_Magn(void){
	RawIMUdata_t Magn;
	unsigned short i;
	char readingMagn[6];
	unsigned char registerAddr;

	registerAddr = MAGN_READ_ADDRESS; //Reset address (for next read)
	//Loop Through Elements
	for(i=0; i<6; i++){
		readingMagn[i] = I2C0_RxData(MAGN_SLAVE_ADDRESS,registerAddr++);
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
IMUdata_t Calib_Magn(void){
	IMUdata_t Magn_Offset;
	RawIMUdata_t rawMagn;
	unsigned short i;
	float tot_x=0, tot_y=0, tot_z=0;

	//Take 200 samples and keep running total
	for(i=0;i<200;i++){
		SysCtlDelay(100000); //delay some to get new samples
		rawMagn = GetData_Magn(); //read accel
		//Convert to float, subtract offset, and put into structure
		Magn_Offset.x = 0.00092*rawMagn.x;
		Magn_Offset.y = 0.00092*rawMagn.y;
		Magn_Offset.z = 0.00092*rawMagn.z;

		//Keep running total for each axis
		tot_x += Magn_Offset.x;
		tot_y += Magn_Offset.y;
		tot_z += Magn_Offset.z;
	}

	//take average of all the samples as an offset
	Magn_Offset.x = 0.0;// tot_x/200.0;
	Magn_Offset.y = 0.0;//tot_y/200.0;
	Magn_Offset.z = 0.0;//tot_z/200.0;
	return Magn_Offset; //Return the structure
}

//*************************************************************************
// Read_Magn function
// OUTPUT: Processed Magnetometer data
// Reads the magnetometer, procceses the data, and outputs
//*************************************************************************
IMUdata_t Read_Magn(IMUdata_t Offset){
	IMUdata_t Magn;
	RawIMUdata_t rawMagn;

	//Read the sensor
	rawMagn = GetData_Magn();
	//Convert to float, subtract offset, and put into structure
	Magn.x = 0.00092*rawMagn.x;//-Offset.x;
	Magn.y = 0.00092*rawMagn.y;//-Offset.y;
	Magn.z = 0.00092*rawMagn.z;//-Offset.z;

	return Magn; //Return the structure
}

//*************************************************************************
// Filter_Data function
// INPUT: Unfiltered data and last 5 measurements on each axis
// OUTPUT: Filtered data
// Uses a running average filter to filter each axis of data
//*************************************************************************
IMUdata_t Filter_Data(IMUdata_t Data,float Memory[15]){
	unsigned short i;
	//Running average filter
	Memory[0]=(Data.x+Memory[1]+Memory[2]+Memory[3]+Memory[4])/5;
	Memory[5]=(Data.y+Memory[6]+Memory[7]+Memory[8]+Memory[9])/5;
	Memory[10]=(Data.z+Memory[11]+Memory[12]+Memory[13]+Memory[14])/5;

	//Move back memory elements for next measurement
	for(i=0;i<4;i++){
		Memory[i+1]=Memory[i];
		Memory[i+6]=Memory[i+5];
		Memory[i+11]=Memory[i+10];
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
void Clear_Array(float *Array, unsigned int size){
	unsigned short index;
	//Reset all array elements to zero
	for(index=0;index<size;index++){
		*Array = 0;
		Array++;
	}
}
