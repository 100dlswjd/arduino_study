#include <Mouse.h>

void setup() {
  Mouse.begin();
  // put your setup code here, to run once:

}

void loop() {
  for (int idx = 0 ; idx < 150 ; idx ++)
  {
    Mouse.move(2, 2, 0);
    delay(20);
  }

  for (int idx = 0 ; idx < 150; idx ++)
  {
    Mouse.move(-2, -2, 0);
    delay(20);
  }

}
