//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h> 
//Define os pinos para o trigger e echo
#define pino_trigger 12
#define pino_echo 11

int tempo = 500;
int frequencia = 0;

int Pinofalante = 10;
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 void setup()
{
  pinMode(Pinofalante,OUTPUT);
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
} 
void loop()
{
//Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" - Distancia em polegadas: ");
  Serial.println(inMsec);
  if(cmMsec<=5){
    int frequencia3 = 10000;
    tone(Pinofalante,frequencia3,tempo);   
    delay(1); 
  }else if(cmMsec>5 && cmMsec<30 ){
    int frequencia2 = 10000;
    tone(Pinofalante,frequencia2,tempo);
    delay(1000);
  }
  delay(1000);
}
