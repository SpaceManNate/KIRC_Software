/*test
 * Copyright (c) 2013, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *    ======== uartconsole.c ========
 */
#include "system.h"

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/utils/Load.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>
#include <ti/drivers/I2C.h>

/* Example/Board Header files */
#include "Board.h"
#include "UARTUtils.h"
#include "USBCDCD_LoggerIdle.h"

#include <file.h>
#include <stdio.h>
#include <string.h>

/*
 *  ======== consoleFxn ========
 *  Task for this function is created statically. See the project's .cfg file.
 */Void consoleFxn(UArg arg0, UArg arg1) {

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

	char A[100]; //Buffer for the UART
	IMUdata_t Accel;
	IMUdata_t Gyro, Gyro_Offset;
	IMUdata_t Magn, Magn_Offset;
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

	//Calibrate sensors
	Calib_Accel();
	Task_sleep(50);
	Gyro_Offset = Calib_Gyro();
	Task_sleep(50);

	while (1) {
		GPIO_toggle(Board_LED1);
		Accel = Read_Accel(); //Read the accelerometer
		Gyro = Read_Gyro(Gyro_Offset); //Read the Gyroscope
		Magn = Read_Magn(Magn_Offset); //Read Magnetometer
		Gyro = Filter_Data(Gyro, Gyro_memory); //Filter the gyro data
		State = Update_State(Gyro, Accel, State, SAMPLETIME);

		printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",State.q1,State.q2,State.q3,State.q4);
		fflush(stdout);

		Task_sleep(25);
	} //END OF WHILE(1)
}

/*
 *  ======== main ========
 */
Int main(Void) {
	/* Call board init functions */
	Board_initGeneral();
	Board_initGPIO();
	Board_initUART();
	Board_initUSB(Board_USBDEVICE);
	Board_initI2C();

	/* Turn on user LED */
	GPIO_write(Board_LED0, Board_LED_ON);

	System_printf("Starting the UART Console example\n");

	/*
	 *  Add the UART device to the system.
	 *  All UART peripherals must be setup and the module must be initialized
	 *  before opening.  This is done by Board_initUART().  The functions used
	 *  are implemented in UARTUtils.c.
	 */
	add_device("UART", _MSA, UARTUtils_deviceopen, UARTUtils_deviceclose,
			UARTUtils_deviceread, UARTUtils_devicewrite, UARTUtils_devicelseek,
			UARTUtils_deviceunlink, UARTUtils_devicerename);

	/* Open UART0 for writing to stdout and set buffer */
	freopen("UART:0", "w", stdout);
	setvbuf(stdout, NULL, _IOLBF, 128);

	/* Open UART0 for reading from stdin and set buffer */
	freopen("UART:0", "r", stdin);
	setvbuf(stdin, NULL, _IOLBF, 128);

	/*
	 *  Initialize UART port 0 used by SysCallback.  This and other SysCallback
	 *  UART functions are implemented in UARTUtils.c. Calls to System_printf
	 *  will go to UART0, the same as printf.
	 */
	UARTUtils_systemInit(0);

	/* Initialize the USB CDC device for logging transport */
	USBCDCD_init();

	srand(0xBEA5);

	/* Start BIOS */BIOS_start();

	return (0);
}
