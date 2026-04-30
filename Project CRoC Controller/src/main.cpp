#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("Built");
}

void loop() {
  Serial.println("i'm Alive");
  delay(100);
}