#include <Servo.h>

Servo servoMain;  // Define our Servo
int servopin = 9, trigpin = 10, echopin = 11, distance = 0;
float duration = 0.0, cm = 0.0;

void setup()
{
  servoMain.attach(servopin);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop()
{
  digitalWrite(trigpin, LOW);
  delay(100); 
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigpin, LOW); 
  duration = pulseIn(echopin, HIGH); 
  cm = (duration / 58.82);
  distance = cm;

  if(distance < 30)
  {
    servoMain.write(180); // Turn Servo back to center position (90 degrees)
    delay(3000); 
  }
  else
  {
    servoMain.write(0);
    delay(100);
  }
}
