#include <Arduino.h>
#include "Actionneur.h"
using namespace std;

class Bouton : public Actionneur {
  private :
    uint8_t boutonPin;
    char Reponse;
    bool Etat;

  public :
    char getReponse();
    bool getEtat();
    void ReadEtat();
    Bouton();
    Bouton(uint8_t pin, char Mode, char Reponse);


};
