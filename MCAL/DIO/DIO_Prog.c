/*
 * DIO_Prog.c
 *
 *  Created on:
 *      Author:
 */
#include "DIO_Interface.h"
#include "DIO_Private.h"

void M_DIO_Void_SetPinDirection(u8 Copy_u8_Num,u8 Copy_u8_State)
{
	u8 Local_u8_Pin= Copy_u8_Num % 10;
	u8 Local_u8_Port=Copy_u8_Num / 10;
	switch(Copy_u8_State)
	{
	case INPUT:
		switch(Local_u8_Port)
			{
			case 1: CLR_BIT(DDRA_REG,Local_u8_Pin);   break;
			case 2: CLR_BIT(DDRB_REG,Local_u8_Pin);   break;
			case 3: CLR_BIT(DDRC_REG,Local_u8_Pin);   break;
			case 4: CLR_BIT(DDRD_REG,Local_u8_Pin);   break;
			default:                                  break;

			}
			break;
	case OUTPUT:
		switch(Local_u8_Port)
		{
		case 1: SET_BIT(DDRA_REG,Local_u8_Pin);   break;
		case 2: SET_BIT(DDRB_REG,Local_u8_Pin);   break;
		case 3: SET_BIT(DDRC_REG,Local_u8_Pin);   break;
		case 4: SET_BIT(DDRD_REG,Local_u8_Pin);   break;
		default:                                  break;
		}

		break;
		default:                                  break;
	}
}
void M_DIO_Void_SetPinValue(u8 Copy_u8_Num,u8 Copy_u8_State)
{
	    u8 Local_u8_Pin= Copy_u8_Num % 10;
		u8 Local_u8_Port=Copy_u8_Num / 10;
		switch(Copy_u8_State)
		{
		case LOW:
			switch(Local_u8_Port)
				{
				case 1: CLR_BIT(PORTA_REG,Local_u8_Pin);   break;
				case 2: CLR_BIT(PORTB_REG,Local_u8_Pin);   break;
				case 3: CLR_BIT(PORTC_REG,Local_u8_Pin);   break;
				case 4: CLR_BIT(PORTD_REG,Local_u8_Pin);   break;
				default:                                   break;
				}
				break;
		case HIGH:
			switch(Local_u8_Port)
			{
			case 1: SET_BIT(PORTA_REG,Local_u8_Pin);   break;
			case 2: SET_BIT(PORTB_REG,Local_u8_Pin);   break;
			case 3: SET_BIT(PORTC_REG,Local_u8_Pin);   break;
			case 4: SET_BIT(PORTD_REG,Local_u8_Pin);   break;
			default:                                   break;
			}
			break;
			default:                                   break;
		}
	}
void M_DIO_Void_TogPin(u8 Copy_u8_Num)
{
	u8 Local_u8_Pin= Copy_u8_Num % 10;
	u8 Local_u8_Port=Copy_u8_Num / 10;
		switch(Local_u8_Port)
			{
			case 1:  TGL_BIT(PORTA_REG,Local_u8_Pin);   break;
			case 2:  TGL_BIT(PORTB_REG,Local_u8_Pin);   break;
			case 3:  TGL_BIT(PORTC_REG,Local_u8_Pin);   break;
			case 4:  TGL_BIT(PORTD_REG,Local_u8_Pin);   break;
			default:                                   break;

			}
}

u8 M_DIO_U8_GetPinValue(u8 Copy_u8_Num)
{
	u8 Local_u8_Pin= Copy_u8_Num % 10;
	u8 Local_u8_Port=Copy_u8_Num / 10;
	u8 Local_u8_Reading=0;
		switch(Local_u8_Port)
			{
			case 1:  Local_u8_Reading=GET_BIT(PINA_REG,Local_u8_Pin);   break;
			case 2:  Local_u8_Reading=GET_BIT(PINB_REG,Local_u8_Pin);   break;
			case 3:  Local_u8_Reading=GET_BIT(PINC_REG,Local_u8_Pin);   break;
			case 4:  Local_u8_Reading=GET_BIT(PIND_REG,Local_u8_Pin);   break;
			default:                                                    break;
			}
		return  Local_u8_Reading;
}
void M_DIO_Void_SetPinPullUpRes(u8 Copy_u8_Num,u8 Copy_u8_State)
{
    u8 Local_u8_Pin= Copy_u8_Num % 10;
	u8 Local_u8_Port=Copy_u8_Num / 10;
		switch(Copy_u8_State)
		{
		case DISABLE:
			switch(Local_u8_Port)
				{
				case 1: CLR_BIT(PORTA_REG,Local_u8_Pin);   break;
				case 2: CLR_BIT(PORTB_REG,Local_u8_Pin);   break;
				case 3: CLR_BIT(PORTC_REG,Local_u8_Pin);   break;
				case 4: CLR_BIT(PORTD_REG,Local_u8_Pin);   break;
				default:                                   break;
				}
				break;
		case ENABLE:
			switch(Local_u8_Port)
			{
			case 1: SET_BIT(PORTA_REG,Local_u8_Pin);   break;
			case 2: SET_BIT(PORTB_REG,Local_u8_Pin);   break;
			case 3: SET_BIT(PORTC_REG,Local_u8_Pin);   break;
			case 4: SET_BIT(PORTD_REG,Local_u8_Pin);   break;
			default:                                   break;
			}
			break;
			default:                                   break;
		}
}
