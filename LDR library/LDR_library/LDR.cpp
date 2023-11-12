#include "LDR.h"

LDR::LDR()
{

}

void LDR::begin()
{
  Serial.begin(9600); 
}

void LDR::LDR_sensor(int pin)
{
  pinMode(pin, OUTPUT);
  int stanje = analogRead(pin);
  Serial.println(stanje);
  delay(1);
}
