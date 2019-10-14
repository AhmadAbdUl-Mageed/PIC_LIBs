/* 
 * File:   _GPIO.h
 * Company: Impulses-I
 * Section: Embedded systems section.
 * Author: Ahmad AbdUl-Mageed
 * 
 * Created on September 17, 2019, 2:29 AM
 * Version: 1
 * 
 * For more info: 
 * Web site: https://impulses-i.com
 * Mail: info@impulses-i.com
 * Phone: 01030303155
 * Facebook page: www.facebook.com/impulses.i
 */

/*
 * This file is the low level of the GPIO driver.
 * You're not allowed to use these functions or to edit them.
 * You're only allowed to use the functions in "GPIO_FUNs.h" file.
 */

#ifndef _GPIO_H_V1
#define	_GPIO_H_V1

#include"bit_configurations.h"
#include"types.h"
#include"STATES.h"
#include"GPIO_CONFIG.h"


void _pinMode(uint8 port, uint8 pin, uint8 state);
void _digitalWrite(uint8 port, uint8 pin, uint8 state);
uint8 _digitalRead(uint8 port, uint8 pin);

#endif	/* _GPIO_H */

