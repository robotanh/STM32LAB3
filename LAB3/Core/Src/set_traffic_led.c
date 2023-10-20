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
void clear()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}


