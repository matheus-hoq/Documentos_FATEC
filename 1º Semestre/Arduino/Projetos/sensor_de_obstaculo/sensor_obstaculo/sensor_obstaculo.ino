int Sensor = 13;

int tempo = 1000;
int frequencia = 1000;
int Pinofalante = 12;

void setup() {
  Serial.begin(9600);
  pinMode(Sensor,INPUT);
  pinMode(Pinofalante,OUTPUT);
}

void loop() {
  int acionamento = digitalRead(Sensor);

  if(acionamento==LOW){
    Serial.println("Obstaculo");
    tone(Pinofalante,frequencia,tempo);   
  }else{
    Serial.println("Passagem livre");
    
  }

}
