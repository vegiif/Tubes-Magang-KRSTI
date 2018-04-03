/*
  Function.h
  Deklarasi fungsi dan variabel
*/

#ifndef Function_h
#define Function_h

#include "Arduino.h"

class Function
{
  public:
    void OnOffDelay (string pilihan);
  private:
    string _pilihan;
    int _waktuDelay;
    int _idx;
};

#endif
