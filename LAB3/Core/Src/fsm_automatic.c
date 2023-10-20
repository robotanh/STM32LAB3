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
		 set_Timer1(red_duaration*100);

		 break;
	 case AUTO_RED:
		 set_red();
		 if(timer1_flag ==1)
		 {
			 status = AUTO_GREEN;
			 set_Timer1(green_duaration*100);
		 }
		 if(isButton1Pressed()==1)
		 {
			 status = MAN_RED;
			 set_Timer1(1000);
		 }
		 break;
	 case AUTO_GREEN:
		 set_green();
		 if(timer1_flag ==1)
		 {
			 status = AUTO_YELLOW;
			 set_Timer1(yellow_duaration*100);
		 }

		 break;
	 case AUTO_YELLOW:
		 set_yellow();
		 if(timer1_flag ==1)
		 {
			 status = AUTO_RED;
			 set_Timer1(red_duaration*100);
		 }
		 break;
	 default:
		 break;
	 }
}


