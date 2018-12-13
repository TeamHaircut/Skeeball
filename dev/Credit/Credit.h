#ifndef Credit_h
#define Credit_h

#include "Arduino.h"
#include "SkeeballInputSwitch.h"
#include "InputSwitchGroup.h"
#include "DipSwitch.h"

class Credit
{
public:
	void SetCreditSwitchPins(int pins[], int pinCount);
	void SetCreditDipSwitchPins(int pin0, int pin1);
	int GetCredits();
	int GetCreditCondition();

private:
	int _pinCount = 0;
	int _pins[2] = { 0,0 };
	int _creditCondition = 0;

	DipSwitch creditDip0;
	DipSwitch creditDip1;

	SkeeballInputSwitch coinMechSwitch[1] = {
		SkeeballInputSwitch(_pins[0])
	};

	SkeeballInputSwitch startButtonSwitch[1] = {
		SkeeballInputSwitch(_pins[1])
	};

	InputSwitchGroup CoinMechSwitchGroup;
	InputSwitchGroup StartButtonSwitchGroup;

	void SetCreditCondition(int val);

};
#endif
