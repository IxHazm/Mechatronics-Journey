const int ledPin = 9;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fade = 0;fade <=255 ;fade += 5){
    analogWrite(ledPin,fade);
    delay(5);
  }
  for(int fade = 255;fade >=0 ;fade -= 5){
    analogWrite(ledPin,fade);
    delay(20);
  }

}
