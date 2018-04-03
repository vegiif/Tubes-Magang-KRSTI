/*
  Function.cpp
  Implementasi Fungsi-fungsi yang sebelumnya sudah dideklarasi
*/

#include "Arduino.h"
#include "Function.h"

void Function::OnOffDelay (string pilihan)
{
  _pilihan = pilihan;
  if (_pilihan == "on") {
    digitalWrite (13, HIGH);
    
  }
  else if (_pilihan == "off") {
    digitalWrite (13, LOW);
    
  }
}
