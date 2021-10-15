//https://www.youtube.com/c/VTMVlogVoThongMinh
#include <Servo.h>
Servo myservo;
int sensor = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(A0);
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(sensor) == 1)
  {
    myservo.write(0);
    Serial.println("Close");
  }
  while (digitalRead(sensor) == 0)
  {
    myservo.write(180);
    Serial.println("Open");
  }
}
