#include<SkeeballSound.h>

const int speakerPin = 13;

void setup() {
  SkeeballSound speaker(speakerPin);
  speaker.PlaySongPowerUp();
  speaker.PlaySongIdle();
  speaker.PlaySongCoinUp();
  speaker.PlaySongFG();
  speaker.PlaySongHS();
  speaker.PlaySongWN();
  speaker.PlaySound50();
  speaker.PlaySound40();
  speaker.PlaySound30();
  speaker.PlaySound20();
  speaker.PlaySound10();
  speaker.PlaySoundGutter();
}

void loop() {

}
