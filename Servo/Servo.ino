#include <ESP32_Servo.h>

static const int servoPin = 23;

Servo s;

void setup() {
    Serial.begin(115200);
    s.attach(servoPin);
}

void loop() {
    for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        s.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }

    for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        s.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }
}
