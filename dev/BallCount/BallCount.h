#ifndef BallCount_h
#define BallCount_h

#include "Arduino.h"
#include "SkeeballInputSwitch.h"
#include "InputSwitchGroup.h"

class BallCount
{
public:
	void SetBallCountSwitchPin(int pin);
	int GetBallCount();

private:
	int _pin;

	SkeeballInputSwitch ballCountSwitches[1] = {
		SkeeballInputSwitch(_pin)
	};

	InputSwitchGroup BallCountGroup;

};
#endif
