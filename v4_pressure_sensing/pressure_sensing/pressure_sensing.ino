#include <HX710B.h>

const int PUMP_PIN = A1;
const int HX710B_OUT_PIN = A2;
const int HX710B_SCK_PIN = A3;

void setup() {
  pinMode(HX710B_SCK_PIN, INPUT);

  Serial.begin(9600);
  Serial.println("HX7108 Pressure Sensor readings:");
}

void loop() {
  analogWrite(PUMP_PIN, 255);

  float sensorOUTPinReading = analogRead(HX710B_OUT_PIN);
  float sensorSCKPinReading = digitalRead(HX710B_SCK_PIN);
  // float pressure = (analogRead(pressureSensorPin) * (5.0/1023) / 0.02) + 10;

  Serial.println(sensorOUTPinReading);
  Serial.println(sensorSCKPinReading);

  delay(1000);
}