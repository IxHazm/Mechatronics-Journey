const int button = 2;
const int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(button , INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == HIGH) {
    
    digitalWrite(led,HIGH);     // turn the led on
  }
    else{ 
    digitalWrite(led,LOW);      // turn the led off
  }
}
