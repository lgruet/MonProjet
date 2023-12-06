//#include <iostream> // N'existe pas dans Arduino, on utilise le terminal Arduino
#include "Question.h"
using namespace std;

class Ecran{
    public :
    Ecran();

    void AfficheQst(Question Qst);
    void AfficheScore(int score);
    void DebutJeu();
    void FinJeu(int score);
};