#include "HX710B.h"

const int PUMP_PIN = A1;
const int VACUUM_PIN = A0;
const int DOUT_PIN = A3;
const int SCLK_PIN = A2;

HX710B pressure_sensor;
void printPressureMetrics();

void setup() {
  Serial.begin(2000000);

  // Preparing Pressure Sensor
  pressure_sensor.begin(DOUT_PIN, SCLK_PIN);
  pressure_sensor.power_up();
  pressure_sensor.wait_ready(2000); // Waiting for 2 secs for the sensor to send signal
  // Serial.println("HX710B Sensor is ready!");
}

void loop() {
//  analogWrite(PUMP_PIN, 255);
  analogWrite(VACUUM_PIN, 255);
  printPressureMetrics();
  delay(200);
}

void printPressureMetrics() {
  if (pressure_sensor.is_ready()) {
//    Serial.print(pressure_sensor.pascal() / 1000);
//    Serial.print(" kPa, ");

    Serial.print(pressure_sensor.atm());
    Serial.print(" atm, ");

//    Serial.print(pressure_sensor.mmHg());
//    Serial.print(" mm Hg, ");
//    
//    Serial.print(pressure_sensor.psi());
//    Serial.println(" psi");
  }
  else {
    Serial.println("Pressure sensor not found.");
  }
}
