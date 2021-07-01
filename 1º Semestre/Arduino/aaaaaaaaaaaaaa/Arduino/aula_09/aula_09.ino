void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
 int valor = analogRead(A0);
 Serial.print("Luz");
 Serial.print(valor);
 Serial.print("\n");
 delay(100);
 if (valor<=10){
  digitalWrite(7,HIGH);
  delay(100);
  
  }else if (valor>10){
    digitalWrite(7,LOW);
    delay(100);
    }
 


}
