/*
 * buttons.h
 *
 *  Created on: Apr 17, 2024
 *      Author: Caltech Racing
 */

extern TIM_HandleTypeDef htim3;

typedef void (*button_callback_t)(GPIO_PinState state);

typedef struct {
	GPIO_TypeDef *Port;
	uint16_t Pin;
	button_callback_t *callback;
} Button;

void Debounce_Buttons();
void Button_Debounced(uint16_t Pin, GPIO_PinState state);
