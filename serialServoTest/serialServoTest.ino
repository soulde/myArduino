#include<Servo.h>

Servo myServo;
int pos=0;
int i=0;

void setup() {
    Serial.begin(9600);
    myServo.attach(9);
    myServo.write(90);
    delay(100);
}

void loop() {
  // put your main code here, to run repeatedl

  for(;Serial.available();i++)
  {
    pos=Serial.read();
    myServo.write(pos);
    delay(pos*40);
    Serial.write(i);
    Serial.flush(); 
    for(;Serial.reas()!=0;);
    delay(100);
  }
}
