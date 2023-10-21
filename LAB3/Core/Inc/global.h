/*
 * globle.h
 *
 *  Created on: Oct 18, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "set_traffic_led.h"
#include "software_timer.h"
#include "button.h"
#include "main.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

#define MAN_RED		14
#define MAN_GREEN	15
#define MAN_YELLOW	16



extern int status;
extern int MAN_duration;

extern float red_duration ;
extern float green_duration ;
extern float yellow_duration ;
extern int led;

extern float red_counter ;
extern float green_counter ;
extern float yellow_counter ;


#endif /* INC_GLOBAL_H_ */
