#include <BallRelease.h>

BallRelease ballRelease;
const int pin9 = 9;

void setup() {
  ballRelease.SetServoPin(pin9);
}

void loop() {
  ballRelease.ReleaseBalls();
}
