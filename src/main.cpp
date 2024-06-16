#include <Arduino.h>

int pin2 = 2;
int pin5 = 5;

void setup()
{
  pinMode(pin2, OUTPUT);
  pinMode(pin5, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  digitalWrite(pin2, HIGH);
  digitalWrite(pin5, HIGH);
}
