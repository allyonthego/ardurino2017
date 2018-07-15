const int sensorPin = 0;

const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

const int thresh1 = 341;
const int thresh2 = 679;
const int thresh3 = 1022; 

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);

  if (sensorValue > thresh1) {            //FOLLOWING LINES: turn leds on in sequential order as potentiometer is turned
    digitalWrite(ledPin1,HIGH);
  }
  else {
    digitalWrite(ledPin1,LOW);
  }
  if (sensorValue > thresh2) {
    digitalWrite(ledPin2,HIGH);
  }
  else {
    digitalWrite(ledPin2,LOW);
  }
  if (sensorValue > thresh3) {
    digitalWrite(ledPin3,HIGH);
  }
  else {
    digitalWrite(ledPin3,LOW);
  } 
}
