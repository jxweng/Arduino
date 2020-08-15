#include "FastLED.h"
#define PIXEL_TYPE NEOPIXEL
#define NUM_LEDS 32
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() { FastLED.addLeds<PIXEL_TYPE, DATA_PIN>(leds, NUM_LEDS); }

void loop() {
        for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = CRGB::Black;
            FastLED.show();
            FastLED.clear();
        }
 } 
