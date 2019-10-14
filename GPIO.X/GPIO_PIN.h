/* 
 * File:   GPIO_Pin.h
 * Author: aabdul-mageed
 *
 * Created on October 4, 2019, 7:28 PM
 */

#ifndef GPIO_PIN_H
#define	GPIO_PIN_H

#include"bit_configurations.h"
#include"types.h"
#include"configurations.h"
#include"GPIO_CONFIG.h"
#include"_GPIO.h"
#include"GPIO_PORT.h"
#include"STATES.h"

typedef  struct pin{
    uint8 PORT:3;
    uint8 pinNum:3;
    uint8 MODE:1;
    uint8 STATE:1;
    uint8 ERROR:3;
}Pin;


#endif	/* GPIO_PIN_H */

