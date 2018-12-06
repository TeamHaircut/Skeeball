#include "Arduino.h"
#include "SkeeballInputSwitch.h"

SkeeballInputSwitch::SkeeballInputSwitch(int pin)

	{
	pinMode(pin, OUTPUT);
	_pin = pin;
	}

int SkeeballInputSwitch::Get()
{
	return _count;
}

void SkeeballInputSwitch::Increment(int incVal)
{
	int reading = digitalRead(_pin);

	if (reading != _lastButtonState) {
		_lastDebounceTime = millis();
	}

	if ((millis() - _lastDebounceTime) > _debounceDelay) {

		if (reading != _buttonState) {
			_buttonState = reading;

			if (_buttonState == LOW) {
				_count = _count + incVal;
			}
		}
	}

	_lastButtonState = reading;
}
