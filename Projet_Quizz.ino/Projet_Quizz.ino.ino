#include <Arduino.h>
#include "Application.h"

Application A;

void setup() {
  // put your setup code here, to run once:
  A.Init_Application();
}

void loop() {
  // put your main code here, to run repeatedly:
  A.Run_Application();
}
