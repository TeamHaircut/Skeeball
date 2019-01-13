#ifndef BallRelease_h
#define BallRelease_h

#include "Arduino.h"
#include "Servo.h"

class BallRelease
{
public:
	void SetServoPin(int pin0);
	void ReleaseBalls();

private:
	int _pin0;
	Servo myservo;
	int pos = 0;
};
#endif
