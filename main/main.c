#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include "components/ssd1306.h"
#include "components/ssd1306.c"
//#include "components/font8x8_basic.h"

void app_main(void)
{
   SSD1306_t dev;

   ssd1306_init(&dev, 128, 64);

}
