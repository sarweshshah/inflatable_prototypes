int pump = A1;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  
  // HIGH signal pulse ratio increasing
  for (int i = 10; i < 255; i+= 1) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }

  // HIGH signal pulse ratio decreasing
  for (int i = 255; i > 10; i-= 1) {
    analogWrite(pump, i);
    delayMicroseconds(2000);
  }
}
