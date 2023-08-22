#include "stdio.h"
#include "ch32v20x.h"

void CHobby_GPIO_INIT( GPIO_TypeDef *Port, uint16_t Pins )
{
    GPIO_InitTypeDef GPIO_InitStructure = {0};

    if( Port == GPIOB ) { RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);   }
//    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitStructure.GPIO_Pin = Pins;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init( Port, &GPIO_InitStructure);
}
