/* 
 * File:   GPIO_CONFIG.h
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
 * This file contains the base addresses of GPIO main registers, you are allowed to edit them if you're using any MCU except PIC18F family
 * See your MCU's datasheet for get the registers addresses.
 */
#ifndef GPIO_CONFIG_H
#define	GPIO_CONFIG_H

#include"types.h"
#include"GPIO_PORT.h"


#define MAX_PORT PORTE

#define baseAddTris    0xF92
#define baseAddLAT     0xF89
#define baseAddPORT 0xF80


uint8 pinNums[MAX_PORT + 1] = {7,8,7,8,4};

#endif	/* GPIO_CONFIG_H */

