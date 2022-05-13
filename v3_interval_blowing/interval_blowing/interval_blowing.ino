int pump = A1;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i++) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }

  for (int i = 255; i > 0; i--) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }
}
