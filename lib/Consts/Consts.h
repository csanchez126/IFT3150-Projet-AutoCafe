#ifndef _CONSTS
#define _CONSTS_h
#include "Arduino.h"

enum STATUS {
  STANDBY,        //Container weight 0, tare scale, wait for customer
  AUTHENTICATION, //Container and chip detected
  SERVING,        //Container weight set, pouring coffee
  PAYMENT,        //Pouring done, finished weight stuff, writing to chip
  CLEARING        //Transaction finished, look for negative container weight then tare
};

const int BUTTON_PIN = 5;     // the number of the pushbutton pin
const int GREEN_LED_PIN = 6;
const int RED_LED_PIN = 7;
const int POT_PIN = A0;    // select the input pin for the potentiometer
const int LOOP_DELTA = 20;
const int BASE_CALIBRATION_OFFSET = 200;

String enumToString(int sys);

#endif