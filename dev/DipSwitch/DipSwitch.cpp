#include "Arduino.h"
#include "DipSwitch.h"

void DipSwitch::SetPin(int pin)
{
	pinMode(pin, INPUT);
	_pin = pin;
	
}

bool DipSwitch::IsEnabled()
{
	return digitalRead(_pin);
}


