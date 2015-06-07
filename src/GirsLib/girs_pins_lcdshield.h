// Configuration for Arduino * with LCD shield.
// Makes very little sense on non-Uno's.

#ifndef GIRS_PINS_LCDSHIELD_H
#define GIRS_PINS_LCDSHIELD_H

#ifdef ARDUINO_AVR_NANO
#error This file is not for Nano
#elif defined(ARDUINO_AVR_MICRO)
#error This file is not for Micro
#endif

#include <LiquidCrystal.h>

#define LCD_INIT_ARGS 8,9,4,5,6,7
#define LCD_BACKLIGHT_PIN 10 // Clashes with W5100 ethernet shield
#define LCD_WIDTH 16
#define LCD_HEIGHT 2

#ifdef LED
#define SIGNAL_LED_1 13
#define SIGNAL_LED_2 A1
#define SIGNAL_LED_3 A2
#define SIGNAL_LED_4 A3
//#define SIGNAL_LED_5 A4
//#define SIGNAL_LED_6 A5
//#define SIGNAL_LED_7 6
//#define SIGNAL_LED_8 7
#endif

#if defined(CAPTURE)
// capture pin (ICP) 8/4/49
#endif

#ifdef RECEIVE
#define IRRECEIVER_PIN 11
#endif
#ifdef RECEIVER_2
#define IRRECEIVER_2_PIN 12
#endif

#ifdef TRANSMIT
// Send pin 3/9
#endif

#endif // ! GIRS_PINS_DEFAULT_H