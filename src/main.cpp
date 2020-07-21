/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include "Arduino.h"

#define PUMP_GPIO 0

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(PUMP_GPIO, OUTPUT);
  Serial.begin(115200);
  Serial.setTimeout(2000);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PUMP_GPIO, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(PUMP_GPIO, LOW);
   // wait for a second
  delay(1000);
}
