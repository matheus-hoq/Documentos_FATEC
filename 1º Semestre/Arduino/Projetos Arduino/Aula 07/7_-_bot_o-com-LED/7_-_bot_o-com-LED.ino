int botao = 7, led = 6;
bool ligado=true;


void setup() {
  // put your setup code here, to run once:
pinMode(botao,INPUT);
pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int estado = digitalRead (botao);
if(estado == HIGH){
  if(ligado==true){
    digitalWrite(led, HIGH);
    ligado=false;
    delay(200);
    
}else{
  digitalWrite(led,LOW);
  ligado=true;
  delay(200);
  }
 
}
}
