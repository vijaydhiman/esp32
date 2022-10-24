#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"

#define PIN 2
void app_main(void)
{
    bool on = false;
    gpio_pad_select_gpio(PIN);
    gpio_set_direction(PIN,GPIO_MODE_OUTPUT);
    while(1){
        on = !on;
        gpio_set_level(PIN, !on);
        vTaskDelay(1000/portTICK_RATE_MS);
    }

}

