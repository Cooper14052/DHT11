#include <DHT.h>
DHT dht(8, DHT11);

unsigned long timing1 = 4000;

void setup() {
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  if ((millis() - timing1) > 5000)
  {
    timing1 = millis();
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    Serial.print("Влажность: ");
    Serial.print(h);
    Serial.println("%");
    Serial.print("Температура: ");
    Serial.print(t);
    Serial.println("C");
  }
}
