#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
void setup()
{
  Serial.begin(115200);
  SerialBT.begin("Blt_test");  
}

void loop()
{  
    if(Serial.available())
    {
      SerialBT.write(Serial.read());
    }
    if(SerialBT.available())
    {
      Serial.write(SerialBT.read());
    }
}
