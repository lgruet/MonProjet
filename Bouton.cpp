#include "Bouton.h"

using namespace std;

Bouton::Bouton(){
  NULL;
}

Bouton::Bouton(uint8_t pin, char Mode, char Reponse):Actionneur(pin, Mode){
  this->boutonPin=pin;
  this->Reponse=Reponse;
  this->Etat=HIGH;
}

void Bouton::ReadEtat(){
  this->Etat=digitalRead(boutonPin);
}

bool Bouton::getEtat(){
  return this->Etat;

}
char Bouton::getReponse(){
  return this->Reponse;
}