#define relayPin 13
void setup() {
  // put your setup code here, to run once:
pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayPin,HIGH);
digitalWrite(2,HIGH);
delay(5000);
digitalWrite(relayPin,LOW);
digitalWrite(2,LOW);
delay(5000);
}
