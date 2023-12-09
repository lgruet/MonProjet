#include "Actionneur.h"
using namespace std;

Actionneur::Actionneur(){
  NULL;
}

Actionneur::Actionneur(uint8_t pin, char Mode){
  if (Mode=='I'){
    pinMode(pin, INPUT);
  }
  else if (Mode=='O'){
    pinMode(pin, OUTPUT);
  }

}