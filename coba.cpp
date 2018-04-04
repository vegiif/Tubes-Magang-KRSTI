#include Arduino.h
#include Function.h
#include <wire.h> //memuat library kominikasi serial

//Master writer = arduino pengirim data
//Slave receiver = arduino penerima data
//komunikasi antar arduino dilakukan dengan cara, menguhubungkan GND antar arduino, pin A4 (SCL) dan pin A5(SCL) antar arduino
//program memunculkan sesuatu pada serial monitor arduino slave melalui inputan pada master writer


/*
Program mengirimkan data
perangkat master writer Arduino
*/

#include <Wire.h>

void setup()
{
  Wire.begin();
}

byte x = 0;

void loop()
{
  Wire.beginTransmission(20);
  Wire.write("x is ");
  Wire.write(x);  
  Wire.endTransmission();

  x++;
  delay(500);
}

/*
Program menerima data dan menampilkannya
perangkat slave receiver Arduino
*/

#include <Wire.h>

void setup()
{
  Wire.begin(20);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}

void loop()
{
  delay(100);
}

void receiveEvent(int howMany)
{
  while(1 < Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
  }
  int x = Wire.read();
  Serial.println(x);
}
