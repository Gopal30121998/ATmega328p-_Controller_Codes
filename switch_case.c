/*
 * Write an AVR C program to read pins 1 and 0 of PORT B and issue an
 * ASCII character to PORT D according to the following table:
 * pin1 pin0
 *  0    0     send '0' to Port D
 *  0    1     send '1' to Port D
 *  1    0     send '2' to Port D
 *  1    1     send '3' to Port D
 * Created: 12-Jun-20 11:17:25 PM
 * Author : Suffiyan
 */ 

#include <avr/io.h>
int main(void)
{
DDRB=0x00;
DDRD=0xFF;
unsigned char z;
	
while(1)
{
z=PINB;
z=z&0b00000011;//03
  switch(z)
 {
case(0):
  {
	PORTD='0';
    break;
  }

case(1):
  {
    PORTD='1';
    break;
  }

case(2):
  {
    PORTD='2';
    break;
  }

case(3):
  {
    PORTD='3';
    break;
  }
 }
}
return 0;
 }

