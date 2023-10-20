/*
 * fsm_manual.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Admin
 */

#include"fsm_manual.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			set_red();
			if(timer1_flag == 1)
			{
				status = AUTO_RED;
				set_Timer1(red_duaration*100);
			}
			if(isButton1Pressed()==1){
				status = MAN_GREEN;
				set_Timer1(500);
			}
			// when press button2 update red duaration
			if(isButton2Pressed()==1){
				red_duaration = MAN_duaration;
				status = AUTO_RED;
				set_Timer1(200);
			}

			break;
		case MAN_GREEN:
			break;
		case MAN_YELLOW:
			break;
		default:
			break;

	}
}

