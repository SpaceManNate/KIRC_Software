/********************************************************************
* HEAD: quaternion.c file
* DESC: Contains functions for taking the sensor data
* 		and turning it into a quaternion state estimate
* 		also contains functions for the PID algorithms
* AUTH: Nathaniel Cain
********************************************************************/
#include "system.h"

//*************************************************************************
// Update_State function
// INPUT: Gyro and Accel data, with the previous estimate
// OUTPUT: Quaternion state estimate
// Processes the accelerometer and gyroscope data into a quaternion vector
// This algorithm was taken from the Madgwick AHRS IMU algorithm
// See: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
//*************************************************************************
Quaternion_t Update_State(IMUdata_t Gyro, IMUdata_t Accel, Quaternion_t Data, float SamplePeriod){
	Quaternion_t Return; //Return structure
	// short name local variable for readability
	float q1 = Data.q1, q2 = Data.q2, q3 = Data.q3, q4 = Data.q4;
	float ax = Accel.x,ay = Accel.y, az = Accel.z;
	float gx = Gyro.x, gy = Gyro.y, gz = Gyro.z;
    float norm;
    float s1, s2, s3, s4;
    float qDot1, qDot2, qDot3, qDot4;

    // Auxiliary variables to avoid repeated arithmetic
    float _2q1 = 2.0 * q1;
    float _2q2 = 2.0 * q2;
    float _2q3 = 2.0 * q3;
    float _2q4 = 2.0 * q4;
    float _4q1 = 4.0 * q1;
    float _4q2 = 4.0 * q2;
    float _4q3 = 4.0 * q3;
    float _8q2 = 8.0 * q2;
    float _8q3 = 8.0 * q3;
    float q1q1 = q1 * q1;
    float q2q2 = q2 * q2;
    float q3q3 = q3 * q3;
    float q4q4 = q4 * q4;

    // Normalize accelerometer measurement
    norm = (float)sqrt(ax*ax + ay*ay + az*az);
    if (norm == 0.0) return Data; // handle NaN
    norm = 1.0 / norm;        // use reciprocal for division
    ax *= norm;
    ay *= norm;
    az *= norm;

    // Gradient decent algorithm corrective step
    s1 = _4q1 * q3q3 + _2q3 * ax + _4q1 * q2q2 - _2q2 * ay;
    s2 = _4q2 * q4q4 - _2q4 * ax + 4.0 * q1q1 * q2 - _2q1 * ay - _4q2 + _8q2 * q2q2 + _8q2 * q3q3 + _4q2 * az;
    s3 = 4.0 * q1q1 * q3 + _2q1 * ax + _4q3 * q4q4 - _2q4 * ay - _4q3 + _8q3 * q2q2 + _8q3 * q3q3 + _4q3 * az;
    s4 = 4.0 * q2q2 * q4 - _2q2 * ax + 4.0 * q3q3 * q4 - _2q3 * ay;
    norm = 1.0 / (float)sqrt(s1*s1 + s2*s2 + s3*s3 + s4*s4);    // normalize step magnitude
    s1 *= norm;
    s2 *= norm;
    s3 *= norm;
    s4 *= norm;

    // Compute rate of change of quaternion
    qDot1 = 0.5 * (-q2 * gx - q3 * gy - q4 * gz) - BETA * s1;
    qDot2 = 0.5 * (q1 * gx + q3 * gz - q4 * gy) - BETA * s2;
    qDot3 = 0.5 * (q1 * gy - q2 * gz + q4 * gx) - BETA * s3;
    qDot4 = 0.5 * (q1 * gz + q2 * gy - q3 * gx) - BETA * s4;

    // Integrate to yield quaternion
    q1 += qDot1 * SamplePeriod;
    q2 += qDot2 * SamplePeriod;
    q3 += qDot3 * SamplePeriod;
    q4 += qDot4 * SamplePeriod;
    norm = 1.0 / (float)sqrt(q1*q1 + q2*q2 + q3*q3 + q4*q4);    // normalize quaternion
    Return.q1 = q1 * norm;
    Return.q2 = q2 * norm;
    Return.q3 = q3 * norm;
    Return.q4 = q4 * norm;
    return Return;
}

