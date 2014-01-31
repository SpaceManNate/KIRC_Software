/********************************************************************
* HEAD: drivers.c
* DESC: Contains driver functions for the KIRC_i2c_IMUtest project
*		has UART, I2C, LEDinit, and other drivers
* AUTH: Nathaniel Cain
********************************************************************/
#include "system.h"

//*************************************************************************
// LEDInit function
// I/O: Void
// Enables the tri-color LEDs to be used with the TivaWare functions
//*************************************************************************
void LEDsInit(void){
	//Enable GPIO port F using system control
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	//Config Pins as LED output
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

	//Turn OFF all the LEDs as default
	GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x00);
}

//*************************************************************************
// UARTStringPut function
// Input: The UART to be used, and the String, Out: Void
// Sends the string held in StringBuf over the UART
//*************************************************************************
void UARTStringPut(uint32_t UART_BASE,char *StringBuf){
	while(*StringBuf != NULL){
		UARTCharPut(UART_BASE,*StringBuf);
		StringBuf++;
	}
}

//*************************************************************************
// UARTIntHandler function
// I/O: Void
// This is the interrupt handler for the UART receiving line
//*************************************************************************
void UARTIntHandler(void){
	    uint32_t ui32Status;
	    ui32Status = UARTIntStatus(UART0_BASE, true); //get interrupt status
	    UARTIntClear(UART0_BASE, ui32Status); //clear the asserted interrupts
	    //loop while there are chars
	    while(UARTCharsAvail(UART0_BASE)){
	        UARTCharPutNonBlocking(UART0_BASE, UARTCharGetNonBlocking(UART0_BASE)); //echo character
	        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2); //blink LED
	        SysCtlDelay(SysCtlClockGet() / (1000 * 3)); //delay ~1 msec
	        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0); //turn off LED
	    }
}

//*************************************************************************
// UART1Init function
// I/O: Void
// Sets The UART1 Port for 115200b, no parity, 8data, one stop
//*************************************************************************
void UART1Init(void){
	//Configure GPIOA & UART0
	SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

	//Config PA0 for Rx and PA1 for Tx
	GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    //Config UART settings
    UARTConfigSetExpClk(UART0_BASE, SysCtlClockGet(), 115200,
        (UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE));
}

//*************************************************************************
// I2C0_MasterInit function
// I/O: Void
// Enables the I2C0 port for 100Kbps operation, internal pull-ups,
// loopback mode, with internal slave
// Also inits slave (To be changed)
//*************************************************************************
void I2C0_MasterInit(void){
	//Enable pins and I2C0 Port
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);

    // Select the I2C function for these pins (also controls pull-ups)
    //Set SCL and SDA lines for PB2 and PB3 respectively
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);

	// Enable and initialize the I2C0 master module
    I2CMasterInitExpClk(I2C0_BASE, SysCtlClockGet(), false);
}

//*************************************************************************
// I2C0_RxData function
// Input: Slave_Addr, Reg_Addr	Output: Recieved data
// Sends a master request for data from specified slave address at a
// specific register and returns that information
//*************************************************************************
unsigned char I2C0_RxData(unsigned char Slave_Addr,unsigned char Reg_Addr){
	// Set I2C port to write mode
    I2CMasterSlaveAddrSet(I2C0_BASE, Slave_Addr, false);

    // Place the address of register to be read in queue
	I2CMasterDataPut(I2C0_BASE, Reg_Addr);

	// Initiate send of data from the master (sends slave address and reg address)
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_START);

	// Wait until master module is done sending
	while(I2CMasterBusy(I2C0_BASE)){}

    // Set I2C port to read mode
    I2CMasterSlaveAddrSet(I2C0_BASE, Slave_Addr, true);

    // Read data
    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_RECEIVE);

    // Wait until master module is done receiving
    while(I2CMasterBusy(I2C0_BASE)){}

    return I2CMasterDataGet(I2C0_BASE);
}

//*************************************************************************
// I2C0_TxData function
// Input: Slave_Addr, Reg_Addr	Output: Recieved data
// Sends data as master to specified slave address and specific register
//*************************************************************************
void I2C0_TxData(unsigned char Slave_Addr,unsigned char Reg_Addr,unsigned char Data){
	// Set I2C port to write mode
    I2CMasterSlaveAddrSet(I2C0_BASE, Slave_Addr, false);

    // Place the address of register to be read in queue
	I2CMasterDataPut(I2C0_BASE, Reg_Addr);

	// Initiate send of reg address from the master (sends slave address and reg address)
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_START);

	// Wait until master module is done sending
	while(I2CMasterBusy(I2C0_BASE)){}

    // Place the address of register to be read in queue
	I2CMasterDataPut(I2C0_BASE, Data);

	// Initiate send of data from the master
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);

	// Wait until master module is done sending
	while(I2CMasterBusy(I2C0_BASE)){}
}

//*************************************************************************
// I2C0_DevMap function
// I/O: Input common UART buffer in order to output info
// Polls the I2C0 slave addresses from 0x00-0x7F
// Lists all addresses that didn't return garbage
//*************************************************************************
void I2C0_DevMap(char Buff[100]){
	unsigned short index=0;
	unsigned char pui32DataRx;
	//Poll through slave addresses to find available devices
	for(index=0; index <= 0x7F; index++){
		pui32DataRx = I2C0_RxData(index,0x00); //Read the first register of each slave address
		if(pui32DataRx != 0xFF){
			// If the data wasn't garbage, send the slave adddr and data over UART
			sprintf(Buff,"SlvAddr: 0x%x  DevId: 0x%x\n\r",index,pui32DataRx);
			UARTStringPut(UART0_BASE, Buff);
		}
	}
}
