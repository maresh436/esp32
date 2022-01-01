
#include <Wire.h>
#include "SSD1306.h"
SSD1306 display(0x3c,21,22);
String myString1;
String myString2;

#define relayPin 13
void setup() {
  // put your setup code here, to run once:
  display.init();
display.setFont(ArialMT_Plain_24);
pinMode(relayPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayPin,HIGH);
digitalWrite(2,HIGH);
display.clear();
myString1 = "relay on   ";
myString2 = "led on   ";
display.drawString(0,0,myString1);
display.drawString(0,0,myString2);
display.display();
delay(5000);

digitalWrite(relayPin,LOW);
digitalWrite(2,LOW);
display.clear();
myString1 = "relay off   ";
myString2 = "led off  ";
display.drawString(0,0,myString1);
display.drawString(0,0,myString2);
display.display();
delay(5000);


}
