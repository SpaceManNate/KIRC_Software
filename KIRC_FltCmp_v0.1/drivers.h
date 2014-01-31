/********************************************************************
* HEAD: drivers.h
* DESC: Contains function prototypes for the drivers.c
* 		custom library as well as definitions
* AUTH: Nathaniel Cain
********************************************************************/
#ifndef DRIVERS_H_
#define DRIVERS_H_

//Function Prototypes
void UARTStringPut(uint32_t UART_BASE,char *StringBuf);
void UARTIntHandler(void);
void UART1Init(void);
void LEDsInit(void);
void I2C0_MasterInit(void);
unsigned char I2C0_RxData(unsigned char Slave_Addr,unsigned char Reg_Addr);
void I2C0_TxData(unsigned char Slave_Addr,unsigned char Reg_Addr,unsigned char Data);
void I2C0_DevMap(char Buff[100]);

//Definitions for LEDs
#define RedLED_ON() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x02)
#define RedLED_OFF() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x00)
#define BlueLED_ON() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x04)
#define BlueLED_OFF() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x00)
#define GreenLED_ON() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x08)
#define GreenLED_OFF() GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x00)

#endif /* DRIVERS_H_ */
