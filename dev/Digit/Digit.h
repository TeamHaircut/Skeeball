#ifndef Digit_h
#define Digit_h

#include "Arduino.h"
#include "MarqueeLight.h"

class Digit
{
public:
	Digit(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5, int pin6);
	void Show(int digit);

private:
	int _pin0;
	int _pin1;
	int _pin2;
	int _pin3;
	int _pin4;
	int _pin5;
	int _pin6;

	MarqueeLight marqueeLight[7] = {
		MarqueeLight(_pin0),
		MarqueeLight(_pin1),
		MarqueeLight(_pin2),
		MarqueeLight(_pin3),
		MarqueeLight(_pin4),
		MarqueeLight(_pin5),
		MarqueeLight(_pin6)
	};

};
#endif
