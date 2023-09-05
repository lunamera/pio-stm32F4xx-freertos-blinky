
#include "iodefs.h"

#include <FreeRTOS.h>
#include "task.h"

#include "stm32f4xx_ll_gpio.h"


void prvLEDtoggleTask( void *pvParameters )
{
	for( ;; )
	{
		LL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
		vTaskDelay( 1000 );	
    }
}
