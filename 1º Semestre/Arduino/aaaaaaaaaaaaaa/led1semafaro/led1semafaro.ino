void setup() {

pinMode(2,OUTPUT);//vermelho
pinMode(3,OUTPUT);//amarelo
pinMode(4,OUTPUT);//verde

}

void loop() {

digitalWrite(2, HIGH);
delay(5000);
digitalWrite(2, LOW);
digitalWrite(4, HIGH);
delay(5000);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
delay(2000);
digitalWrite(3, LOW);
}