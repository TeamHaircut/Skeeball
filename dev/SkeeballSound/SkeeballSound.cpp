#include "Arduino.h"
#include "SkeeballSound.h"

SkeeballSound::SkeeballSound(int speaker)

	{
	pinMode(speaker, OUTPUT);
	_speaker = speaker;
	}
	
void SkeeballSound::PlaySongPowerUp()
{
  int melody[] =
    {NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_G5};
  int noteDurations[] =
    {8,8,
    16,16,
    8,8,8,2};
  for (int thisNote = 0; thisNote < 8; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end power up tune

void SkeeballSound::PlaySongIdle()// mrs pacman attract song
{
  int melody[] =
    {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_A4, NOTE_G4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_B4,
    NOTE_B4, NOTE_G4,
    NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_F5};
  int noteDurations[] =
    {16,16,16,
    4,4,4,4,
    8,8,8,8,
    4,4,
    8,8,
    8,8,8,8,
    8,8,8,8,
    4,4,
    2};
  for (int thisNote = 0; thisNote < 26; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end play song idle

void SkeeballSound::PlaySongCoinUp()
{
  int melody[] =
    {NOTE_G4, NOTE_E4, NOTE_C4};
  int noteDurations[] =
    {8,16,8};
  for (int thisNote = 0; thisNote < 3; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}// end playsound coin up

void SkeeballSound::PlaySound50()
{
  int melody[] =
    {NOTE_C5, NOTE_F5};
  int noteDurations[] =
    {8,4};
  for (int thisNote = 0; thisNote < 2; thisNote++)
    {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end playsound 50

void SkeeballSound::PlaySound40()
{
  int melody[] =
    {NOTE_F4, NOTE_C5};
  int noteDurations[] =
    {8,4};
  for (int thisNote = 0; thisNote < 2; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end playsound 40

void SkeeballSound::PlaySound30()
{
  int melody[] =
    {NOTE_C4, NOTE_F4};
  int noteDurations[] =
    {8,4};
  for (int thisNote = 0; thisNote < 2; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end playsound 30

void SkeeballSound::PlaySound20()
{
  int melody[] =
    {NOTE_F3, NOTE_C4};
  int noteDurations[] =
    {8,4};
  for (int thisNote = 0; thisNote < 2; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end playsound 20

void SkeeballSound::PlaySound10()
{
  int melody[] =
    {NOTE_C2, NOTE_F3};
  int noteDurations[] =
    {8,4};
  for (int thisNote = 0; thisNote < 2; thisNote++)
   {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end playsound 10

void SkeeballSound::PlaySoundGutter()
{
  int melody[] =
    {NOTE_C2};
  int noteDurations[] =
    {4};
  for (int thisNote = 0; thisNote < 1; thisNote++)
    {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end play sound gutter

void SkeeballSound::PlaySongFG()// mario victory
{
  int melody[] =
    {NOTE_C4, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_E5,  NOTE_G5, NOTE_E5,
    NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_GS4, NOTE_DS5, NOTE_GS5, NOTE_DS5,
    NOTE_DS4,NOTE_DS4, NOTE_FS4, NOTE_AS4, NOTE_DS5, NOTE_FS5, NOTE_AS5, 0,NOTE_AS5, NOTE_AS5, NOTE_DS6};
  int noteDurations[] =
    {8,8,8,8,8,8,4,4,
    8,8,8,8,8,8,4,4,8,8,8,8,8,8,4,
    16,
    8,8,2};
  for (int thisNote = 0; thisNote < 27; thisNote++)
    {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end free game song

void SkeeballSound::PlaySongHS()
{
  int melody[] =
    {NOTE_F5, NOTE_FS5, NOTE_DS5, NOTE_A4, 0, NOTE_GS4, NOTE_E5, NOTE_FS5, NOTE_G5};
  int noteDurations[] =
    {8,8,
    8,8,256, 8, 
    8,8,8};
  for (int thisNote = 0; thisNote < 9; thisNote++)
    {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}// end playsoundHS

void SkeeballSound::PlaySongWN()
{
  int melody[] =
    {NOTE_A4, NOTE_B4, NOTE_B4, NOTE_C5};
  int noteDurations[] =
    {8,8,8,4};
  for (int thisNote = 0; thisNote < 4; thisNote++)
    {int noteDuration = 1000/noteDurations[thisNote];
    tone(_speaker, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(_speaker);}
}//end high Score wn
