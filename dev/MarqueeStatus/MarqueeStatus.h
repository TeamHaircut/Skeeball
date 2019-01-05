#ifndef MarqueeStatus_h
#define MarqueeStatus_h

#include "Arduino.h"
#include "MarqueeLight.h"

class MarqueeStatus
{
public:
	void SetPin(int pin0);
	void SetPins(int pin0, int pin1);
	void SetStatus(bool flag);
	bool GetStatus();

private:
	int _pin0;
	int _pin1;
	bool _status;

	MarqueeLight marqueeLight[2] = {
		MarqueeLight(_pin0),
		MarqueeLight(_pin1)
	};

};
#endif
