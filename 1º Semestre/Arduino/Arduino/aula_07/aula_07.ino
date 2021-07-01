int porta=10;
int f=0;
int t=10;


void setup() {
  pinMode (porta, OUTPUT);

}

void loop() {
  for (f=150; f<1800; f++){
    tone(porta,f,t);
    delay(1);
  }

  for (f=1800; f>150; f--){
    tone(porta,f,t);
    delay(1);

}

}
