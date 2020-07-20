/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include "Arduino.h"

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(0, OUTPUT);
  Serial.begin(115200);
  Serial.setTimeout(2000);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(0, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(0, LOW);
   // wait for a second
  delay(1000);
}
