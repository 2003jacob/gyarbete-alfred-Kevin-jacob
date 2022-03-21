#include <LowPower.h>

#define PUMP          8
#define WATERING_TIME 40L  // secs, do not remove the L suffix! See note below.

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  pinMode(PUMP, OUTPUT);
  digitalWrite(PUMP, LOW);
}

void loop() {

  delay(1000);

  digitalWrite(PUMP, HIGH);
  delay(WATERING_TIME * 1000);
  digitalWrite(PUMP, LOW);
}
