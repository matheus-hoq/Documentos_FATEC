int tempo = 10;
int frequencia = 0;
int Pinofalante = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(Pinofalante,OUTPUT);
  //Pino Buzzer
}

void loop() {
  // put your main code here, to run repeatedly:
  for(frequencia = 150;frequencia<1800;frequencia+=1){
    tone(Pinofalante,frequencia,tempo);   
    delay(1);
  }for(frequencia=1800; frequencia>150;frequencia-=1){
    tone(Pinofalante,frequencia,tempo);
    delay(1);
  }
  
}
