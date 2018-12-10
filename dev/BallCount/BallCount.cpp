#include "Arduino.h"
#include "InputSwitchGroup.h"
#include "SkeeballInputSwitch.h"
#include "BallCount.h"

void BallCount::SetBallCountSwitchPin(int pin)
{
	_pin = pin;
	ballCountSwitches[0] = SkeeballInputSwitch(_pin);
}

int BallCount::GetBallCount()
{
	return BallCountGroup.Total(ballCountSwitches, 1) * 1;
}

