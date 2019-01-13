#include <Display.h>
#include <Score.h>

int pin2[] = {2,0,0,0,0};
const int pin7 = 7;
const int pin8 = 8;
const int pin9 = 9;
const int pin10 = 10;
const int pin11 = 11;
const int pin12 = 12;
const int pin13 = 13;

//int pinsHP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
int pinsHP[] = {0,0, 0, 0, 0, 0, 0};

int pinsTP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
//int pinsTP[] = {0,0, 0, 0, 0, 0, 0};

//int pinsOP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
int pinsOP[] = {0,0, 0, 0, 0, 0, 0};

Score score;
Display display;

void setup() {
  score.SetScoreSwitchPins(pin2,1);
  display.SetScoreDisplayPins(pinsHP,pinsTP,pinsOP);
  Serial.begin(9600);
}

void loop() {
  Serial.println(score.GetScore());
  display.DisplayScore(score.GetScore());
}
