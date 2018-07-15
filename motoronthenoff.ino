const int motorPin = 9;

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  motorOnThenOff();
}

void motorOnThenOff()
{
  int onTime = 3000;  // milliseconds to turn the motor on
  int offTime = 3000; 

  digitalWrite(motorPin, HIGH); // turn the motor on (full speed)
  delay(onTime);                // delay for onTime milliseconds
  digitalWrite(motorPin, LOW);  // turn the motor off
  delay(offTime);               // delay for offTime milliseconds
}


