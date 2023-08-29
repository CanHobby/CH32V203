
#include "debug.h"
#include "CHobby_Gpio/CHobby_Gpio.h"

/* Global typedef */

/* Global define */

/* Global Variable */

/**********************************************************************/

int main(void)
{
	int p = 1, q = 0, cnt = 0;
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    Delay_Init();
    USART_Printf_Init(115200);
    printf("CanHobby USB_203 SystemClk = %d MHz\r\n", SystemCoreClock/ 1000000 );


    CHobby_GPIO_INIT( LEDs_PORT, (LED1_PIN | LED2_PIN) );

    while(1)
    {
        printf("cnt is % 3d\r\n", cnt++ );
        GPIO_WriteBit( LEDs_PORT, LED1_PIN, (p) ? (p = Bit_RESET) : (p = Bit_SET));
        Delay_Ms(500);
        GPIO_WriteBit( LEDs_PORT, LED2_PIN, (q) ? (q = Bit_RESET) : (q = Bit_SET));
        Delay_Ms(500);
    }
}
