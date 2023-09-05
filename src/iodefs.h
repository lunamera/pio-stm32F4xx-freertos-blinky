
// LED 
#define LED_PIN                     LL_GPIO_PIN_13
#define LED_GPIO_PORT               GPIOC
#define LED_GPIO_CLK_ENABLE()       LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOC)

// Button
#define BUTTON_PIN                  LL_GPIO_PIN_0
#define BUTTON_GPIO_PORT            GPIOA
#define BUTTON_GPIO_CLK_ENABLE()    LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA)
