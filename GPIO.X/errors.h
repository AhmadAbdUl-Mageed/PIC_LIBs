/* 
 * File:   errors.h
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
 * This file contains the configurations of errors could caused while using any driver of our drivers.
 * You're not allowed to edit any of them.
 * In GPIO driver, you can access the error value in the parameter ERROR in your pin like:
 * pin_name.ERROR;
 * By reading these vales and compare it with this definitions you can get your error.
 * 
 * For more info, see the GPIO_FUNs.h
 */
#ifndef ERRORS_H
#define	ERRORS_H

//PIN_ERRORS
#define PORT_ERR 0
#define PIN_ERR 2
#define STATE_ERR 3
#define MODE_ERR 4
#define SUCCESS 1

//SEVEN_SEGMENT ERRORS
#define SEG_ERR 0
#define SUCCESS 1

#endif	/* ERRORS_H */

