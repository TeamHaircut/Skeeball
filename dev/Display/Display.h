#ifndef Display_h
#define Display_h

#include "Arduino.h"
#include "MarqueeLight.h"
#include "Digit.h"

class Display
{
public:
	void SetScoreDisplayPins(int pinSetHP[], int pinSetTP[], int pinSetOP[]);
	void DisplayScore(int score);

private:
	int _pinCount = 0;
	int _pinSetHP[7] = { 0,0,0,0,0,0,0 };
	int _pinSetTP[7] = { 0,0,0,0,0,0,0 };
	int _pinSetOP[7] = { 0,0,0,0,0,0,0 };

	Digit scoreDigit[3] = {
		Digit(_pinSetHP[0], _pinSetHP[1], _pinSetHP[2], _pinSetHP[3], _pinSetHP[4], _pinSetHP[5], _pinSetHP[6]),
		Digit(_pinSetTP[0], _pinSetTP[1], _pinSetTP[2], _pinSetTP[3], _pinSetTP[4], _pinSetTP[5], _pinSetTP[6]),
		Digit(_pinSetOP[0], _pinSetOP[1], _pinSetOP[2], _pinSetOP[3], _pinSetOP[4], _pinSetOP[5], _pinSetOP[6])
	};

	void DisplayDigit(int digit);

};
#endif
