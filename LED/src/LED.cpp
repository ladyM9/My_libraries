#include "LED.h"

unsigned long t = 0;

Led::Led()
{
  
}

void Led::Turn_on(int pin, int interval)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(interval);
  digitalWrite(pin, LOW);
  delay(interval);

}
