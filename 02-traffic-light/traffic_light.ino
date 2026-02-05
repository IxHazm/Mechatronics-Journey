/*
 * Traffic Light System
 * Date: Feb 5 2026
 * Controls 3 LEDs in traffic light sequence
 * Green (5s)  Yellow (2s)  Red (5s)  Repeat
 */
 
 // Pin definitions
const int GREEN = 11;
const int YELLOW = 12;
const int RED = 13;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  // GREEN - Go
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(5000);
  
  // YELLOW - Prepare to stop
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  
  // RED - Stop
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(5000);
}