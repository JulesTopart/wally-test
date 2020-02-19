#include <Arduino.h>
#include <Wally.h>

Wally robot;

void setup() {
  robot.init();
  // put your setup code here, to run once:
}

void loop() {
  robot.isIRDataReceived();
  // put your main code here, to run repeatedly:
}