#include "Arduino.h"
#include "MarqueeLight.h"
#include "MarqueeStatus.h"


void MarqueeStatus::SetPin(int pin0)
{
	_pin0 = pin0;
	marqueeLight[0] = MarqueeLight(_pin0);
}

void MarqueeStatus::SetPins(int pin0, int pin1)
{
	_pin0 = pin0;
	_pin1 = pin1;
	marqueeLight[0] = MarqueeLight(_pin0);
	marqueeLight[1] = MarqueeLight(_pin1);
}


void MarqueeStatus::SetStatus(bool flag)
{
	_status = flag;
	if (_status == true)
	{
		marqueeLight[0].Off(); 
		marqueeLight[1].Off();
	}
	else
	{
		marqueeLight[0].On(); 
		marqueeLight[1].On();
	}
}

bool MarqueeStatus::GetStatus()
{
	return _status;
}
