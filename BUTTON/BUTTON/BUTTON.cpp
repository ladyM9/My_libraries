#include "Arduino.h"
#include "BUTTON.h"

Button::Button()
{
  
}

void Button::Up(int pin)
{
  pinMode(D6, INPUT);
  if(digitalRead(D6) == LOW)
  {
    Serial.println("Hi");
  }
}
