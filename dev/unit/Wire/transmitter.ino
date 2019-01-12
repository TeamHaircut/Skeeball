#include <Wire.h>
#include <Score.h>
#include <Display.h>

const int pin11 = 0;
const int pin12 = 0;
const int pin13 = 13;

int pins[] = {pin11,pin12,pin13};

Display display;

const int scoreSwitch10 = 2;
Score score;
int scorePins[] = {scoreSwitch10};
int scorePinCount = 1;

void setup() {
  //display.SetPins(pin11, pin12, pin13);
  display.SetPins(pins,3);
  Wire.begin(); // join i2c bus (address optional for master)
  score.SetScoreSwitchPins(scorePins, scorePinCount);
}

void loop() {
  Wire.beginTransmission(8); // transmit to device #8
  Wire.write("score is ");
  Wire.write(score.GetScore());
  Wire.endTransmission();    // stop transmitting
  display.DisplayScore(score.GetScore());
}
