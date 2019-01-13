#include <Wire.h>
#include <Display.h>

const int pin7 = 0;
const int pin8 = 0;
const int pin9 = 0;
const int pin10 = 0;
const int pin11 = 11;
const int pin12 = 0;
const int pin13 = 0;

//int pinsHP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
int pinsHP[] = {0,0, 0, 0, 0, 0, 0};

int pinsTP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
//int pinsTP[] = {0,0, 0, 0, 0, 0, 0};

//int pinsOP[] = {pin13,pin12, pin11, pin10, pin9, pin8, pin7};
int pinsOP[] = {0,0, 0, 0, 0, 0, 0};

Display display;



void setup() {
  display.SetScoreDisplayPins(pinsHP,pinsTP,pinsOP);
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output
}

void loop() {
}

void receiveEvent(int howMany) {
  while (1 < Wire.available()) { // loop through all but the last
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
  int x = Wire.read();
  Serial.println(x);
  display.DisplayScore(x);
}
