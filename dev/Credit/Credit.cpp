#include "Arduino.h"
#include "InputSwitchGroup.h"
#include "SkeeballInputSwitch.h"
#include "Credit.h"

void Credit::SetCreditSwitchPins(int pins[], int pinCount)
{
	_pinCount = pinCount;
	for (int i = 0; i < pinCount; ++i)
	{
		_pins[i] = pins[i];
	}
		coinMechSwitch[0] = SkeeballInputSwitch(_pins[0]);
		startButtonSwitch[0] = SkeeballInputSwitch(_pins[1]);
}

void Credit::SetCreditCondition(int val)
{
	_creditCondition = val;
}

int Credit::GetCredits()
{
	return (CoinMechSwitchGroup.Total(coinMechSwitch, 1) * 1)+(StartButtonSwitchGroup.Total(startButtonSwitch, 1) * _creditCondition);
}

