/*
 * Potentiometer Dimmer
 * Date: Feb 12, 2026
 *
 * Potentiometer controls LED brightness in real-time
 * Demonstrates analogRead(), map(), and analogWrite()
 * 
 * Pot wiper  A0  analogRead (0-1023)
 * map() converts 0-255
 * analogWrite LED brightness
 */

const int analogPin = A0;   // Potentiometer wiper input
const int digitalPin = 9;   // PWM pin for LED (~)

int analogValue = 0;  // Raw pot value (0-1023)
int outValue = 0;     // Mapped PWM value (0-255)

void setup() {
  pinMode(digitalPin, OUTPUT);
}

void loop() {
  analogValue = analogRead(analogPin);              // Read pot (0-1023)
  outValue = map(analogValue, 0, 1023, 0, 255);     // Convert range
  analogWrite(digitalPin, outValue);                // Set brightness
  delay(3);                                         // Stability delay
}