#include <LED.h>


#include "Arduino.h"
#include "LDR.h"



LDR ldr;
Led led;



void setup() {
  // put your setup code here, to run once:
  ldr.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  (ldr.LDR_sensor(A0));
}
