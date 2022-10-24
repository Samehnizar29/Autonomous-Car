/*
 * Servo_Interface.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_

/*============================INCLUDES===============================*/
#include "Timer_Interface.h"
#include "STD.h"
/*=============================MACROS===============================*/
#define RIGHT_SERVO           180
#define LEFT_SERVO            0
#define FORWARD_SERVO         90
/*===========================PROTOTYPES==============================*/
void H_Servo_Void_ServoInit(void);
void H_Servo_Void_ServoSetAngle(u8);
void H_Servo_Void_ServoStart(void);
void H_Servo_Void_ServoStop(void);

#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
