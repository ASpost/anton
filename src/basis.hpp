// basis.hpp

#ifndef BASIS_H
#define BASIS_H

#include <Arduino.h>

enum status {
  ON,
  OFF
};

class Led {
  private:
    uint8_t ledPin;
    bool status;
      
  public:
    // Konstruktor
      ->

      void init() {.........};
      void ledON() {........};
      void ledOFF() {.......};
      void ledSwitch() {....};
      void update() {.......};
}








#endif