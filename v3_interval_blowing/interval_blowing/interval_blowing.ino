int pump = A1;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  for (int i = 10; i < 255; i+= 1) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }

  for (int i = 255; i > 10; i-= 1) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }
}
