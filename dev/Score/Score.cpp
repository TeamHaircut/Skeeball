#include "Arduino.h"
#include "InputSwitchGroup.h"
#include "SkeeballInputSwitch.h"
#include "Score.h"

void Score::SetScoreSwitchPins(int pins[], int pinCount)
{
	_pinCount = pinCount;
	for (int i = 0; i < pinCount; ++i)
	{
		_pins[i] = pins[i];
		scoreSwitches[i] = SkeeballInputSwitch(_pins[i]);
	}
	
}

int Score::GetScore()
{
	return ScoreColumn.Total(scoreSwitches,_pinCount) * 10;
}

