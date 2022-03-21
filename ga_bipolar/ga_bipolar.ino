#include <Stepper.h>

#define BUTTON_PIN_1 6

// A4988

const int dirPin = 5; //direction
const int stepPin = 2; //step

const int STEPS_PER_REV = 200;

Stepper stepper(STEPS_PER_REV, 8, 9, 10, 11);

int rpm = 30;

void setup()

{

  pinMode(BUTTON_PIN_1,INPUT);

  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

}

void loop()

{

  digitalWrite(dirPin, HIGH);

  for(int x = 0; x < (STEPS_PER_REV); x++) {

    digitalWrite(stepPin, HIGH);
    delay(2000);
    digitalWrite(stepPin, LOW);
    delay(2000);
    
  }

  delay(5000);

  digitalWrite(dirPin, LOW);

  for(int x = 0; x < (STEPS_PER_REV); x++) {

    digitalWrite(stepPin, HIGH);
    delay(2000);
    digitalWrite(stepPin, LOW);
    delay(2000);
    
  }

}
