#include "Arduino.h"
#include "SkeeballInputSwitch.h"
#include <QueueArray.h>

SkeeballInputSwitch::SkeeballInputSwitch(int pin)

	{
	pinMode(pin, OUTPUT);
	_pin = pin;
	}

int SkeeballInputSwitch::Get()
{
	int val = 0;
	if (!_queue.isEmpty())
	{
		val = _queue.pop();
	}
	else
		val = 0;
	return val;
}


void SkeeballInputSwitch::Increment()
{
	int reading = digitalRead(_pin);

	if (reading != _lastButtonState) {
		_lastDebounceTime = millis();
	}

	if ((millis() - _lastDebounceTime) > _debounceDelay) {

		if (reading != _buttonState) {
			_buttonState = reading;

			if (_buttonState == LOW) {
				_queue.push(1);
			}
		}
	}

	_lastButtonState = reading;
}
