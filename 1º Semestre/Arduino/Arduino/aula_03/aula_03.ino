void setup() {
  pinMode(13, OUTPUT); //red
  pinMode(12, OUTPUT); //yellow
  pinMode(10, OUTPUT); //green
  pinMode(4, OUTPUT); //red
  pinMode(3, OUTPUT); //yellow
  pinMode(2, OUTPUT); //green
 
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);
  delay(5000);
  
  digitalWrite(10,LOW);
  digitalWrite(12, HIGH);
  delay(2000);
 
  digitalWrite(12,LOW);
  digitalWrite(4,LOW);
  
  digitalWrite(13,HIGH);
  digitalWrite(2, HIGH);
  delay(5000);
  
  digitalWrite(13,LOW);
  digitalWrite(3,HIGH);
  delay(2000);
  
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(5000);
  
  
}
