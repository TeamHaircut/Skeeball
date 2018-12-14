#include <Credit.h>

Credit credit;

void setup() {
  Serial.begin(9600);
  credit.SetCreditDipSwitchPins(3,4);
}

void loop() {
  Serial.println(credit.GetCreditCondition());

}
