//Neo HEX 37 RGB LED Board (WS2812)
//Rainbow Pattern

#include <FastLED.h>

#define NUM_LEDS    37
#define DATA_PIN    26  //M5Atom
#define BRIGHTNESS  255 //300mA

CRGB leds[NUM_LEDS];

void setup() {

  delay(3000);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  FastLED.clear();
  FastLED.show();
  delay(50);

  for (int i = 0; i < 4; i++) {
    leds[i] = CRGB(125, 0, 255);
  }

  for (int i = 4; i < 9; i++) {
    leds[i] = CRGB(50, 0, 255);
  }

  for (int i = 9; i < 15; i++) {
    leds[i] = CRGB(0, 0, 255);
  }

  for (int i = 15; i < 22; i++) {
    leds[i] = CRGB(0, 255, 0);
  }

  for (int i = 22; i < 28; i++) {
    leds[i] = CRGB(255, 255, 0);
  }

  for (int i = 28; i < 33; i++) {
    leds[i] = CRGB(255, 100, 0);
  }

  for (int i = 33; i < 37; i++) {
    leds[i] = CRGB(255, 0, 0);
  }

  FastLED.show();
}



void loop() {

}
