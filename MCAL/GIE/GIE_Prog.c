/*
 * GIE_Prog.c
 *
 *  Created on:
 *      Author:
 */
#include "GIE_Interface.h"
#include "GIE_Private.h"

void M_GIE_Void_GlobalInterruptEnable(void)
{
	// to enable -> global interrupt
	SET_BIT(SREG_REG,I_BIT);
}
void M_GIE_Void_GlobalInterruptDisable(void)
{
	// to disable -> global interrupt
	CLR_BIT(SREG_REG,I_BIT);
}
