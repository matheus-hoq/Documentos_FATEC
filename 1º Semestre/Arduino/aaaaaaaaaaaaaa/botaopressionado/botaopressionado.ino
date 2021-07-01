int botao = 2;
int leituraBotao=0;

void setup() {
  pinMode(botao, INPUT);
  Serial.begin(10000);
  digitalWrite(botao, 1);
}

void loop() {
  
  leituraBotao = digitalRead(botao);

  if (leituraBotao == 0){
    
    Serial.println("ativado");
    
  }else{
    
    Serial.println("desativado");
    
  }
}