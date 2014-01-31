/********************************************************************
* HEAD: system.h file
* DESC: Contains standard C header files and peripheral driver
* 		header files from Texas Instruments
* 		Also contains header files specific to this project
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef SYSTEM_H_
#define SYSTEM_H_

//Standard C headers
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//TivaWare (tm) Driver Headers
#include "inc/hw_i2c.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/i2c.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"

//Custom headers produced for KIRC
#include "drivers.h"
#include "sensors.h"
#include "quaternion.h"

//Global Definitions
#define PI  3.14159265
#define SAMPLETIME 0.01

#endif /* SYSTEM_H_ */
