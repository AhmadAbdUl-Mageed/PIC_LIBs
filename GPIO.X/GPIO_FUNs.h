/* 
 * File:   GPIO_FUNs.h
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
 * Help:
 * For creating a pin to use, you can use Pin type to define a pin, so write:
 * Pin pin_name; //P of Pin type is capital
 * 
 * For using any pin, you have to choose it's port and pinNum, by using "pinInit() function" like:
 * pinInit(&pin_name, PORTA, 1); //the pin_name pin is connected to pin1 of port a.
 * You have to send the address of pin_name, the port name, and the number of the pin that you're using.
 * 
 * To choose the mode you'll use for this pin, you can use "pinMode() function" like:
 * pinMode(&pin_name, OUPTUT) for using the pin as a digital output or pinMode(&pin_name, INPUT) for using the pin as a digital input.
 * 
 * To write a value HIGH or LOW to the output pin, you can use "digitalWrite() function" like:
 * digitalWrite(&pin_name, HIGH) for HIGH output, digitlaWrite(&pin_name, LOW) for LOW output
 * 
 * To read a value of the pin pin_name you can use digitalRead() function" like:
 * digitalRead(&pin_name).
 * 
 * After making digitalRead, the state of your pin will be assigned in variable called pin_name.STATE.
 * 
 * if there's an error in using any of these functions, the error will be written in pin_name.ERROR and error types is:
 *      PORT_ERR if the error is that the "port name is not exists in your pic".
 *      PIN_ERR if the error is that "the pin number is not exists in your PORT".
 *      MODE_ERR if the error is that "the Mode you need to choose for the pin is not exists (not OUTPUT or  INPUT).
 *      STATE_ERR if the error is that "the state that you need to set is not exists (not HIGH or  LOW)".
 *      SUCCESS if the pin configuration is done successfully.
 */
#ifndef GPIO_FUNS_H
#define	GPIO_FUNS_H

#include"bit_configurations.h"
#include"types.h"
#include"configurations.h"
#include"errors.h"
#include"GPIO_CONFIG.h"
#include"_GPIO.h"
#include"GPIO_PORT.h"
#include"STATES.h"
#include"GPIO_PIN.h"

void pinInit(Pin *P_PIN, uint8 PORT, uint8 pinNum);
void pinMode(Pin *P_PIN, uint8 MODE);
void digitalWrite(Pin *P_PIN, uint8 STATE);
void digitalRead(Pin *P_PIN);

#endif	/* GPIO_FUNS_H */

