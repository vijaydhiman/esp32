#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
  printf("enter a string\n"); 
  char c = 0;
  char str[100];
  memset(str,0,sizeof(str));
  while(c != '\n'){
    c = getchar();
    if(c != 0xff){
      printf("%c",c);
      str[strlen(str)] = c; 
    }
    vTaskDelay(100/portTICK_RATE_MS); 
  }
  printf("you entered %s\n",str);  
}