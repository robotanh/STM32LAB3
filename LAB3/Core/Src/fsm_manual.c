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
				set_autoAjust_red(MAN_duration);
				//red_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_RED;
					MAN_duration=0;
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
				set_autoAjust_green(MAN_duration);
				//green_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_GREEN;
					MAN_duration=0;
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
				set_autoAjust_yellow(MAN_duration);
				//yellow_duration = MAN_duration;
				set_Timer1(200);
				if(timer1_flag==1){
					status = AUTO_YELLOW;
					MAN_duration=0;
				}
			}

			break;
		default:
			break;

	}
}

