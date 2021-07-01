#include "DHT.h"
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();

}
void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(h) || isnan(t)){
    Serial.println("Falha");
    return;
    }

    Serial.print(h);
    Serial.print(" %\t");
    Serial.println("Temperatura: ");
    Serial.print(t);
    Serial.print(" *C\t");
}
