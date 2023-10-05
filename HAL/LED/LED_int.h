/*
 * LED_int.h
 *
 *  Created on: ??�/??�/????
 *      Author: DELL
 */

#ifndef LED_INT_H_
#define LED_INT_H_

#include "../../SERVICE/stdTypes.h"
#include "../../SERVICE/ErrorStates.h"
#include "../../SERVICE/Macro_To_Function.h"

#include "LED_priv.h"

#define LED_NUM 3

ES_t LED_enuInit(LED_t * Copy_AstrLeds);

ES_t LED_enuTrunOn(LED_t * Copy_pstrLedConfig);

ES_t LED_enuTrunOff(LED_t * Copy_pstrLedConfig);

#endif /* LED_INT_H_ */
