#ifndef SkeeballInputSwitch_h
#define SkeeballInputSwitch_h

#include "Arduino.h"
#include <QueueArray.h>

class SkeeballInputSwitch
{
public:
	SkeeballInputSwitch(int pin);
	void Increment();
	int Get();

private:
	int _pin;

	int _buttonState;
	int _lastButtonState = LOW;
	unsigned long _lastDebounceTime = 0;
	unsigned long _debounceDelay = 5;
	int _count;
	QueueArray <int> _queue;
};
#endif
