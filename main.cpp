/*  Binary-Counter-BusOut-Template
*  
*   Template for sequencing a 4-bit binary counter (0-15) using external LEDs. Activity 2
*
*   Board: NUCLEO L476RG
*   Author: Dr James H. Chandler, University of Leeds 2021  
*/

#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE     1000ms

// Update pins to create a 4-bit bus
BusOut leds_bus(PC_0, PC_1); // Create BusOut Object called led_bus and assign bus pins (LSB, ....., MSB)


int val = 0;

void init_leds();           // Declare led initialisation function 

int main()
{
init_leds();

    while (true) {
        
        for(val=0; val<=3; val++){

            // Add code here to write 'val' to the bus. 
            ThisThread::sleep_for(BLINKING_RATE);   // Sleep for specified duration
        }
                
    }
}

//Implement initialisation function
void init_leds(){
    leds_bus.write(0);
}