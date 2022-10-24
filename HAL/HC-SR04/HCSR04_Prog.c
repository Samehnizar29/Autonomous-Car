/*
 * HCSR04_Prog.c
 *
 *  Created on:
 *      Author:
 */

#include "HCSR04_interface.h"
#include "HCSR04_Private.h"


void H_HCSR04_Void_HCSR04Init(void)
{
	M_DIO_Void_SetPinDirection(TRIG_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(ECHO_PIN,INPUT);
    M_DIO_Void_SetPinPullUpRes(ECHO_PIN,ENABLE);
}

void H_HCSR04_Void_HCSR04Start(void)
{
	M_DIO_Void_SetPinValue(TRIG_PIN,HIGH);
	_delay_ms(15);
	M_DIO_Void_SetPinValue(TRIG_PIN,LOW);
	M_Timer1_Void_TimerSensorSetUp();
}
u32 H_HCSR04_Void_HCSR04DistanceRead(void)
{
return M_Timer1_Void_TimerSensorEchoWidth();
}

