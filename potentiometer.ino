int sensorPin=0;
int ledPin=13;

void setup() 
{
  pinMode(13,OUTPUT);
}

void loop() 
{
  int sensorValue;
  
  sensorValue=analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);

  digitalWrite(ledPin, LOW);
  delay(sensorValue);

}
