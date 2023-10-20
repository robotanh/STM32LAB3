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
			if(timer1_flag == 1){
				status = AUTO_RED;
				set_Timer1(red_duration*100);
			}
			if(isButton1Pressed()==1){
				MAN_duration =0;
				status = MAN_GREEN;
				set_Timer1(500);
			}
			// when press button2 update red duaration
			if(isButton2Pressed()==1){
				red_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_RED;
				}

			}

			break;
	////////////////////////////////////////
		case MAN_GREEN:
			set_green();
			if(timer1_flag==1){
				status = AUTO_GREEN;
				set_Timer1(green_duration*100);
			}
			if(isButton1Pressed()==1){
				MAN_duration =0;
				status = MAN_YELLOW;
				set_Timer1(500);
			}
			// when press button2 update green duration
			if(isButton2Pressed()==1){
				green_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_GREEN;
				}
			}


			break;
	///////////////////////////////////////////////////
		case MAN_YELLOW:
			set_yellow();
			if(timer1_flag==1){
				status = AUTO_YELLOW;
				set_Timer1(yellow_duration*100);
			}
			if(isButton1Pressed()==1){
				MAN_duration =0;
				status = MAN_RED;
				set_Timer1(500);
			}
			if(isButton2Pressed()==1){
				yellow_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_YELLOW;
				}
			}

			break;
		default:
			break;

	}
}

