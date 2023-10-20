/*
 * set_traffic_led.h
 *
 *  Created on: Oct 19, 2023
 *      Author: Admin
 */

#ifndef INC_SET_TRAFFIC_LED_H_
#define INC_SET_TRAFFIC_LED_H_

#include "global.h"

void set_red();
void set_green();
void set_yellow();
void clear();
void set_autoAjust_red(int MAN_duration);
void set_autoAjust_yellow(int MAN_duration);
void set_autoAjust_green(int MAN_duration);


#endif /* INC_SET_TRAFFIC_LED_H_ */
