int timer = 100;
int ledPins[]={
  6,7,8,9
};
int LedCount = 4;
void setup(){
  for(int pin= 0 ;pin < LedCount;pin++){
    pinMode(ledPins[pin],OUTPUT);
  }
}

void loop(){
  for(int pin=0; pin < LedCount ; pin++){
    digitalWrite(ledPins[pin], HIGH);
    delay(timer);
    digitalWrite(ledPins[pin], LOW);
  }
  for(int pin = LedCount-1 ; pin>=0 ; pin--){
    digitalWrite(ledPins[pin], HIGH);
    delay(timer);
    digitalWrite(ledPins[pin], LOW);
  }
}