#define maviLed 8

void setup() {
  pinMode(maviLed, OUTPUT);
}

void loop() {
  digitalWrite(maviLed,HIGH);
  delay(1000);
  digitalWrite(maviLed,LOW);
  delay(1000);
}
