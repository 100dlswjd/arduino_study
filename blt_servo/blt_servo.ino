#include "BluetoothSerial.h"
#include <ESP32_Servo.h>

BluetoothSerial SerialBT;

static const int servoPin = 23;

Servo s;
void setup()
{
  Serial.begin(115200);
  s.attach(servoPin);
  SerialBT.begin("Blt_test");  
}

void loop()
{
  char cmd;
  if(Serial.available())
    {
      SerialBT.write(Serial.read());
      cmd = Serial.read();
    }
    if(SerialBT.available())
    {
      Serial.write(SerialBT.read());
      cmd = SerialBT.read();
    }

  if(cmd == "o")
  {
    s.attach(180);
    delay(500);
    s.attach(0);
  }
  cmd = "";  
}
