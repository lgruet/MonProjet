#include "Bouton.h"
using namespace std;

Bouton::Bouton(){
  NULL;
}

Bouton::Bouton(uint8_t pin, char Mode, int Reponse):Actionneur(pin, Mode){
  this->boutonPin=pin;
  this->Reponse=Reponse;
}

void Bouton::ReadEtat(){
  this->Etat=digitalRead(boutonPin);
}

bool Bouton::getEtat(){
  return this->Etat;

}
int Bouton::getReponse(){
  return this->Reponse;
}