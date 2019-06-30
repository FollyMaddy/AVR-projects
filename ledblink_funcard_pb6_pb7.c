
/* ledblink.c, an LED blinking program */
#include<avr/io.h>
#include<util/delay.h>
void sleep(uint8_t millisec)
{
        while(millisec)

        {
                _delay_ms(1);/* 1 ms delay */
                millisec--;
        }
}
int main()
{

        DDRB |=1<<PB6;  /* PB6 will now be the output pin */
        DDRB |=1<<PB7;  /* PB7 will now be the output pin */
        while(1)
        {
                PORTB &= ~(1<<PB6);/* PB6 LOW */
                PORTB |=(1<<PB7); /* PB7 HIGH */
                sleep(250);/* 250 ms delay */

                PORTB |=(1<<PB6); /* PB6 HIGH */
                PORTB &= ~(1<<PB7);/* PB7 LOW */
                sleep(250);/* 250 ms delay */
        }
}
