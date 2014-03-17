/*
 * RxFunctions.h
 *
 *  Created on: Mar 3, 2014
 *      Author: Nathaniel
 */

#ifndef RXFUNCTIONS_H_
#define RXFUNCTIONS_H_

void ProcessRxData(void);
void EnableRxInterrupts(void);
void DisableRxInterrupts(void);
void ClearRxInterrupts(void);
void ProcessStateMachine(uint32_t timeout);

#endif /* RXFUNCTIONS_H_ */
