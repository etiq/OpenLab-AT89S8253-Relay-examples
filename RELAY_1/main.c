/*
PROJECT Name: LED
Author      : Etiq Technologies
Created on  :16 April 2016
Description:  The Project is a demo project for the AT89S8253 programming.
              The code blinks the LEDs connected to  port2 of the AT89S8253 
							controller when switch at p0_1 pin pressed and hold.Since inbuilt 
							delay routine is not available a delay library using the timer                                                
					 		modules of the controller is created and attached with the project.
							only delays in milliseconds greater and multiples of 25 should be
							passed to the funcion.

*/


#include <REG8253.H>
#include "delay.h"           //delay header


void main()
{
	P0_0=1;
	/*relay connected to 0 th pin of PORT0 is made ON and OFF with 1.5ms delay*/
	while(1)
	{
  if(P0_0==0)
	{
		P0_1=0;
		delay_ms(1500);
		P0_1=1;
		delay_ms(1500);
	}
}
	}


	