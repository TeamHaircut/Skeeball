#include <Score.h>
#include <BallCount.h>
#include <Credit.h>

Score score;
int scorePins[] = {2,0,0,0,0};
int scorePinCount = 1;//5

BallCount ballCount;
int ballCountPin = 0;//some digital pin

Credit credit;
int creditMechPins[] = {3,4};
int creditMechPinCount = 2;

void setup() {
  Serial.begin(9600);
  score.SetScoreSwitchPins(scorePins, scorePinCount);
  ballCount.SetBallCountSwitchPin(ballCountPin);

  credit.SetCreditCondition(4);
  credit.SetCreditSwitchPins(creditMechPins, creditMechPinCount);

}

void loop() {
  Serial.println(score.GetScore());
  Serial.println(ballCount.GetBallCount());
  Serial.println(credit.GetCredits());

}
