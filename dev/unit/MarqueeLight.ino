#include<MarqueeLight.h>

const int ledPin = 13;
MarqueeLight marqueeLight(ledPin);


void setup() {
  Serial.begin(9600);
}

void loop() {
  marqueeLight.On();
  delay(1000);
  marqueeLight.Off();
  delay(1000);

}

