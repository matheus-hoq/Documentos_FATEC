const int pinLED = 13;
const int pinLDR = A0;

void setup()

{
  Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop()
{
  int ldr = analogRead(pinLDR);
  if(ldr >301)
  {
    digitalWrite(pinLED, HIGH);
  }
  else
  {
    digitalWrite(pinLED, LOW);
  }
}
