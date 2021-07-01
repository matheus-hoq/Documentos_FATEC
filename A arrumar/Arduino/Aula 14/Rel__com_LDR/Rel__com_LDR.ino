int LED = 4; 
int numlum = 0;                      
 
void setup()
{
     pinMode(LED,OUTPUT); 
     Serial.begin(9600);       
}
 
void loop()

{
  numlum = analogRead(A0);       
  Serial.println(numlum); 
  if(numlum<800)
  {      

            
    digitalWrite(LED,LOW);
    delay(1000);
  }
  
  else
  {                    
    digitalWrite(LED,HIGH);
    delay(1000);
  }
  
  delay(10);                   
}
