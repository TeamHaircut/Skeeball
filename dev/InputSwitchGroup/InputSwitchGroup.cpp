#include "Arduino.h"
#include "InputSwitchGroup.h"
#include "SkeeballInputSwitch.h"

int InputSwitchGroup::Total(SkeeballInputSwitch a[], int size)
{
	
	for (int i = 0; i < size; ++i)
	{
		a[i].Increment();

		_count = _count + a[i].Get();
		
	}
	return _count;
}

