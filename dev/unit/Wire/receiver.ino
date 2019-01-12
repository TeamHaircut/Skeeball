#include <Wire.h>
#include <Display.h>

const int pin11 = 11;
const int pin12 = 12;
const int pin13 = 0;

int pins[] = {pin11,pin12,pin13};

Display display;

void setup() {
  //display.SetPins(pin11, pin12, pin13);
  display.SetPins(pins,3);
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
