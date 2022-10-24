/*
 * HCSR04_interface.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HAL_HC_SR04_HCSR04_INTERFACE_H_
#define HAL_HC_SR04_HCSR04_INTERFACE_H_

/*============================INCLUDES===============================*/

#include "STD.h"
#include "BitMath.h"
#include "HCSR04_Config.h"
#include "DIO_interface.h"
#include "Timer_Interface.h"
#include <util/delay.h>

/*===========================PROTOTYPES==============================*/

void H_HCSR04_Void_HCSR04Init(void);
void H_HCSR04_Void_HCSR04Start(void);
u32 H_HCSR04_Void_HCSR04DistanceRead(void);

#endif /* HAL_HC_SR04_HCSR04_INTERFACE_H_ */
