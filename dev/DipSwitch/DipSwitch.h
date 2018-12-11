#ifndef DipSwitch_h
#define DipSwitch_h

#include "Arduino.h"

class DipSwitch
{
public:
	void SetPin(int pin);
	bool IsEnabled();

private:
	int _pin;

};
#endif
