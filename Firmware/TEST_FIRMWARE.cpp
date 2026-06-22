#include <Adafruit_NeoPixel.h>

#define RGB_PIN 1      
#define NUMPIXELS 1

Adafruit_NeoPixel pixel(NUMPIXELS, RGB_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixel.begin();
  pixel.clear();
  pixel.show();
}

void loop() {
  pixel.setPixelColor(0, pixel.Color(255, 0, 0));
  pixel.show();
  delay(500);
  pixel.setPixelColor(0, pixel.Color(0, 255, 0));
  pixel.show();
  delay(500);
  pixel.setPixelColor(0, pixel.Color(0, 0, 255));
  pixel.show();
  delay(500);
  pixel.clear();
  pixel.show();
  delay(500);
}