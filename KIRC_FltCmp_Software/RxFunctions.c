/*
 * RxFunctions.c
 * Desc: Contains functions and interrupt handling routines for
 * 		 the receiver channel.
 * Auth: Nathaniel Cain
 */
#include "system.h"

extern _RxInput RxData;
extern _controlData controlData;

unsigned char RXChannelLock = true;
volatile unsigned char currentRXChannel=0;

/*
 * Process the Rx duty cycle data into euler angles for the control system
 */
void ProcessRxData(void){
	float x,y;
	float yaw_input;
	//Convert input (pitch roll) into degrees (+/-15 deg)
	y =(float) (60.0*(RxData.input[3]-525)/430.0 - 30.0);
	x =(float) (60.0*(RxData.input[1]-525)/430.0 - 30.0);
	yaw_input = (float) -2.5*(RxData.input[0] - 525)/430.0 + 1.25;

	//Apply rotation matrix (-45deg) to control input (for "x" pattern flight)
	controlData.angle_desired[0] = 0.707*y - 0.707*x;
	controlData.angle_desired[1] = 0.707*y + 0.707*x;


	//limit the sensitivity of the yaw control (to avoid drift)
	if(yaw_input > 0.3 || yaw_input < -0.3)
		controlData.angle_desired[2] += yaw_input;
	//Yaw loop condition
	if(controlData.angle_desired[2] > 180.0 || controlData.angle_desired[2] <-180.0)
		controlData.angle_desired[2] *= -1.0;
}


/*
 * Process the state machine for quadcopter
 */
void ProcessStateMachine(uint32_t timeout){
	//Check to see if quad is in init stage
	if(controlData.QuadState != QUAD_INIT){
		//Timeout set to 500mS (might change later)
		if(Clock_getTicks() > (timeout + 50000)){
			controlData.QuadState = QUAD_DISABLED;
			//System_printf("Comm Lost: System Abort\n");
			//System_flush();
		}

		//Check if safety switch is ON
		else if(RxData.input[4] > 900 && RxData.input[4] < 1000){
    		controlData.QuadState = QUAD_ENABLED;
    	}

		//Check if safety switch is OFF
		else if(RxData.input[4] > 500 && RxData.input[4] < 6000){
			controlData.QuadState = QUAD_SAFETY;
		}

		//DEFAULT STATE, QUAD DISABLED
		else {
			controlData.QuadState = QUAD_DISABLED;
		}
	}
}

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
