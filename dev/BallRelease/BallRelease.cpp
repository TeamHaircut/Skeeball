#include "Arduino.h"
#include "BallRelease.h"
#include "Servo.h"


void BallRelease::SetServoPin(int pin0)
{
	_pin0 = pin0;
	myservo.attach(_pin0);
}


void BallRelease::ReleaseBalls()
{
	for (pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
	{                                  // in steps of 1 degree 
		myservo.write(pos);              // tell servo to go to position in variable 'pos' 
		delay(1);                       // waits 15ms for the servo to reach the position 
	}
	delay(5000);
	for (pos = 180; pos >= 1; pos -= 1)     // goes from 180 degrees to 0 degrees 
	{
		myservo.write(pos);              // tell servo to go to position in variable 'pos' 
		delay(5);                       // waits 15ms for the servo to reach the position 
	}
}
