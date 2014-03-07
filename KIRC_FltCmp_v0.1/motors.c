/*
 * motors.c
 * APIs for interfacing to the motors
 * AUTH: Nathaniel Cain
 */

#include "system.h"

volatile uint32_t ui32Load;
volatile uint32_t ui32PWMClock;

void motors_init(void){
	// Enable PWM output
	ui32PWMClock = SysCtlClockGet() / 64;
	ui32Load = (ui32PWMClock / PWM_FREQUENCY) - 1;

	PWMGenConfigure(PWM0_BASE, PWM_GEN_0, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_0, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_1, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_1, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_2, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_2, ui32Load);
	PWMGenConfigure(PWM0_BASE, PWM_GEN_3, PWM_GEN_MODE_DOWN);
	PWMGenPeriodSet(PWM0_BASE, PWM_GEN_3, ui32Load);

	//Set motor outputs to "Safe" values
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_0, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_0_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_0);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_2, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_2_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_1);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_4, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_4_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_2);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_6, 500 * ui32Load / 10000);
	PWMOutputState(PWM0_BASE, PWM_OUT_6_BIT, true);
	PWMGenEnable(PWM0_BASE, PWM_GEN_3);
}

void motors_out(uint32_t output[4]){
	volatile unsigned short i;
	//limit motor output
	for(i=0;i<4;i++){
		if(output[i]<520)
			output[i] = 520;
		else if(output[i] > 950)
			output[i] = 950;
	}

	//Output PWM to motors
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_0, (output[0]) * ui32Load / 10000);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_2, (output[1]) * ui32Load / 10000);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_4, (output[2]) * ui32Load / 10000);
	PWMPulseWidthSet(PWM0_BASE, PWM_OUT_6, (output[3]) * ui32Load / 10000);
}

void motorsDisable(void){
	uint32_t output[4] = {0,0,0,0};
	motors_out(output);
}
