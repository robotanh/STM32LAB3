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
void set_red_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
}
void set_green_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
}
void set_yellow_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
}
void set_autoAjust_red(int duration)
{
	yellow_duration = (float)duration/5*2;
	green_duration = (float)duration/5*3;
	red_duration = (float)duration;
}
void set_autoAjust_yellow(int duration)
{
	red_duration =  (float)duration/2*5;
	green_duration =(float)duration/2*3;
	yellow_duration = (float)duration;
}
void set_autoAjust_green(int duration)
{
	red_duration = (float)duration/3*5;
	yellow_duration = (float)duration/3*2;
	green_duration = (float)duration;
}

void clear()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}


