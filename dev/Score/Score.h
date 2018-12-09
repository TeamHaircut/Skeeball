#ifndef Score_h
#define Score_h

#include "Arduino.h"
#include "SkeeballInputSwitch.h"
#include "InputSwitchGroup.h"

class Score
{
public:
	void SetScoreSwitchPins(int pins[], int pinCount);
	int GetScore();

private:
	int _pinCount = 0;
	int _pins[5] = { 0,0,0,0,0 };

	SkeeballInputSwitch scoreSwitches[5] = {
		SkeeballInputSwitch(_pins[0]),
		SkeeballInputSwitch(_pins[1]),
		SkeeballInputSwitch(_pins[2]),
		SkeeballInputSwitch(_pins[3]),
		SkeeballInputSwitch(_pins[4])
	};

	InputSwitchGroup ScoreColumn;

};
#endif
