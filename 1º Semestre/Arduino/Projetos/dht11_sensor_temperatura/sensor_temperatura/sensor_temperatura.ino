#include <Adafruit_Sensor.h>
#include "DHT.h"
#define DHTPIN 13
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println("dhtXX TEST !");
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity(); 
  float t = dht.readTemperature();
  if(isnan(h) || isnan(t)){
    Serial.println("Falha ao ler o sensor DHT !");
    return;
  }
   Serial.println("Humidade: ");
  Serial.println(h);
  Serial.println(" %/t");
  Serial.println("Temperatura: ");
  Serial.println(t);
  Serial.println(" *C/t");
}
