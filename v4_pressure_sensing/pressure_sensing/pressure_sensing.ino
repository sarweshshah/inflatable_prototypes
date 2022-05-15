#include "HX710B.h"

const int PUMP_PIN = A1;
const int DOUT_PIN = A3;
const int SCLK_PIN = A2;

HX710B pressure_sensor;

void setup() {
  Serial.begin(57600);
  pressure_sensor.begin(DOUT_PIN, SCLK_PIN);
  pressure_sensor.power_up();
  pressure_sensor.wait_ready(2000);
}

void loop() {
//    analogWrite(PUMP_PIN, 255);

  if (pressure_sensor.is_ready()) {
    Serial.print(pressure_sensor.pascal());
    Serial.print(" Pa, ");

    Serial.print(pressure_sensor.atm());
    Serial.print(" atm, ");

    Serial.print(pressure_sensor.mmHg());
    Serial.print(" mmHg, ");

    Serial.print(pressure_sensor.psi());
    Serial.println(" psi");
  } 
  else {
    Serial.println("Pressure sensor not found.");
  }
  delay(200);
}
