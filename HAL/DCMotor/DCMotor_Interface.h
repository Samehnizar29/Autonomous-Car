/*
 * DCMotor_Interface.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

/*============================INCLUDES===============================*/
#include "DCMotor_Config.h"

/*=============================MACROS===============================*/

#define FORWARD         0
#define BACKWARD        1
#define RIGHT           2
#define LEFT            3

/*===========================PROTOTYPES==============================*/

void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorStart(void);
void H_DCMotor_Void_DCMotorStop(void);


#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
