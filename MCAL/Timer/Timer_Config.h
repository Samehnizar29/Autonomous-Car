/*
 * Timer_Config.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

/*
 * TIMER1_PRESCALER_DV OPTIONS : [ 256 ]
 */
#define TIMER1_PRESCALER_DV            256

/*
 * TIMER_PRESCALER_DV OPTIONS : [ 1024 , 256 ]
 */
#define TIMER_PRESCALER_DV            256
/*
 * SELECT F_OSC IN MEGA HERTZ
 */
#define F_OSC                         16
/*
 * TIMER0_MODE OPTIONS : [ NORMAL_MODE , CTC_MODE ]
 */
#define TIMER0_MODE          NORMAL_MODE
/*
 * TIMER1_MODE OPTIONS : [ NORMAL_MODE , CTC_MODE ]
 */
#define TIMER1_MODE          NORMAL_MODE
/*
 * TIMER2_MODE OPTIONS : [ NORMAL_MODE , CTC_MODE ]
 */
#define TIMER2_MODE          NORMAL_MODE
/*
 * PWM0_MODE OPTIONS : [ FAST_PWM , PHASE_CORRECT_PWM ]
 */
#define PWM0_MODE            FAST_PWM
/*
 * PWM2_MODE OPTIONS : [ FAST_PWM , PHASE_CORRECT_PWM ]
 */
#define PWM2_MODE            PHASE_CORRECT_PWM
/*
 * FAST_PWM_MODE OPTIONS : [ INVERTED , NON_INVERTED ]
 */
#define PWM0_MODE2           NON_INVERTED
/*
 * FAST_PWM2_MODE OPTIONS : [ INVERTED , NON_INVERTED ]
 */
#define PWM2_MODE2           NON_INVERTED
#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
