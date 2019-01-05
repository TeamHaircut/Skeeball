#include "Arduino.h"
#include "MarqueeLight.h"

MarqueeLight::MarqueeLight(int pin)

{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void MarqueeLight::On()
{
	digitalWrite(_pin, HIGH);
}

void MarqueeLight::Off()
{
	digitalWrite(_pin, LOW);
}
