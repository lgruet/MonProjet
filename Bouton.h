#include <Arduino.h>
#include "Actionneur.h"
using namespace std;

class Bouton : public Actionneur {
  private :
  //La pin utilisé par le bouton
  uint8_t boutonPin;
  //Permet d'indiquer à quelle réponse est lié le bouton
  int Reponse;
  //Stocke l'état du bouton (HIGH/LOW)
  bool Etat;

  public :
  //Constructeurs
  Bouton();
  //Constructeur qui initialise le bouton sur une pin donnée, un mode donné et une reponse donnée
  Bouton(uint8_t pin, char Mode, int Reponse);
  
  //Stocke l'état du bouton dans son attribut Etat
  void ReadEtat();

  //Chaque méthode retourne un des éléments privés d'une instance bouton
  int getReponse();
  bool getEtat();
};
