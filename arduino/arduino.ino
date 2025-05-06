#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin();
  pinMode(4, INPUT);
}

void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("{ \"umidade\":");
  Serial.print(h);
  Serial.print(", \"temperatura\":");
  Serial.print(t);
  Serial.println("}");
  delay(2000);
}
