#include <Servo.h>

Servo servo1;
int servopin = 7, trigPin = 9, echoPin = 8;
long distance = 0, duration = 0;
 
void setup() 
{
 servo1.attach(servopin); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop()
{
  ultra();
  servo1.write(0);
  if(distance <= 10)
  {
    servo1.write(90);
  }
}
 
void ultra()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * (0.034 / 2);
}
