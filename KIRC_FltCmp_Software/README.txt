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
				
*AUTHORS: Nathaniel Cain	
		  Wade Henderson
		  
*DATE:	  1/31/2014

PINS:   This software needs access to the following peripherals:
		-I2C0:  SCL-PB2, SDA-PB3 		(for IMU)
		-UART0: Rx-PA0, Tx-PA1, 115200b (for USB-UART terminal)
		-LEDs:  (Red = PF1, Blue = RF2, Green = PF3) (for indicator lights)
		-PWMs:	M0G0-PB6, M0G1-PB4, M0G2-PE4, M0G3-PC4 (for motor control)
		-UART1:	(for GPS input)
		-Interrupt Pins: PA2, PA3, PA4, PA5, PA6, PF0  (for PWM input)

		PB6 - Output[0] - Motor1
		PB4 - Output[1] - Motor2
		PE4 - Output[2] - Motor3
		PC4 - Output[3] - Motor4
		
		PA2 - Input[0] - Throttle (Channel 2)
		PA3 - Input[1] - Pitch    (Channel 3)
		PA4 - Input[2] - Yaw      (Channel 1)
		PA5 - Input[3] - Roll     (Channel 4)
		PA6 - Input[5] - Aux pit Trim (Channel 7)
		PF0 - Input[4] - Toggle Switch (Channel 5)
		
	
NOTE:   For portability, when compiling on a new computer, a 'make clean' needs
		to be called before compiling in order to shift the config files to the
		new computer. Under Project>>Clean...  and enter specific project.
		
		This software is available on GitHub from user NatCain, under KIRC_Software
		
		PID information:
		http://en.wikipedia.org/wiki/Ziegler%E2%80%93Nichols_method
		http://en.wikipedia.org/wiki/PID_controller
		http://brettbeauregard.com/blog/2011/04/improving-the-beginners-pid-introduction/
		
		Quaternion State Estimator information:
		Magdewick AHRS Quaternion State Estimator (can't find website)
		
		IMU Sensors:
		-ADXL345   Accelerometer
		-L3G4200D  Gyroscope
		-HMC8552L  Magnetometer
		-BMP085    Altimeter
				
*TO-DO:  -CODE CLEANUP
		 -Add A/D support
		 -Add Altimeter support
		 -Read GPS functions
		   

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
 

	//System_printf("OUTPUT 1: %d,  OUTPUT2: %d,  OUTPUT3: %d,  OUTPUT4: %d\r\n",output[0],output[1],output[2],output[3]);
	//System_flush();
	
	//System_printf("INPUT 1: %d, INPUT 2: %d, INPUT 3: %d, INPUT 4: %d, INPUT 5: %d, INPUT 6: %d\r\n",
	//    		  RxData.input[0],RxData.input[1],RxData.input[2],RxData.input[3],RxData.input[4],RxData.input[5]);
	//System_flush();
	 
 	
	//printf("%2.3f, %2.3f, %2.3f\r\n",controlData.angle_current[0],controlData.angle_current[1],controlData.angle_current[2]);
	//printf("%2.3f,%2.3f,%2.3f,%2.3f\r\n",controlData.Quaternion[0],controlData.Quaternion[1],controlData.Quaternion[2],controlData.Quaternion[3]);
	//fflush(stdout);