#include "button.h"
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

void Button_init() {
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOA, &GPIO_InitStruct);
}

int Button_isPressed() {
  const unsigned int port = GPIO_ReadInputData(GPIOA);
  return port & 0x1;
}