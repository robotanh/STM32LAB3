/*
 * set_traffic_led.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Admin
 *
 */

#include "set_traffic_led.h"

void set_red()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}
void set_green()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}
void set_yellow()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
}
void set_autoAjust_red(int MAN_duration)
{
	set_duration_YELLOW = (2/5)* MAN_duration;
	set_duration_GREEN = (2/5) * MAN_duration;
	set_duration_RED = MAN_duration;
}
void set_autoAjust_yellow(int MAN_duration)
{
	set_duration_RED = (5/2)* MAN_duration;
	set_duration_GREEN = (3/2) * MAN_duration;
	set_duration_YELLOW = MAN_duration;
}
void set_autoAjust_green(int MAN_duration)
{
	set_duration_RED = (5/3)* MAN_duration;
	set_duration_YELLOW = (2/3) * MAN_duration;
	set_duration_GREEN = MAN_duration;
}

void clear()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}


