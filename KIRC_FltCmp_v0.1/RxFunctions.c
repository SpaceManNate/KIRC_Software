/*
 * RxFunctions.c
 * Desc: Contains functions and interrupt handling routines for
 * 		 the receiver channel.
 * Auth: Nathaniel Cain
 */
#include "system.h"

extern _RxInput RxData;

unsigned char RXChannelLock = true;
volatile unsigned char currentRXChannel=0;

/*
 * RC Input Interrupt handler
 */
Void RCinputIntHandler(Void){
	ClearRxInterrupts();
	unsigned int currentTicks =  Clock_getTicks();
	unsigned char pinStatus = GPIOPinRead(GPIO_PORTA_BASE, GPIO_PIN_2);

	//Check if channel is locked (OFF)
	if(RXChannelLock){
		//Check for false start
		if(pinStatus != 0x04)
			return;

		RXChannelLock = false;
		currentRXChannel = 0;
	}

	RxData.PWMticks[currentRXChannel] = currentTicks; //store current time

	//Check for false start
	if(currentRXChannel == 0 && pinStatus != 0x04)
		RXChannelLock = true;

	//Check if on the last channel, flag to process time
	if(currentRXChannel == 7){
		RxData.dataRdy = true;
		currentRXChannel = 0;
		return;
	}

	currentRXChannel++; //increment to next channel
}

/*
 * Enable Rx Interrupts for receiver channel
 */
void EnableRxInterrupts(void){
	GPIO_enableInt(Board_PA2,GPIO_INT_BOTH_EDGES);
	GPIO_enableInt(Board_PA3,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PA4,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PA5,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PF0,GPIO_INT_FALLING);
	GPIO_enableInt(Board_PF4,GPIO_INT_BOTH_EDGES);
}

/*
 * Disable Rx interrupts for receiver channel
 */
void DisableRxInterrupts(void){
	GPIO_disableInt(Board_PA2);
	GPIO_disableInt(Board_PA3);
	GPIO_disableInt(Board_PA4);
	GPIO_disableInt(Board_PA5);
	GPIO_disableInt(Board_PF0);
	GPIO_disableInt(Board_PF4);
}

/*
 * Clear Rx interrupt flags for receiver channel
 */
void ClearRxInterrupts(void){
	GPIO_clearInt(Board_PA2);
	GPIO_clearInt(Board_PA3);
	GPIO_clearInt(Board_PA4);
	GPIO_clearInt(Board_PA5);
	GPIO_clearInt(Board_PF0);
	GPIO_clearInt(Board_PF4);
}
