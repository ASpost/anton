#pragma once 
#include <Arduino.h>

// Konstantendefinition 
const uint8_t LEDPIN = GPIO_NUM_11;                                   // pin ersetzen

// Typendefinition
typedef enum {
  OFF = 0,
  ON
} status_t;