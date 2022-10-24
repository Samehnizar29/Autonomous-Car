/*
 * Timer_Private.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_TIMER_TIMER_PRIVATE_H_
#define MCAL_TIMER_TIMER_PRIVATE_H_

#define TCCR1A_REG              *(volatile u8*)0x4F
#define TCCR1B_REG              *(volatile u8*)0x4E
#define TCCR0_REG               *(volatile u8*)0x53
#define TCCR2_REG               *(volatile u8*)0x45
#define TIMSK_REG               *(volatile u8*)0x59
#define TIFR_REG                *(volatile u8*)0x58
#define TCNT0_REG               *(volatile u8*)0x52
#define TCNT1_REG               *(volatile u8*)0x4C
#define TCNT2_REG               *(volatile u8*)0x44
#define OCR0_REG                *(volatile u8*)0x5C
#define OCR2_REG                *(volatile u8*)0x43
#define OCR1A_REG               *(volatile u16*)0x4A
#define ICR1_REG                *(volatile u16*)0x46

#define ICES1_BIT               6

#define TOV1_BIT                2
#define ICF1_BIT                5

#define WGM20_BIT               6
#define WGM21_BIT               3

#define COM20_BIT               4
#define COM21_BIT               5

#define CS20_BIT                0
#define CS21_BIT                1
#define CS22_BIT                2

#define WGM10_BIT               0
#define WGM11_BIT               1
#define WGM12_BIT               3
#define WGM13_BIT               4

#define COM1A1_BIT              7
#define COM1A0_BIT              6

#define CS10_BIT                0
#define CS11_BIT                1
#define CS12_BIT                2

#define WGM00_BIT               6
#define COM01_BIT               5
#define COM00_BIT               4
#define WGM01_BIT               3
#define CS00_BIT                0
#define CS01_BIT                1
#define CS02_BIT                2

#define TOIE0_BIT               0
#define TOIE1_BIT               2
#define TOIE2_BIT               6
#define OCIE0_BIT               1
#define OCIE1A_BIT              4
#define OCIE2_BIT               7

#define NORMAL_MODE             1
#define CTC_MODE                2

#define FAST_PWM                1
#define PHASE_CORRECT           2

#define INVERTED                1
#define NON_INVERTED            2

#endif /* MCAL_TIMER_TIMER_PRIVATE_H_ */
