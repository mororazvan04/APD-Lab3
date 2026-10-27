#include <Arduino.h>
#include "config.h"

float convertAdcToVoltage(int rawAdc) {
  return (rawAdc * 5.0f) / 1023.0f;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawAdc = analogRead(A0);
  Serial.println(rawAdc);
  delay(SAMPLE_PERIOD_MS);
}
