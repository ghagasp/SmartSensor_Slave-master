/*
 * myACD.h
 *
 *  Created on: Dec 13, 2019
 *      Author: Ghagas
 */

#ifndef MYACD_H_
#define MYACD_H_


#include <avr/io.h>

uint8_t tLow, tHigh;
void myADC_init(void);
void myADC_read(uint8_t channel, uint8_t *high, uint8_t *low, uint16_t *full);


#endif /* MYACD_H_ */
