const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int ledPin4 = 10;

int position = 0;
#include <Servo.h>

Servo servo1;

void setup()
{
  servo1.attach(9);
}

void loop()
{
  int delayTime = 1000;
    servo1.write(position);
    
    if (position=0)
    {
      digitalWrite(ledPin1,HIGH);
    }
    else
    {
      digitalWrite(ledPin1, LOW);
    }
    
    if (position=45)
    {
      digitalWrite(ledPin1,HIGH);
      digitalWrite(ledPin2,HIGH);
    }
    else
    {
      digitalWrite(ledPin2, LOW);
    }
    
    if (position=90)
    {
      digitalWrite(ledPin1,HIGH);
      digitalWrite(ledPin2,HIGH);
      digitalWrite(ledPin3,HIGH);
    }
    else
    {
      digitalWrite(ledPin3, LOW);
    }
    
    if (position=135)
    {
      digitalWrite(ledPin1,HIGH);
      digitalWrite(ledPin2,HIGH);
      digitalWrite(ledPin3,HIGH);
      digitalWrite(ledPin4,HIGH);
    }
    else
    {
      digitalWrite(ledPin4, LOW);
    }

    delay(delayTime);
    position=position+45;
    delay(delayTime);
    if (position=225)
    {
      position=0;
    }
  }

