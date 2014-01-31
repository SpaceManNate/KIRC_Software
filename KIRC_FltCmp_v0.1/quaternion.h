/********************************************************************
* HEAD: quaternion.h
* DESC: Contains definitions and function prototypes for
* 		the quaternion.c custom library
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef QUATERNION_H_
#define QUATERNION_H_

#define BETA 0.1  //IMU data algorithm gain parameter

//Quaternion data structure
typedef struct Quaternion{
	float q1;
	float q2;
	float q3;
	float q4;
} Quaternion_t;

//Function Prototypes
Quaternion_t Update_State(IMUdata_t Gyro, IMUdata_t Accel, Quaternion_t Data, float SamplePeriod);

#endif /* QUATERNION_H_ */
