/*
 * EXIT_Test.c
 *
 *  Created on: ??�/??�/????
 *      Author: DELL
 */

#include "EXIT_Test.h"
#include <util/delay.h>

volatile u8 Global_u8Mode = NORMAL_MODE;

extern LED_t LED_AstrLedConfig[LED_NUM];
extern SW_t Switch_AstrSwitchConfig[SW_NUM];


extern EXTI_t EXTI_AstrEXTIConfig[3];

void APP_voidInit(void) {

	DIO_enuInit();
	LED_enuInit(LED_AstrLedConfig);
	Switch_enuInit(Switch_AstrSwitchConfig);
	Seven_Segment_enuInit();

	EXTI_enuInit(EXTI_AstrEXTIConfig);
	EXTI_enuSetCallBack(&INT0_ISR, 0);


	GIE_VoidEnable();
	EXTI_enuEnableInterrupt(0);
}


void APP_voidProgram() {

	while(1) {

		if(Global_u8Mode == NORMAL_MODE) {

			APP_voidNormalMode();
		}
		else {

			APP_voidPedestriansMODE();
		}
	}
}


void APP_voidNormalMode(){


	APP_voidGreenLed();

	APP_voidYallowLed();

	APP_voidRedLed();

	APP_voidYallowLed();

}

void APP_voidPedestriansMODE() {

	LED_enuTrunOff(&LED_AstrLedConfig[RED_LED]);
	LED_enuTrunOff(&LED_AstrLedConfig[GREEN_LED]);


	APP_voidYallowLed();

	APP_voidRedLed();

	APP_voidYallowLed();

}

void INT0_ISR(void) {

	//Global_u8Mode = PEDESTRIANS_MODE;
	APP_voidPedestriansMODE();
}

void APP_voidYallowLed() {

	for(s8 i = 3; i >= 0; --i) {

		Seven_Segment_enuDisplayNum(i);

		for(u8 j = 0; j < 2; ++j) {
			LED_enuTrunOn(&LED_AstrLedConfig[YALLOW_LED]);
			_delay_ms(250);
			LED_enuTrunOff(&LED_AstrLedConfig[YALLOW_LED]);
			_delay_ms(250);
		}
	}
}

void APP_voidRedLed() {

	LED_enuTrunOn(&LED_AstrLedConfig[RED_LED]);
	for(s8 i = 9; i >= 0; --i) {
		Seven_Segment_enuDisplayNum(i);
		_delay_ms(1000);
	}
	LED_enuTrunOff(&LED_AstrLedConfig[RED_LED]);
}

void APP_voidGreenLed() {

	LED_enuTrunOn(&LED_AstrLedConfig[GREEN_LED]);
	for(s8 i = 9; i >= 0; --i) {
		Seven_Segment_enuDisplayNum(i);
		_delay_ms(1000);
	}
	LED_enuTrunOff(&LED_AstrLedConfig[GREEN_LED]);
}



