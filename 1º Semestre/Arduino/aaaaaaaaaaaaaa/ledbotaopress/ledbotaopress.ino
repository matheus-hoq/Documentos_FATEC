int botao = 7, led = 3;
bool ligado = true;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int estado = digitalRead(botao);

  if (estado == HIGH){
    if (ligado == true){
      digitalWrite(led, LOW);
      ligado = false;
      delay(500);
    }else{
      digitalWrite(led, HIGH);
      ligado = true;
      delay(500);
    }
  }
}
