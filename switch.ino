
#include <Wire.h>
#include "SSD1306.h"

SSD1306 display(0x3c,21,22);
String myString;


#define magSW 16
void setup() {
  // put your setup code here, to run once:

  display.init();
display.setFont(ArialMT_Plain_24);
pinMode(magSW,INPUT_PULLUP);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  int sw_status;
  sw_status = digitalRead(magSW);
  if (sw_status)
  {
  Serial.println("Switch open");
  display.clear();
  myString = "Switch open  ";
  display.drawString(0,0,myString);
  display.display();
  }
  else
  {
  Serial.println("Switch closed");
  display.clear();
  myString = "Switch closed";
  display.drawString(0,0,myString);
  display.display();

  delay(1000);
  
  }
}
