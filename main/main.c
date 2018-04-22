/*
    I2C Display Example
*/

#include <stdio.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <math.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include <driver/i2c.h>
#include <driver/gpio.h>
#include <driver/dac.h>
#include <esp_task_wdt.h>
#include "u8g2_esp32_hal.h"


// Task 1 OLED

// Task 2 Sinus am DAC


void app_main()
{
   // Hier sind sie gefragt, d.h. zwei neue Tasks, einen für das OLED zum Testen und einen für den Sinus am DAC
}

