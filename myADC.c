/*
 * ADC.c
 *
 *  Created on: Dec 6, 2019
 *      Author: Ghagas
 */
#include "myADC.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
/*
void ADC_INISIALISASI(void) {
	ADCRA |= (1<<ADPS2) | (1<<ADPS1);
	ADMUX |= (1<<ADLAR) | (1<<REFS0);
	ADCSRA|= (1<<ADEN);
}

void READ_ADC(uint8_t channel){
	ADMUX &=~(0x1F);
	ADMUX |= channel;
	ADCSRA|= (1<<ADSC);
	while(!ADCSRA&(1<<ADIF)));
	ADCSRA|= (1<<ADIF);
}

uint8_t HasilADCH(uint8_t channel){
	return ADCH;
}
uint8_t HasilADCL(uint8_t channel){
	return ADCL;
}

*/
uint8_t temp1, temp2;
void myADC_init(void){
	ADCSRA |= (1<<ADPS2) | (1<<ADPS1);
	ADMUX |= (1<<REFS0);
	ADCSRA |= (1 <<ADEN);
}


void myADC_read(uint8_t channel, uint8_t *high, uint8_t *low, uint16_t *full){
	ADMUX &= ~(0x1F);
	ADMUX |= channel;
	ADCSRA |= (1<<ADSC);
	while(!(ADCSRA&(1<<ADIF)));
	ADCSRA |= (1<<ADIF);
	tLow = ADCL;
	tHigh = ADCH;
	*low = tLow;
	*high = tHigh;
	*full=(tHigh<<8) | tLow;
}
