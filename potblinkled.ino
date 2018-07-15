int ledPins[] = {2,3,4,5,6,7,8,9};
int sensorPin=0;

void setup()
{
  int index;
  
  for(index = 0; index <= 7; index++)
  {
    pinMode(ledPins[index],OUTPUT);
  }
}


void loop()
{
  allTogether();
}

void allTogether()
{
  int index;
  int sensorValue = analogRead(sensorPin);            
  int delayTime = sensorValue; 
  
  for(index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], HIGH);               
  }                                  

  delay(delayTime);
  
  for(index = 0; index <= 7; index++)
  {
    digitalWrite(ledPins[index], LOW);
  }   
  
  delay(delayTime);            
}


