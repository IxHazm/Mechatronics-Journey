void setup() {
  pinMode(12, OUTPUT);  // Set pin 12 as output
}

void loop() {
  digitalWrite(12, HIGH);  // Turn LED on (5V)
  delay(1000);             // Wait 1 second
  digitalWrite(12, LOW);   // Turn LED off (0V)
  delay(1000);             // Wait 1 second
}
