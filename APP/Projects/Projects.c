/*
 * Projects.c
 *
 *  Created on:
 *      Author:
 */

#include "Projects.h"


void Project_Init(void)
{
	H_LCD_Void_LCDInit();
	H_LCD_Void_LCDClear();
	H_DCMotor_Void_DCMotorInit();
	H_Servo_Void_ServoInit();
    H_HCSR04_Void_HCSR04Init();
	M_GIE_Void_GlobalInterruptEnable();
	M_Timer_Void_TimerInit(TIMER1_CHANNEL);
}
u32 Project_Start(void)
{
    H_Servo_Void_ServoSetAngle(FORWARD_SERVO);
    H_Servo_Void_ServoStart();
	_delay_ms(100);
	H_HCSR04_Void_HCSR04Start();
	u32 Local_U32_Distance = H_HCSR04_Void_HCSR04DistanceRead();
    _delay_ms(50);
    return Local_U32_Distance;
}
void Project_CarMoveForward(void)
{
	H_LCD_Void_LCDClear();
	H_LCD_Void_LCDWriteString("MOVING FORWARD");
	H_DCMotor_Void_DCMotorSetDirection(FORWARD);
	H_DCMotor_Void_DCMotorSetSpeed(100);
	H_DCMotor_Void_DCMotorStart();
}
u16 Project_CheckRightDirection(void)
{
	H_DCMotor_Void_DCMotorStop();
	H_Servo_Void_ServoSetAngle(RIGHT_SERVO);
	H_Servo_Void_ServoStart();
	_delay_ms(2000);
	H_Servo_Void_ServoStop();
	H_HCSR04_Void_HCSR04Start();
	return H_HCSR04_Void_HCSR04DistanceRead();
}

u16 Project_CheckLeftDirection(void)
{
   H_Servo_Void_ServoSetAngle(LEFT_SERVO);
   H_Servo_Void_ServoStart();
   _delay_ms(2000);
   H_Servo_Void_ServoStop();
   H_HCSR04_Void_HCSR04Start();
   return H_HCSR04_Void_HCSR04DistanceRead();
}
u16  Project_CheckBackDirection(void)
{
	_delay_ms(100);
	H_HCSR04_Void_HCSR04Start();
	return H_HCSR04_Void_HCSR04DistanceRead();

}
void Project_CarMoveRight(void)
{
	H_LCD_Void_LCDClear();
	H_LCD_Void_LCDWriteString("MOVING RIGHT");
	_delay_ms(1000);
	H_DCMotor_Void_DCMotorSetDirection(RIGHT);
	H_DCMotor_Void_DCMotorSetSpeed(100);
	H_DCMotor_Void_DCMotorStart();
}
void Project_CarMoveLeft(void)
{
	H_LCD_Void_LCDClear();
	H_LCD_Void_LCDWriteString("MOVING LEFT");
	_delay_ms(1000);
	H_DCMotor_Void_DCMotorSetDirection(LEFT);
	H_DCMotor_Void_DCMotorSetSpeed(100);
	H_DCMotor_Void_DCMotorStart();
}

