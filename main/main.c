#include "pico/stdlib.h"
#include <stdio.h>

#include "hardware/gpio.h"
#include "hardware/adc.h"

int main() {
    stdio_init_all();

    adc_init();
    adc_gpio_init(27);

    while (true) {
        adc_select_input(1); // Select ADC input 1 (GPIO27)
        int result = adc_read();
        printf("adc 1: %d \n", result);
        sleep_ms(100);
    }
}
