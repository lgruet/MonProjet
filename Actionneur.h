#include <Arduino.h>
using namespace std;

class Actionneur{
  public:
  //Constructeurs
  Actionneur();
  //Initialise l'actionneur sur une pin donnée dans un mode donné ('I' pour input/'O' pour output)
  Actionneur(uint8_t pin, char Mode);

};