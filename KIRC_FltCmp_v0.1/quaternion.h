/********************************************************************
* HEAD: quaternion.h
* DESC: Contains definitions and function prototypes for
* 		the quaternion.c custom library
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef QUATERNION_H_
#define QUATERNION_H_

#include "system.h"

#define BETA 0.1  //Quaternion gain parameter

//Quaternion data structure
typedef struct Quaternion{
	float q1;
	float q2;
	float q3;
	float q4;
} Quaternion_t;


//Function Prototypes
void Update_State(void);

#endif /* QUATERNION_H_ */
