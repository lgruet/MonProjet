#include <random> 
#include <ctime>
#include "Bouton.h"
#include "Ecran.h"

using namespace std;

class Jeu{
    private :
    Question qst_tab[15];
    int score;
    bool ready; // Indique si le bouton est appuyé
    Ecran E;
    Bouton BA, BB, BC, BD; 

    public :
    //Constructeur
    Jeu();

    //renvoie une question aléatoire
    Question Question_Random();
    
    //Incrémente le score
    void Increment_Score();
    
    //Retourne le score
    int getScore();

    Ecran getEcran();

    Bouton& getBA();
    Bouton& getBB();
    Bouton& getBC();
    Bouton& getBD(); 

    bool& getReady();
    void setReady(bool R);

    /*surement inutile
    void Init_Jeu();
    void Fin_Jeu();
    */

};