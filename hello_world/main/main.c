#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

void app_main(void)
{
    while(1){
        printf("Hello world!\n");
        vTaskDelay(1000/portTICK_RATE_MS);
    }

}

