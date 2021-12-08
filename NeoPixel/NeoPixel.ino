#include <Adafruit_NeoPixel.h>
#define PIN 6  // 네오픽셀 사용할 핀번호
#define NUM 8  // 네오픽셀 개수
Adafruit_NeoPixel pixels(NUM, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  pixels.clear();
  for (int i = 0; i < NUM; i++) {
    pixels.setPixelColor(i, pixels.Color(random(255), random(255), random(255)));

    pixels.show();
    delay(300);
  }
}
