#include <stdio.h>
#include "led.h"  // Include the LED driver
// #include "led.c"

int main() {
    // Initialize the standard I/O (for debugging)
    stdio_init_all();
    
    // Initialize the LEDs
    led_init();

    // All LEDs are off for the first 5 seconds
    led_off(RED_LED_PIN);
    led_off(GREEN_LED_PIN);
    led_off(BLUE_LED_PIN);
    printf("All LEDs are OFF for the first 5 seconds\n");
    delay_ms(5000);

    // Infinite loop to continuously repeat the sequence
    while (true) {
        // Sequence 1: Red LED ON for 1 second
        led_on(RED_LED_PIN);
        printf("Red LED ON\n");
        delay_ms(1000);
        led_off(RED_LED_PIN);
        printf("Red LED OFF\n");

        // Sequence 2: Green LED ON for 1 second
        led_on(GREEN_LED_PIN);
        printf("Green LED ON\n");
        delay_ms(1000);
        led_off(GREEN_LED_PIN);
        printf("Green LED OFF\n");

        // Sequence 3: Blue LED ON for 1 second
        led_on(BLUE_LED_PIN);
        printf("Blue LED ON\n");
        delay_ms(1000);
        led_off(BLUE_LED_PIN);
        printf("Blue LED OFF\n");

        // All LEDs ON for 2 seconds
        led_on(RED_LED_PIN);
        led_on(GREEN_LED_PIN);
        led_on(BLUE_LED_PIN);
        printf("All LEDs ON\n");
        delay_ms(2000);

        // Turn all LEDs OFF
        led_off(RED_LED_PIN);
        led_off(GREEN_LED_PIN);
        led_off(BLUE_LED_PIN);
        printf("All LEDs OFF\n");
        delay_ms(5000);
    }

    return 0;
}
