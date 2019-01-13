#include "Arduino.h"
#include "MarqueeLight.h"
#include "Digit.h"
#include "Display.h"

void Display::SetScoreDisplayPins(int pinSetHP[], int pinSetTP[], int pinSetOP[])
{
	_pinCount = 7;
	for (int i = 0; i < _pinCount; ++i)
	{
		_pinSetHP[i] = pinSetHP[i];
		_pinSetTP[i] = pinSetTP[i];
		_pinSetOP[i] = pinSetOP[i];
	}
	scoreDigit[0] = Digit(_pinSetHP[0], _pinSetHP[1], _pinSetHP[2], _pinSetHP[3], _pinSetHP[4], _pinSetHP[5], _pinSetHP[6]);
	scoreDigit[1] = Digit(_pinSetTP[0], _pinSetTP[1], _pinSetTP[2], _pinSetTP[3], _pinSetTP[4], _pinSetTP[5], _pinSetTP[6]);
	scoreDigit[2] = Digit(_pinSetOP[0], _pinSetOP[1], _pinSetOP[2], _pinSetOP[3], _pinSetOP[4], _pinSetOP[5], _pinSetOP[6]);
}

//

void Display::DisplayScore(int score)
{
	int HT = score / 10;
	int HP = HT / 10;
	int TP = HT - (HP * 10);
	int OP = 0;

	scoreDigit[0].Show(HP);
	scoreDigit[1].Show(TP);
	scoreDigit[2].Show(OP);
}

