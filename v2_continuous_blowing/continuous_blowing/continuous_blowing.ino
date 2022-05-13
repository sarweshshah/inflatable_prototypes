int pump = A2;

void setup() {
  pinMode(pump, OUTPUT);
}

void loop() {
  analogWrite(pump, 255);
}
