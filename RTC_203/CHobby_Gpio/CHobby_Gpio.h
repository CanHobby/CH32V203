/* CHobby_Gpio.h  Author: CanHobby.ca */

#ifndef CHOBBY_GPIO_H_
#define CHOBBY_GPIO_H_

#define LEDs_PORT	GPIOB

#define LED1 PB9
#define LED1_PIN	GPIO_Pin_9

#define LED2 PB8
#define LED2_PIN	GPIO_Pin_8

void CHobby_GPIO_INIT( GPIO_TypeDef *Port, uint16_t Pins );

#endif /* CHOBBY_GPIO_H_ */
