int buttonPin = A0;
int buttonState;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(led2, OUTPUT);
}

void loop() 
{
  
  buttonState = digitalRead(buttonPin);
 
  if (buttonState == LOW) 
  {
   Serial.println("Pressionado"); 
  } 
  else 
  {
    Serial.println("Não Pressionado"); 
  }
}
