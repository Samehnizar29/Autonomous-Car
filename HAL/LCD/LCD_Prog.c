/*
 * LED_Prog.c
 *
 *  Created on:
 *      Author:
 */

#include "LCD_Interface.h"
#include "LCD_Private.h"

void H_LCD_Void_LCDInit(void)
{
#if   LCD_MODE  == _8_BIT_MODE
	M_DIO_Void_SetPinDirection(LCD_D0_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D1_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D2_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D3_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D4_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D5_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D6_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D7_PIN,OUTPUT);

	M_DIO_Void_SetPinDirection(LCD_RS_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_EN_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_RW_PIN,OUTPUT);

	M_DIO_Void_SetPinValue(LCD_RW_PIN,LOW);

	H_LCD_Void_LCDWriteCommand(LCD_8_BIT_MODE); // TO ACTIVE 8-BIT-MODE
	H_LCD_Void_LCDWriteCommand(LCD_DISPLAY_ON_CURSOR_OFF);
	H_LCD_Void_LCDClear();
	H_LCD_Void_LCDWriteCommand(LCD_RETURN_HOME);

#elif   LCD_MODE  == _4_BIT_MODE
	M_DIO_Void_SetPinDirection(LCD_D4_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D5_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D6_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_D7_PIN,OUTPUT);

	M_DIO_Void_SetPinDirection(LCD_RS_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_EN_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(LCD_RW_PIN,OUTPUT);

	M_DIO_Void_SetPinValue(LCD_RW_PIN,LOW);

	H_LCD_Void_LCDWriteCommand(LCD_4_BIT_MODE_1);
	H_LCD_Void_LCDWriteCommand(LCD_4_BIT_MODE_2);
	H_LCD_Void_LCDWriteCommand(LCD_4_BIT_MODE_3);
	H_LCD_Void_LCDWriteCommand(LCD_DISPLAY_ON_CURSOR_OFF);
	H_LCD_Void_LCDClear();
	H_LCD_Void_LCDWriteCommand(LCD_RETURN_HOME);
#endif
}
void H_LCD_Void_LCDWriteCharacter(u8 Copy_U8_Character)
{
	M_DIO_Void_SetPinValue(LCD_RS_PIN,HIGH);
#if   LCD_MODE  == _8_BIT_MODE
H_LCD_Void_SetLCDPins(Copy_U8_Character);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
 _delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
#elif   LCD_MODE  == _4_BIT_MODE
//1ST HALF
H_LCD_Void_SetLCDPins(Copy_U8_Character >> 4);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
_delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
_delay_ms(1);
//2ND HALF
H_LCD_Void_SetLCDPins(Copy_U8_Character);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
_delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
_delay_ms(1);
#endif
_delay_ms(1);
}
void H_LCD_Void_LCDWriteString(u8* Copy_U8_P)
{
	u8 Local_U8_Counter =0;
	while(Copy_U8_P[Local_U8_Counter] !='\0')
	{
	H_LCD_Void_LCDWriteCharacter(Copy_U8_P[Local_U8_Counter]);
	Local_U8_Counter++;
	}
}


void H_LCD_Void_LCDWriteCommand(u8 Copy_U8_Command)
{
	M_DIO_Void_SetPinValue(LCD_RS_PIN,LOW);
#if   LCD_MODE  == _8_BIT_MODE
H_LCD_Void_SetLCDPins(Copy_U8_Command);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
 _delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
#elif   LCD_MODE  == _4_BIT_MODE
//1ST HALF
H_LCD_Void_SetLCDPins(Copy_U8_Command >> 4);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
_delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
_delay_ms(1);
//2ND HALF
H_LCD_Void_SetLCDPins(Copy_U8_Command);
M_DIO_Void_SetPinValue(LCD_EN_PIN,HIGH);
_delay_ms(1);
M_DIO_Void_SetPinValue(LCD_EN_PIN,LOW);
_delay_ms(1);
#endif
}
void H_LCD_Void_LCDClear(void)
{
	H_LCD_Void_LCDWriteCommand(LCD_CLEAR);
}
static void H_LCD_Void_SetLCDPins(u8 Copy_U8_Pins)
{
#if   LCD_MODE  == _8_BIT_MODE
	M_DIO_Void_SetPinValue(LCD_D0_PIN,Copy_U8_Pins >>0 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D1_PIN,Copy_U8_Pins >>1 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D2_PIN,Copy_U8_Pins >>2 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D3_PIN,Copy_U8_Pins >>3 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D4_PIN,Copy_U8_Pins >>4 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D5_PIN,Copy_U8_Pins >>5 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D6_PIN,Copy_U8_Pins >>6 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D7_PIN,Copy_U8_Pins >>7 & 0X01);
#elif LCD_MODE  == _4_BIT_MODE
	M_DIO_Void_SetPinValue(LCD_D4_PIN,Copy_U8_Pins >>0 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D5_PIN,Copy_U8_Pins >>1 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D6_PIN,Copy_U8_Pins >>2 & 0X01);
	M_DIO_Void_SetPinValue(LCD_D7_PIN,Copy_U8_Pins >>3 & 0X01);
#endif

}
void H_LCD_Void_LCDWriteNumber(s32 Copy_S32_Num)
{
	s8 Local_S8_Counter=-1;
	u8 Local_U8_Arr[16];
	if(Copy_S32_Num<0)
	{
		Copy_S32_Num = Copy_S32_Num * -1;
		H_LCD_Void_LCDWriteCharacter('-');
	}
	do
{
		Local_S8_Counter++;
	    Local_U8_Arr[Local_S8_Counter] = Copy_S32_Num % 10;
		Copy_S32_Num /=10;
}  while(Copy_S32_Num !=0);
	while(Local_S8_Counter >= 0)
	{
H_LCD_Void_LCDWriteCharacter(Local_U8_Arr[Local_S8_Counter]+48);
Local_S8_Counter--;
	}
}
void H_LCD_Void_LCDGoTo(u8 Copy_U8_Row,u8 Copy_U8_Coloumn)
{
	u8 Local_U8_Arr[2] = {0x80 ,0xC0};
	H_LCD_Void_LCDWriteCommand(Local_U8_Arr[Copy_U8_Row] + Copy_U8_Coloumn);
}
void H_LCD_Void_LCDWriteNumberdeci(f64 Copy_F64_Num)
{
	s8 Local_S8_Counter=-1;
	u8 Local_U8_Arr[16];
	if(Copy_F64_Num<0)
	{
		Copy_F64_Num = Copy_F64_Num * -1;
		H_LCD_Void_LCDWriteCharacter('-');
	}
	f64 Local_F64_Store=Copy_F64_Num;
	do
{
		Local_S8_Counter++;
	    Local_U8_Arr[Local_S8_Counter] =(u16) Copy_F64_Num % 10;
	    Copy_F64_Num =(u16) Copy_F64_Num/10;
}  while(((u16)Copy_F64_Num) !=0);
	while(Local_S8_Counter >= 0)
	{
H_LCD_Void_LCDWriteCharacter(Local_U8_Arr[Local_S8_Counter]+48);
Local_S8_Counter--;
	}
	if(Local_F64_Store != ((u32) Local_F64_Store))
	{
		H_LCD_Void_LCDWriteCharacter('.');
		s8 Local_S8_Counter_1=-1;
		u8 Local_U8_Arr_1[16];
		f64 Local_F64_Deci=Local_F64_Store - ((u32) Local_F64_Store);
		do
	{
			Local_S8_Counter_1++;
			Local_F64_Deci *= 10;
		    Local_U8_Arr_1[Local_S8_Counter_1] =(u32)Local_F64_Deci;
		    Local_F64_Deci = Local_F64_Deci - ((u32) Local_F64_Deci);
	}  while(Local_S8_Counter_1 !=5);
		u8 i;
		for(i=0;i<=Local_S8_Counter_1;i++)
		{
	H_LCD_Void_LCDWriteCharacter(Local_U8_Arr_1[i]+48);
		}
	}
}
