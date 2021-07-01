
int PIR = 13;
int LED = 12;

int tempo = 10;
int frequencia = 0;
int Pinofalante = 11;

void setup() {
  Serial.begin(9600);
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Pinofalante,OUTPUT);
}

void loop() {
  int acionamento = digitalRead(PIR);
  if(acionamento == HIGH){
    tempo=1000;
    frequencia=1000;
    Serial.println("Ladrão");
    digitalWrite(LED, HIGH);
    tone(Pinofalante,frequencia,tempo);
    
  }else{
    tempo=0;
    frequencia=0;
    Serial.println("Ninguém");
    digitalWrite(LED, LOW);
    tone(Pinofalante,frequencia,tempo);
  }

}
