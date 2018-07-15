int led = 9;           
int brightness = 255;    
int fadeAmount = 5;   


void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  analogWrite(led, brightness);

  brightness = brightness - fadeAmount;
  delay(30);

  if (brightness <= 0 || brightness >= 255) 
  {
    delay(300);
    brightness=255;
    delay(300);
  }

}

