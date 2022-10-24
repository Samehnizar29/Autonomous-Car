/*
 * LCD_Config.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_
/*SELECT LCD PINS*/
#define LCD_D0_PIN    PA0_PIN
#define LCD_D1_PIN    PA1_PIN
#define LCD_D2_PIN    PA2_PIN
#define LCD_D3_PIN    PA3_PIN
#define LCD_D4_PIN    PA4_PIN
#define LCD_D5_PIN    PA5_PIN
#define LCD_D6_PIN    PA6_PIN
#define LCD_D7_PIN    PA7_PIN
#define LCD_RS_PIN    PB1_PIN
#define LCD_EN_PIN    PB4_PIN
#define LCD_RW_PIN    PB2_PIN
/*
 *  Select LCD_MODE    _8_BIT_MODE   OR   _4_BIT_MODE
 */

#define LCD_MODE         _4_BIT_MODE


#endif /* HAL_LCD_LCD_CONFIG_H_ */
