/*
 * Interrupt.h
 *
 *  Created on: ??�/??�/????
 *      Author: DELL
 */

#ifndef MCAL_EXTI_INTERRUPT_H_
#define MCAL_EXTI_INTERRUPT_H_


#define ISR(VECT_NUM)        void VECT_NUM (void) __attribute__ ((signal));\
	                         void VECT_NUM (void)

#define VECT_INT0            __vector_1
#define VECT_INT1            __vector_2
#define VECT_INT2            __vector_3

#define VECT_ADC             __vector_16

#endif /* MCAL_EXTI_INTERRUPT_H_ */
