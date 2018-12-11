#include <DipSwitch.h>

DipSwitch idleMusicDip;
DipSwitch startButtonDip;

void setup() {
  Serial.begin(9600);
  idleMusicDip.SetPin(3);
  startButtonDip.SetPin(4);
}

void loop() {
Serial.println(idleMusicDip.IsEnabled());
Serial.println(startButtonDip.IsEnabled());

}
