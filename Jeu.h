#include <random> 
#include <ctime>
#include "Bouton.h"
#include "Ecran.h"
using namespace std;

class Jeu{
    private :
    //Tableau qui stocke la banque de questions
    Question qst_tab[15];
    //Le score du joeur
    int score;
    // Indique si un bouton est appuyé
    bool ready; 
    Ecran E;
    //Les 4 différents boutons liés au jeu
    Bouton BA, BB, BC, BD; 

    public :
    //Constructeur
    Jeu();

    //Renvoie une question aléatoire
    Question Question_Random();
    
    //Incrémente le score
    void Increment_Score();
    
    //Chaque méthode retourne un des éléments privés d'une instance jeu
    int getScore();
    Ecran getEcran();
    Bouton& getBA();
    Bouton& getBB();
    Bouton& getBC();
    Bouton& getBD(); 
    bool& getReady();

    //Méthode qui défini la valeur de ready
    void setReady(bool R);
};