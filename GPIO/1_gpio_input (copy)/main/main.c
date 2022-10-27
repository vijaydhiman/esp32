#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define SWITCH 15

void app_main()
{

    gpio_pad_select_gpio(SWITCH);
    gpio_set_direction(SWITCH, GPIO_MODE_INPUT);
    gpio_pulldown_en(SWITCH);
    gpio_pullup_dis(SWITCH);
    
    while (true)
    {
        int level = gpio_get_level(SWITCH);
        vTaskDelay(1);
    }
}