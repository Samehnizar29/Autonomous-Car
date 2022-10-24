/*
 * main.c
 *
 *  Created on:
 *      Author:
 */

#include "Projects.h"

int main()
{
	/*Initialize everything we will use while moving the car*/
	Project_Init();

	/*We will store the distance in front of the car in this variable*/
	u32 Local_U32_Distance = 0;

	while (1)
	{
		/*Start moving the car*/
		Local_U32_Distance = Project_Start();

		/*Make it move forward and print it on the screen*/
		Project_CarMoveForward();

		/*Enter this while when there is an obstacle in front of the car*/
		while (Local_U32_Distance < 20 && Local_U32_Distance > 0)
		{
			/*Check the distance on the right*/
			u16 Local_U16_Right = Project_CheckRightDirection();

			/*Check the distance on the left*/
			u16 Local_U16_Left = Project_CheckLeftDirection();

			/*If the two distances are blocked, move backward*/

			/*If the right side is clear, move right*/
		    if (Local_U16_Right > Local_U16_Left)
			{
				Project_CarMoveRight();
				_delay_ms(100);
				Local_U32_Distance = Local_U16_Right;
			}
			/*If the left side is clear or both sides are clear, move left*/
			else
			{
				Project_CarMoveLeft();
				_delay_ms(100);
				Local_U32_Distance = Local_U16_Left;
			}
			_delay_ms(300);
		}
	}
	return 0;
}
