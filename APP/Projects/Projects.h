/*
 * Projects.h
 *
 *  Created on:
 *      Author:
 */


#ifndef APP_PROJECTS_PROJECTS_H_
#define APP_PROJECTS_PROJECTS_H_

#include "STD.h"
#include "BitMath.h"
#include "DIO_Interface.h"
#include "Timer_Interface.h"
#include "GIE_Interface.h"
#include "DCMotor_Interface.h"
#include "Servo_Interface.h"
#include "EXT_INT_Interface.h"
#include"LCD_Interface.h"
#include "Timer_Private.h"
#include "HCSR04_interface.h"
#include <util/delay.h>


void Project_Init(void);
u32  Project_Start(void);
void Project_CarMoveForward(void);
u16  Project_CheckRightDirection(void);
u16  Project_CheckLeftDirection(void);
u16  Project_CheckBackDirection(void);
void Project_CarMoveRight(void);
void Project_CarMoveLeft(void);
void Project_CarMoveBackward(void);

#endif /* APP_PROJECTS_PROJECTS_H_ */



