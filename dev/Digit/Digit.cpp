#include "Arduino.h"
#include "Digit.h"

Digit::Digit(int pin0,int pin1, int pin2, int pin3, int pin4, int pin5, int pin6)
{
	_pin0 = pin0;
	_pin1 = pin1;
	_pin2 = pin2;
	_pin3 = pin3;
	_pin4 = pin4;
	_pin5 = pin5;
	_pin6 = pin6;

	marqueeLight[0] = MarqueeLight(_pin0);
	marqueeLight[1] = MarqueeLight(_pin1);
	marqueeLight[2] = MarqueeLight(_pin2);
	marqueeLight[3] = MarqueeLight(_pin3);
	marqueeLight[4] = MarqueeLight(_pin4);
	marqueeLight[5] = MarqueeLight(_pin5);
	marqueeLight[6] = MarqueeLight(_pin6);
}

void Digit::Show(int digit)
{
	if (digit == 0) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].On();
		marqueeLight[4].On();
		marqueeLight[5].On();
		marqueeLight[6].Off();
	}
	if (digit == 1) {
		marqueeLight[0].Off();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].Off();
		marqueeLight[4].Off();
		marqueeLight[5].Off();
		marqueeLight[6].Off();
	}
	if (digit == 2) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].Off();
		marqueeLight[3].On();
		marqueeLight[4].On();
		marqueeLight[5].Off();
		marqueeLight[6].On();
	}
	if (digit == 3) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].On();
		marqueeLight[4].Off();
		marqueeLight[5].Off();
		marqueeLight[6].On();
	}
	if (digit == 4) {
		marqueeLight[0].Off();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].Off();
		marqueeLight[4].Off();
		marqueeLight[5].On();
		marqueeLight[6].On();
	}
	if (digit == 5) {
		marqueeLight[0].On();
		marqueeLight[1].Off();
		marqueeLight[2].On();
		marqueeLight[3].On();
		marqueeLight[4].Off();
		marqueeLight[5].On();
		marqueeLight[6].On();
	}
	if (digit == 6) {
		marqueeLight[0].Off();
		marqueeLight[1].Off();
		marqueeLight[2].On();
		marqueeLight[3].On();
		marqueeLight[4].On();
		marqueeLight[5].On();
		marqueeLight[6].On();
	}
	if (digit == 7) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].Off();
		marqueeLight[4].Off();
		marqueeLight[5].Off();
		marqueeLight[6].Off();
	}
	if (digit == 8) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].On();
		marqueeLight[4].On();
		marqueeLight[5].On();
		marqueeLight[6].On();
	}
	if (digit == 9) {
		marqueeLight[0].On();
		marqueeLight[1].On();
		marqueeLight[2].On();
		marqueeLight[3].Off();
		marqueeLight[4].Off();
		marqueeLight[5].On();
		marqueeLight[6].On();
	}
}
