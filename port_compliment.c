
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
	DDRB=0xFF;
	PORTB=0XFF;
	unsigned char z;
	//while(1)
	{
		
		for(z=0;z<=100;z++)
		{
			PORTB=~PORTB
			_delay_ms(1000);
		}
	}
	PORTB=0x00;
	//while(1);
		PORTB=0x01;
	return 0;
	}

