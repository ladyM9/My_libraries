#ifndef __LED_LIBRARY_H__
#define __LED_LIBRARY_H__

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define D4 PD4

class Led
{
    public:
        Led();
        void Turn_on(int pin, int interval);
    
};



#endif
