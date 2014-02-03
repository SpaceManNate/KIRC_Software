/********************************************************************
* HEAD: system.h file
* DESC: Meant for KIRC_FltCmp_v0.1 Software
* 		Contains standard C header files, peripheral driver
* 		header files from Texas Instruments, header files
* 		for SYS/BIOS and XDC tools, as well as global def'ns
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
#include <string.h>
#include <file.h>

//TivaWare (tm) Driver Headers
#include "inc/hw_i2c.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/i2c.h"
#include "driverlib/pwm.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"

// XDCtools Header files
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

// BIOS Header files
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/utils/Load.h>

// TI-RTOS Header files
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/I2C.h>

// Example/Board Header files
#include "Board.h"
#include "UARTUtils.h"
#include "USBCDCD_LoggerIdle.h"

//Custom headers produced for KIRC
#include "sensors.h"
#include "quaternion.h"

//Global Definitions
#define PI  3.14159265
#define SAMPLETIME 0.01

#endif /* SYSTEM_H_ */
