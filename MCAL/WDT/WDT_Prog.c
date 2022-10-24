/*
 * ADC_Prog.c
 *
 *  Created on:
 *      Author:
 */

#include "WDT_Interface.h"
#include "WDT_Private.h"

void M_Void_WDTInit(void)
{
	/* TO ENABLE WDT	 */
	SET_BIT(WDTCR_REG,WDE_BIT);

	/* TO SELECT 2.1 SECONDS AS WINDOW TIME	 */
	SET_BIT(WDTCR_REG,WDP0_BIT);
	SET_BIT(WDTCR_REG,WDP1_BIT);
	SET_BIT(WDTCR_REG,WDP2_BIT);

}
void M_Void_WDTRefresh(void)
{
   asm("WDR"); // ASSEMBLY COMAND TO RESET WDT
}
