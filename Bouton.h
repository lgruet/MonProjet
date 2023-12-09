#include <Arduino.h>
#include "Actionneur.h"
using namespace std;

class Bouton : public Actionneur {
  private :
    uint8_t boutonPin;
    int Reponse;
    bool Etat;

  public :
    int getReponse();
    bool getEtat();
    void ReadEtat();
    Bouton();
    Bouton(uint8_t pin, char Mode, int Reponse);


};
