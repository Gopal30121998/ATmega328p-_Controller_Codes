/*
 * Write an AVR C program to monitor bit 5 of PORT C.If it is HIGH,send 55H to
 * PORTB,otherwise send aaH to PORTB.
 *
 * Created: 12-Jun-20 11:17:25 PM
 * Author : Suffiyan
 */ 

#include <avr/io.h>
int main(void)
{
DDRB=0xFF;
DDRC=0x00;
while (1)
{
if (PINC & 0b00100000)
PORTB=0x55;
else
PORTB=0xAA;
}	
	return 0;
	}

