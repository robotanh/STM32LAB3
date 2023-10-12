/*
 * button.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Admin
 */

#include "button.h"
#include "main.h"

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;

void subKeyProcess()
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}
void getKeyInput()
{
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	if((KeyReg0 == KeyReg1 &&(KeyReg1 == KeyReg2))){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE)
			{
				//TODO
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				//TODO
				TimerForKeyPress = 200;
			}

		}
	}
}


