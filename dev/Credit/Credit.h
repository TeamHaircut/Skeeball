#ifndef Credit_h
#define Credit_h

#include "Arduino.h"
#include "SkeeballInputSwitch.h"
#include "InputSwitchGroup.h"

class Credit
{
public:
	void SetCreditSwitchPins(int pins[], int pinCount);
	int GetCredits();
	void SetCreditCondition(int val);

private:
	int _pinCount = 0;
	int _pins[2] = { 0,0 };
	int _creditCondition = 0;

	SkeeballInputSwitch coinMechSwitch[1] = {
		SkeeballInputSwitch(_pins[0])
	};

	SkeeballInputSwitch startButtonSwitch[1] = {
		SkeeballInputSwitch(_pins[1])
	};

	InputSwitchGroup CoinMechSwitchGroup;
	InputSwitchGroup StartButtonSwitchGroup;

};
#endif
