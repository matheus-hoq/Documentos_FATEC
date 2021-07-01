int botao = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(botao,INPUT);
Serial.begin (9600);
pinMode (6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int result = digitalRead (7);
if(result == HIGH){
//Serial.println("botao pressionado");
digitalWrite(6, HIGH);
}else{
Serial.println("pressione o botao");
digitalWrite(6, LOW);
}
}
