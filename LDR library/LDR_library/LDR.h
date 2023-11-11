#ifndef __LDR_LIBRARY_H__
#define __LDR_LIBRARY_H__
#include "Arduino.h"

#define A0 PC0

class LDR
{
  public:
  LDR();
  void begin();
  void LDR_sensor(int pin);
};

#endif
