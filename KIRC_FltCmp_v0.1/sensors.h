/********************************************************************
* HEAD: sensors.h
* DESC: Contains definitions and function prototypes for
* 		the sensors.c custom library
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef SENSORS_H_
#define SENSORS_H_

//Sensor Mapping Definitions
#define ADXL_SLAVE_ADDRESS 0x53
#define ADXL_READ_ADDRESS 0x32
#define GYRO_SLAVE_ADDRESS 0x69
#define GYRO_READ_ADDRESS 0x28
#define MAGN_SLAVE_ADDRESS 0x1E
#define MAGN_READ_ADDRESS 0x03
#define ALTM_SLAVE_ADDRESS 0x77
#define ALTM_READ_ADDRESS 0xF6

//Raw IMU Data Structure
typedef struct RawIMUdata{
	short x;
	short y;
	short z;
} RawIMUdata_t;

//Processed IMU Data Structure
typedef struct IMUdata{
	float x;
	float y;
	float z;
} IMUdata_t;

//Processed IMU Data Structure
typedef struct ALTM_CalData{
	short AC1;
	short AC2;
	short AC3;
	unsigned short AC4;
	unsigned short AC5;
	unsigned short AC6;
	short B1;
	short B2;
	short MB;
	short MC;
	short MD;
} ALTM_CalData_t;

//Function Prototypes
void Accel_Init(void);
RawIMUdata_t GetData_Accel(void);
void Calib_Accel(void);
IMUdata_t Read_Accel(void);

void Gyro_Init(void);
RawIMUdata_t GetData_Gyro(void);
IMUdata_t Calib_Gyro(void);
IMUdata_t Read_Gyro(IMUdata_t Offset);

void Magn_Init(void);
RawIMUdata_t GetData_Magn(void);
IMUdata_t Calib_Magn(void);
IMUdata_t Read_Magn(IMUdata_t Offset);

ALTM_CalData_t Altm_Init(void);
long Get_Temp(ALTM_CalData_t Cal);
long Get_TempC(ALTM_CalData_t Cal);
long Get_Pressure(ALTM_CalData_t Cal, long B5);
float Get_Altitude(ALTM_CalData_t Cal);


IMUdata_t Filter_Data(IMUdata_t Data,float Memory[15]);
void Clear_Array(float *Array, unsigned int size);

#endif /* SENSORS_H_ */
