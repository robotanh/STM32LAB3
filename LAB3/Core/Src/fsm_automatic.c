/*
 * fsm_automatic.c
 *
 *  Created on: Oct 18, 2023
 *      Author: Admin
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	 switch (status){
	 case INIT:
		 clear();

		 status = AUTO_RED;
		 set_Timer1((int)(red_duration*100));
		 set_Timer2((int)(green_duration*100));
		 set_green_follow();

		 break;
	 case AUTO_RED:
		 set_red();
		 if(timer2_flag ==1)
		 {
			 set_yellow_follow();
			 set_Timer2((int)(yellow_duration*100));
		 }
		 if(timer1_flag ==1)
		 {
			 status = AUTO_GREEN;
			 set_Timer1((int)(green_duration*100));
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_RED;
			 set_Timer1(1000);
		 }
		 break;
	 case AUTO_GREEN:
		 set_green();
		 set_red_follow();
		 if(timer1_flag ==1)
		 {

			 status = AUTO_YELLOW;
			 set_Timer1((int)(yellow_duration*100));
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_GREEN;
			 set_Timer1(1000);
		 }

		 break;
	 case AUTO_YELLOW:
		 set_yellow();
		 set_red_follow();
		 if(timer1_flag ==1)
		 {
			 status = AUTO_RED;
			 set_Timer1((int)(red_duration*100));
			 set_Timer2((int)(green_duration*100));
			 set_green_follow();
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_YELLOW;
			 set_Timer1(1000);
		 }
		 break;
	 default:
		 break;
	 }
}
void traffic_led_follow(){
	switch(status){
	case INIT:
//		set_green_follow();
//		set_Timer2((int)(green_duration*100));
//		if(timer2_flag == 1){
//			set_yellow_follow();
//			set_Timer2((int)(yellow_duration*100));
//		}
		break;
	case AUTO_RED:
		break;
	case AUTO_GREEN:
		break;
	case AUTO_YELLOW:
		break;
	default:
		break;
	}
}




