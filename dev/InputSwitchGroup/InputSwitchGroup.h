#ifndef InputSwitchGroup_h
#define InputSwitchGroup_h

#include "Arduino.h"
#include "SkeeballInputSwitch.h"

class InputSwitchGroup
{
public:
	int Total(SkeeballInputSwitch a[], int size);

private:
	int _count = 0;
};
#endif
