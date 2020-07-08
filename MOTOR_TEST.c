/*
 * 
 *
 * Created: 12-Jun-20 11:17:25 PM
 * Author : Suffiyan
 */ 
#define F_CPU 16000000
#include<util/delay.h>
#include <avr/io.h>
int main(void)
{
	DDRC=0xFF;//output
	while(1)
	{
 PORTC=0x01;
 _delay_ms(5000);
 PORTC=0x00;
 _delay_ms(2000);
 PORTC=0x02;
 _delay_ms(5000);
 PORTC=0x00;
 _delay_ms(2000);
	}
	return 0;
}

