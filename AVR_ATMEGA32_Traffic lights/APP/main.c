/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */
#include "main.h"      ///*** this is a header file to contain all includes of Application


int main ()
{
	///******************** Application of traffic lights************************/////

////****_Calling H_LED_Void_LedInit to set 3 LEDs  pins direction _****///
	H_LED_Void_LedInit(YELLOW_LED);
    H_LED_Void_LedInit(RED_LED);
    H_LED_Void_LedInit(GRN_LED);

////****_Calling H_SSD_Void_SsdInt to set SSD  pins direction _****///
     H_SSD_Void_SsdInt();


	while(1)
	{
///****************************_ To light the RED_LED _*********************************//
////_Calling H_SSD_Void_SsdDisplayCountDown to  count down the number of seconds _****///
		H_SSD_Void_SsdDisplayCountDown(30);
		  _delay_ms(100);
////****_Calling H_LED_Void_LedOff to set GRN_LED  pin value to TurnOff the lED _****///
		H_LED_Void_LedOff(GRN_LED);
////****_Calling H_LED_Void_LedOn to set RED_LED  pin value to light the lED _****///
		H_LED_Void_LedOn(RED_LED);



///****************************_ To light the YELLOW_LED _*********************************//
////_Calling H_SSD_Void_SsdDisplayCountDown to  count down the number of seconds _****///
		H_SSD_Void_SsdDisplayCountDown(30);
		_delay_ms(100);
////****_Calling H_LED_Void_LedOff to set RED_LED  pin value to TurnOff the lED _****///
		H_LED_Void_LedOff(RED_LED);
////****_Calling H_LED_Void_LedOn to set YELLOW_LED  pin value to light the lED _****///
		H_LED_Void_LedOn(YELLOW_LED);


///****************************_ To light the GRN_LED _*********************************//
		H_SSD_Void_SsdDisplayCountDown(30);
		 _delay_ms(100);
////****_Calling H_LED_Void_LedOff to set YELLOW_LED  pin value to TurnOff the lED _****///
		H_LED_Void_LedOff(YELLOW_LED);
////****_Calling H_LED_Void_LedOn to set GRN_LED  pin value to light the lED _****///
		H_LED_Void_LedOn(GRN_LED);

	}



}

