/*
 * A Door Sensor is connected to bit 1 of Port B,and an led is connected to
 * bit 6 of port C.Write an AVR C program to monitor the door sensor and,
   when it opens, turns on the LED without changing the state of other pins
 *
 * Created: 12-Jun-20 11:17:25 PM
 * Author : Suffiyan
 */ 

#include <avr/io.h>
int main(void)
{
	DDRB=DDRB&0b11111101;//fd
	DDRC=DDRC|0b01000000;//40
	while(1)
	{
if(PINB & 0b00000010)//02
	PORTC=PORTC|0b01000000;//40
		else
		PORTC=PORTC&0b10111111;//bf
	}
	return 0;
	}

