#include <Wally.h>

Wally robot;

void setup() {
  robot.init();
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  robot.reculer(100);
  robot.avancer(100);
  robot.stop();
}