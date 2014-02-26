/********************************************************************
* HEAD: sensors.h
* DESC: Contains definitions and function prototypes for
* 		the sensors.c custom library
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef SENSORS_H_
#define SENSORS_H_

#include "system.h"

//Sensor Mapping Definitions
#define ADXL_SLAVE_ADDRESS  0x53
#define ADXL_READ_ADDRESS   0x32
#define GYRO_SLAVE_ADDRESS  0x69
#define GYRO_READ_ADDRESS   0x28
#define MAGN_SLAVE_ADDRESS  0x1E
#define MAGN_READ_ADDRESS   0x03

//Raw IMU Data Structure
typedef struct RawIMUdata{
	short x;
	short y;
	short z;
} RawIMUdata_t;

//Function Prototypes
void Accel_Init(void);
RawIMUdata_t GetData_Accel(void);
void Calib_Accel(void);
void Read_Accel(void);

void Gyro_Init(void);
RawIMUdata_t GetData_Gyro(void);
void Calib_Gyro(void);
void Read_Gyro(void);

void Magn_Init(void);
RawIMUdata_t GetData_Magn(void);
void Calib_Magn(void);
void Read_Magn(void);

void Filter_GyroData(void);

//I2C APIs from customized from Tivaware
unsigned char I2C0_RxData(unsigned char Slave_Addr,unsigned char Reg_Addr);
void I2C0_TxData(unsigned char Slave_Addr,unsigned char Reg_Addr,unsigned char Data);

#endif /* SENSORS_H_ */
