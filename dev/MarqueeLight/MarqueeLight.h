#ifndef MarqueeLight_h
#define MarqueeLight_h

#include "Arduino.h"

class MarqueeLight
{
public:
	MarqueeLight(int pin);
	void On();
	void Off();

private:
	int _pin;

};
#endif
