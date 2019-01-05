#include<MarqueeLight.h>
#include<MarqueeStatus.h>

int led0 = 13;
int led1 = 10;

int ledA = 11;
int ledB = 12;

MarqueeStatus gameover;
MarqueeStatus freegame;
MarqueeStatus winner;

void setup() {
  Serial.begin(9600);
  gameover.SetPin(led0);
  freegame.SetPin(led1);
  winner.SetPins(ledA, ledB);

}

void loop() {
  gameover.SetStatus(true);
  Serial.println(gameover.GetStatus());
  delay(1000);
  gameover.SetStatus(false);
  Serial.println(gameover.GetStatus());
  delay(1000);
  
  freegame.SetStatus(true);
  Serial.println(freegame.GetStatus());
  delay(1000);
  freegame.SetStatus(false);
  Serial.println(freegame.GetStatus());
  delay(1000);

  winner.SetStatus(true);
  Serial.println(winner.GetStatus());
  delay(1000);
  winner.SetStatus(false);
  Serial.println(winner.GetStatus());
  delay(1000);
  

}
