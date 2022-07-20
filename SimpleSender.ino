/*
   SimpleSender.cpp

    Demonstrates sending IR codes in standard format with address and command
    An extended example for sending can be found as SendDemo.

    Copyright (C) 2020-2021  Armin Joachimsmeyer
    armin.joachimsmeyer@gmail.com

    This file is part of Arduino-IRremote https://github.com/Arduino-IRremote/Arduino-IRremote.

    MIT License
*/
#include <Arduino.h>

//#define SEND_PWM_BY_TIMER
//#define USE_NO_SEND_PWM
//#define NO_LED_FEEDBACK_CODE // saves 418 bytes program memory

#include "PinDefinitionsAndMore.h" //Define macros for input and output pin etc.
#include <IRremote.hpp>

void setup() {
  IrSender.begin(); // Start with IR_SEND_PIN as send pin and if NO_LED_FEEDBACK_CODE is NOT defined, enable feedback LED at default feedback LED pin
}


void loop() {
  IrSender.sendNEC(0xFF02FD, 32);

  delay(1000);  // delay must be greater than 5 ms (RECORD_GAP_MICROS), otherwise the receiver sees it as one long signal
}
