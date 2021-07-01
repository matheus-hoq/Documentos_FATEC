// Projeto 10 - Sensor de luz ambiente
//GoldenShower
 
int pinoLed = 5; 
int valorLuz = 0;                      
 
void setup()
{
     pinMode(pinoLed,OUTPUT); 
     Serial.begin(9600);       
}
 
void loop()
{
  valorLuz = analogRead(A0);       
  Serial.println(valorLuz); 
  if(valorLuz<800)
  {                
    digitalWrite(pinoLed,LOW);
    delay(1000);
  }
  else
  {                    
    digitalWrite(pinoLed,HIGH);
    delay(1000);
  }
  delay(10);                   
}
