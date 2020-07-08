/*
 * basics.c
 *
 * Created: 12-Jun-20 11:17:25 PM
 * Author : Suffiyan
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB=0x00;
	PORTB=0x00;
	DDRC=0xFF;
	while (1)
	{
if(PINB==0X01)
PORTC=0x01;
else
PORTC=0x00;
	}

	return 0;
	}
	

