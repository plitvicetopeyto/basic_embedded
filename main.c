/*
 * Project1.c
 *
 * Created: 1/25/2018 1:13:43 PM
 * Author : Tim
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "avr.h"

//#define LED_ON		PORTB |= (1<<PORTB1)
//#define LED_OFF		PORTB &= ~(1<<PORTB1)
//#define LED_TOGGLE	PINB |= (1<<PINB1)

int main(void)
{
	DDRB |= (1<<PINB0);
	DDRB &= ~(1<<PINB1);
	PORTB |= 1 << PINB1;
	
	while(1)
	{
		//_delay_ms(100);
		
		if(!GET_BIT(PINB, 1)) {
			PORTB |= (1<<PINB0);
			wait_avr(500);
			PORTB &= ~(1<<PINB0);
			wait_avr(500);
		}

		
		
	}
}