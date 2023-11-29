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
  int stanje = (analogRead(pin)/1023.0) * 5.0;
  float RLDR = (float)1000 * (1/(1- ((float)stanje/(float)5)) - 1);
  Serial.println(RLDR);
  return stanje;
}
