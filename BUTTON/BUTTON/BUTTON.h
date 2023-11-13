#ifndef __BUTTON_H__
#define __BUTTON_H__

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#define D6 PD6

class Button
{
  public:
    Button();
    void Up(int pin);

  
  
};
#endif
