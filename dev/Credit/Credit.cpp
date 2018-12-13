#include "Arduino.h"
#include "InputSwitchGroup.h"
#include "SkeeballInputSwitch.h"
#include "DipSwitch.h"
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

void Credit::SetCreditDipSwitchPins(int pin0, int pin1)
{
	creditDip0.SetPin(pin0);
	creditDip1.SetPin(pin1);
}

int Credit::GetCreditCondition()
{
	if (creditDip0.IsEnabled() && creditDip1.IsEnabled())
	{
		SetCreditCondition(4);
	}
	if (!creditDip0.IsEnabled() && creditDip1.IsEnabled())
	{
		SetCreditCondition(3);
	}
	if (creditDip0.IsEnabled() && !creditDip1.IsEnabled())
	{
		SetCreditCondition(2);
	}
	if (!creditDip0.IsEnabled() && !creditDip1.IsEnabled())
	{
		SetCreditCondition(1);
	}
	return _creditCondition;
}

void Credit::SetCreditCondition(int val)
{
	_creditCondition = val;
}

int Credit::GetCredits()
{
	return (CoinMechSwitchGroup.Total(coinMechSwitch, 1) * 1)+(StartButtonSwitchGroup.Total(startButtonSwitch, 1) * GetCreditCondition());
}

