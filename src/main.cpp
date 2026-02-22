#include <Arduino.h>
int value = 0;
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading

void setup() {

    Serial.begin(9600);
    pinMode(A0, INPUT);
    // write your initialization code here
}

void loop() {

    // write your code here
    value = analogRead(A0);
    Serial.println(value);
    delay(500);
}
