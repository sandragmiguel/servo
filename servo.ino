
#include "Servo.h"
Servo servo1;
int potPin = A0;
int servoPin = 2;

void setup() {
  servo1.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int angle = analogRead(potPin);
  angle = map(angle,0,1023,0,180);
  Serial.println(angle);
  servo1.write(angle);
}
