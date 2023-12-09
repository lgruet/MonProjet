//#include <iostream> // N'existe pas dans Arduino, on utilise le terminal Arduino
#include "Question.h"
using namespace std;

class Ecran{
    public :
    //Constructeur
    Ecran();

    //Méthode qui affiche une question donnée avec ses propositions de réponses
    void AfficheQst(Question Qst);
    //Méthode qui affiche le score donné
    void AfficheScore(int score);
    //Méthode qui affiche le début du jeu
    void DebutJeu();
    //Méthode qui affiche la fin du jeu et le score donné
    void FinJeu(int score);
};