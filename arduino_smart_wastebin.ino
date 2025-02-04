#include <servo.h>

Servo servoMain;

int trigpin = 8;

int echopin = 7;

int distance;

float cm;

void setup() {
  // put your setup code here, to run once:
  servoMain.attach(9);

  pinMode(trigpin, OUTPUT);

  pinMode(echopin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);
  cm = (duration/58.82);
  distance = cm;

  if(distance<30)
  {

servoMain.Write(180);

delay(3000);
  }

  else {

delay(50);

  }


}
