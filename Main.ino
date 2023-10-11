// Created by: Jaden Plugowsky
// Created on: Oct 2023
//
// This is a servo-controlling circuit.

#include <Servo.h>

Servo servoNumber1;

int pin5 = 5;

void setup()
{
    // This sets up servo pins
    servoNumber1.attach(pin5);
    servoNumber1.write(0); // Default servo position
}

void loop()
{
    servoNumber1.write(180); // 180 degrees
    delay(1000); // Wait for 1000 millisecond(s)
    servoNumber1.write(0); // 0 degrees
    delay(1000); // Wait for 1000 millisecond(s)
}
