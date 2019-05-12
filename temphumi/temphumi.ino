#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
const int TEMPER_HUM_PIN = A0;
DHT dht =DHT(A0, 11);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(115200UL);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("온도 = ");
  delay(100UL);
  Serial.print(dht.readTemperature());
  delay(1000UL);

  Serial.print("습도 =");
  delay(100UL);
  Serial.println(dht.readHumidity());
  delay(1000UL);

}
