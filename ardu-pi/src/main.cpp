#include <Arduino.h>
#define LED 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  Serial.println("Beginning");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello from arduino");
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
}