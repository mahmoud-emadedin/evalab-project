
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Dio.h"
#include "Bitwise.h"
#include "UART.h"

int main(void)
{
	UART_Init();
	uint8 UARTData = 0 ;
	ReturnValueType ret = NOK;
	while (1)
	{
		
		if (UART_Receive(&UARTData) == OK)
		{
			
		}
	}
}