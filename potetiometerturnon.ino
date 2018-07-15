int ledPins[]={2,3,4,5,6,7,8,9};
int sensorPin=0;

void setup() 
{
  int index;
  for(index=0;index<=7;index++) 
  {
    pinMode(ledPins[index],OUTPUT);
  }
}

void loop() 
{
  pothelp();
}

void pothelp()
{
  int index;
  int sensorValue;
  int delayTime=100;

  for(index=0;index<=7;index++)
  {
    digitalWrite(ledPins[index],HIGH);
    delay(delayTime);
    digitalWrite(ledPins[index],LOW);
    delay(delayTime);
  }
}
