#ifndef LED_H
#define LED_H


#include "pico/stdlib.h"  // Include for RP2040-specific standard libraries

// LED Pin Definitions
#define RED_LED_PIN 6    // GPIO pin for Red LED
#define GREEN_LED_PIN 7  // GPIO pin for Green LED
#define BLUE_LED_PIN 4   // GPIO pin for Blue LED

// Function Prototypes
void led_init(void);
void led_on(uint led_pin);
void led_off(uint led_pin);
void delay_ms(uint32_t ms);

#endif