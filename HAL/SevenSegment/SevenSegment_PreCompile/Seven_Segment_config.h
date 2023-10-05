/*
 * Seven_Segment_config.h
 *
 *  Created on: ??�/??�/????
 *      Author: DELL
 */


#ifndef SEVEN_SEGMENT_CONFIG_H_
#define SEVEN_SEGMENT_CONFIG_H_

#include "../../../SERVICE/stdTypes.h"
#include "../../../SERVICE/ErrorStates.h"
#include "../../../SERVICE/Macro_To_Function.h"


#define  SEG_APIN           DIO_u8PIN0
#define  SEG_APORT          DIO_u8PORTC

#define  SEG_BPIN           DIO_u8PIN1
#define  SEG_BPORT          DIO_u8PORTC

#define  SEG_CPIN           DIO_u8PIN2
#define  SEG_CPORT          DIO_u8PORTC

#define  SEG_DPIN           DIO_u8PIN3
#define  SEG_DPORT          DIO_u8PORTC

#define  SEG_EPIN           DIO_u8PIN4
#define  SEG_EPORT          DIO_u8PORTC

#define  SEG_FPIN           DIO_u8PIN5
#define  SEG_FPORT          DIO_u8PORTC

#define  SEG_GPIN           DIO_u8PIN6
#define  SEG_GPORT          DIO_u8PORTC

#define  SEG_CMN_PIN        NOT_CONNECTED
#define  SEG_CMN_PORT       NOT_CONNECTED

#define  SEG_DOT_PIN        NOT_CONNECTED
#define  SEG_DOT_PORT       NOT_CONNECTED

#define  SEG_TYPE           COMMON_CTHODE

#endif /* SEVEN_SEGMENT_CONFIG_H_ */
