#include "led.h"

// Function to initialize the LEDs
void led_init(void) {
    // Initialize Red and Green LEDs as Positive Logic
    gpio_init(RED_LED_PIN);
    gpio_set_dir(RED_LED_PIN, GPIO_OUT);
    
    gpio_init(GREEN_LED_PIN);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
    
    // Initialize Blue LED as Negative Logic
    gpio_init(BLUE_LED_PIN);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);
    gpio_put(BLUE_LED_PIN, true);  // Initially turn Blue LED off (Negative logic)
}

// Function to turn the LED ON
void led_on(uint led_pin) {
    if (led_pin == BLUE_LED_PIN) {
        // Blue LED is negative logic
        gpio_put(led_pin, false);  // Turn ON
    } else {
        gpio_put(led_pin, true);   // Red/Green Positive Logic LEDs ON
    }
}

// Function to turn the LED OFF
void led_off(uint led_pin) {
    if (led_pin == BLUE_LED_PIN) {
        // Blue LED is negative logic
        gpio_put(led_pin, true);   // Turn OFF
    } else {
        gpio_put(led_pin, false);  // Red/Green Positive Logic LEDs OFF
    }
}

// Function for delay
void delay_ms(uint32_t ms) {
    sleep_ms(ms);
}
