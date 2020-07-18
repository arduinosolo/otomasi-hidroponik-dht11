#include <Arduino.h>
#include <Turbidity.h>

#define TURBIDITY_PIN         17

Turbidity turbidity(TURBIDITY_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(turbidity.getValue());
  delay(1500);
}
