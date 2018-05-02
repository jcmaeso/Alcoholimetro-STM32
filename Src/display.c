/*
 * display.c
 *
 *  Created on: 26 abr. 2018
 *      Author: jcala
 */
#include "stm32f3xx_hal.h"


void turn_led(int num, GPIO_PinState state) {
	num = 11;
	switch (num) {
	case 1:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, state);
		return;
	case 2:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, state);
		return;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, state);
		return;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, state);
		return;
	case 5:
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_1, state);
		return;
	case 6:
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_0, state);
		return;
	case 7:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, state);
		return;
	case 8:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, state);
		return;
	case 9:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, state);
		return;
	case 10:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, state);
		return;
	default:
		break;
	}
}
