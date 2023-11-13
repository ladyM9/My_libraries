#include <LED.h>
#include "LDR.h"

LDR::LDR()
{

}

void LDR::begin()
{
  Serial.begin(9600); 
}

int LDR::LDR_sensor(int pin)
{
  pinMode(pin, OUTPUT);
  int stanje = analogRead(pin);
  Serial.println(stanje);
  return stanje;
}
