/*
 * DCMotor_prog.c
 *
 *  Created on:
 *      Author:
 */

#include "DIO_Interface.h"
#include "DCMotor_Interface.h"
#include "Timer_Interface.h"

void H_DCMotor_Void_DCMotorInit(void)
{
	M_DIO_Void_SetPinDirection(DCMotor_PIN1,OUTPUT);
	M_DIO_Void_SetPinDirection(DCMotor_PIN2,OUTPUT);
	M_DIO_Void_SetPinDirection(DCMotor2_PIN1,OUTPUT);
	M_DIO_Void_SetPinDirection(DCMotor2_PIN2,OUTPUT);
	//M_Timer_Void_PWMSetFrequency(60);
	M_Timer_Void_PWMInit(TIMER2_CHANNEL);

}
void H_DCMotor_Void_DCMotorSetSpeed(u32 Copy_U32_MotorSpeed)
{
	M_Timer_Void_PWMSetDutyCycle(TIMER2_CHANNEL,Copy_U32_MotorSpeed);

}
void H_DCMotor_Void_DCMotorSetDirection(u8 Copy_U8_Direction)
{
switch(Copy_U8_Direction)
{
case FORWARD:
	M_DIO_Void_SetPinValue(DCMotor_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor_PIN2,HIGH);
	M_DIO_Void_SetPinValue(DCMotor2_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor2_PIN2,HIGH);
	break;
case BACKWARD:
	M_DIO_Void_SetPinValue(DCMotor_PIN1,HIGH);
	M_DIO_Void_SetPinValue(DCMotor_PIN2,LOW);
	M_DIO_Void_SetPinValue(DCMotor2_PIN1,HIGH);
	M_DIO_Void_SetPinValue(DCMotor2_PIN2,LOW);
	break;
case LEFT:
	M_DIO_Void_SetPinValue(DCMotor_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor_PIN2,HIGH);
	M_DIO_Void_SetPinValue(DCMotor2_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor2_PIN2,LOW);
	break;
case RIGHT:
	M_DIO_Void_SetPinValue(DCMotor_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor_PIN2,LOW);
	M_DIO_Void_SetPinValue(DCMotor2_PIN1,LOW);
	M_DIO_Void_SetPinValue(DCMotor2_PIN2,HIGH);
	break;
}
}
void H_DCMotor_Void_DCMotorStart(void)
{
M_Timer_Void_PWMStart(TIMER2_CHANNEL);
}
void H_DCMotor_Void_DCMotorStop(void)
{
M_DIO_Void_SetPinValue(DCMotor_PIN1,LOW);
M_DIO_Void_SetPinValue(DCMotor_PIN2,LOW);
M_DIO_Void_SetPinValue(DCMotor2_PIN1,LOW);
M_DIO_Void_SetPinValue(DCMotor2_PIN2,LOW);
}
