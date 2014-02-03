***************FLIGHT COMPUTER SOFTWARE***************
*TITLE: README.txt

*DESCR: This is the flight computer software for the
		Knight's Intelligent Reconaissance Copter (KIRC)
		Project. 
		
		This code is meant to run on the TM4C123GH6PMI Processor.
		This is a 32-bit, ARM Cortex M4F Processor.
		It utilizes the SYS/BIOS Real Time Operating System (RTOS)
		available from Texas Instruments (TI) .
		
		This software is meant to run on our flight computer in 
		order to dynamically stablize our quadcopter in flight.
		This is part of a UCF Senior Design project, Spring 2014

PINS:   This software needs access to the following peripherals:
		-I2C0:  SCL-PB2, SDA-PB3 		(for IMU)
		-UART0: Rx-PA0, Tx-PA1, 115200b (for USB-UART terminal)
		-LEDs:  (Red = PF1, Blue = RF2, Green = PF3) (for indicator lights)
		-PWMs:	M0G0-PB6, M0G1-PB5, M0G2-PA6, M0G3-PD0 (for motor control)
		-UART1:	(for GPS input)
		-Interrupt Pins: PD1, PD2, PD3, PE5 (for PWM input)
		-Interrupt Pins: (for IMU interrupt)
	
NOTE:   For portability, when compiling on a new computer, a 'make clean' needs
		to be called before compiling in order to shift the config files to the
		new computer. Under Project>>Clean...  and enter specific project.
		
		This software is available on GitHub from user NatCain, under KIRC_Software
		
				
*AUTHORS: Nathaniel Cain	
		  Wade Henderson
		  
*DATE:	  1/31/2014

*LAST EDITED: 2/1/2014

*TO-DO:  -Add PWM output support
		 -Add PWM input support (Interrupt driven)
		 -Make IMU input functions interrupt driven
		 -Add PID control algorithms
		 -Program motor control algorithm
		 -Add A/D support
		 -Add Altimeter support
		 -Read GPS functions

LOG:
*2/1/2014: Last night, the first composite instance of this software was integrated.
		   The goal over the next several days is to clean up the software and add
		   more modules to it.	

*2/3/2014: Attempting more cleanup, removing unnessecary code


/*
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

 
--------------------------------------------------------------------------
--KK-------KK-----IIIIIIIIIIIIIII-----RRRRRRR-------------CCCCCCCCC-------
--KK-----KK-------------II------------RR-----RR---------CC---------------- 
--KK---KK---------------II------------RR-----RR--------CC-----------------
--KK-KK-----------------II------------RR-----RR-------CC------------------
--KK--------------------II------------RRRRRRR---------CC------------------
--KK--------------------II------------RR-----RR-------CC------------------
--KK-KK-----------------II------------RR------RR------CC------------------
--KK---KK---------------II------------RR-------RR------CC-----------------
--KK-----KK-------------II------------RR--------RR------CC----------------
--KK-------KK-----IIIIIIIIIIIIIII-----RR---------RR-------CCCCCCCCC-------
--------------------------------------------------------------------------  
 
 
 
	//Read write example
	/*
	 printf("Enter a duration (ms): ");
	 fflush(stdout);
	 scanf("%d", &sleepDur);
	 fflush(stdin);
	 */
	 
	 
	 /*
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
	*/
	 
 