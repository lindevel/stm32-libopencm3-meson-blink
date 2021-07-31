#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main(void) {
    // Enable clock GPIOC
    rcc_periph_clock_enable(RCC_GPIOC);

    // Configure GPIO13
    gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, GPIO13);

    while (1) {
        // LED ON/OFF
        gpio_toggle(GPIOC, GPIO13);

        // Delay
        for (int i = 0; i < 200000; i++)
            __asm__("nop");
    }
}
