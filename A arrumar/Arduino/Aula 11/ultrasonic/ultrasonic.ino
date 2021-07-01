#include <Ultrasonic.h>
#define TRIGGER_PIN 12
#define ECHO_PIN    11
 Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
 int frequencia = 0;
 
 
void setup() {
  Serial.begin(9600);
  pinMode (9, OUTPUT);
  pinMode (13, OUTPUT);

}

void loop() {
 float cmMsec, inMsec;
 long microsec = ultrasonic.timing();
 cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
 inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
 Serial.println("MS: ");
 Serial.println(microsec);
 Serial.println("CM: ");
 Serial.println(cmMsec);
 Serial.println("IN: ");
 Serial.println(inMsec);
 delay(1000);

 

    if (cmMsec<=15){
    digitalWrite(13, HIGH);
    delay(150);
    tone(13,frequencia, cmMsec);
 
  }else if (cmMsec<=30){
    digitalWrite(13, LOW);
    delay(250);
    tone(13,frequencia, cmMsec);
    
  }

  
}
