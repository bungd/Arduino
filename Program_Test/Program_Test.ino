#include <SoftwareSerial.h>
#include <Wire.h>

SoftwareSerial mySerial(7, 6); // RX, TX
/*
int waterlv, soil
int minWaterlv = 0;
int maxWaterlv = 255;
int minSoil = 0;
int maxSoil = 255;

String id_User = "1";
id_product = "1";

unsigned long lastMillis = 0;
unsigned long lastMillis1 = 0;
const long interval = 10000; // interval at which to blink (milliseconds)

void setup() {
  Serial.begin(115200);
  mySerial.begin(115200);
  while (!Serial);

  Wire.begin();


void loop() {
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }

  readSensor();
  String nilai = "";
  nilai += id_user;
  nilai += ",";
  nilai += id_product;
  nilai += ",";
  nilai += String(waterlv);
  nilai += ",";
  nilai += String(soil);
  nilai += ",";

  if (millis() - lastMillis > interval)
  {
    lastMillis = millis();
    mySerial.println(nilai);
    Serial.println(Nilai);
  }

}

void readsensor() {
  static unsigned long timepoint = millis();
  if (millis() - timepoint > 1000U) time interval: 1s
  {
    timepoint = millis();
    int value_waterlv = analogRead(A20);
    //int value_soil = analogRead(A1);
    waterlv = map(value_waterlv, minWaterlv, maxWaterlv, 0, 100);

    soil = map(value_soil, minSoil, maxSoil, 0, 100);
  
}
