#include <random> 
#include "Bouton.h"
#include "Ecran.h"

using namespace std;

class Jeu{
    private :
    Question qst_tab[5];
    int score;
    bool ready; // Indique si le joueur est prêt à jouer
    Ecran E;
    //Bouton *BA, *BB, *BC, *BD; (version new)
    //Bouton BA, BB, BC, BD; (version pointeurs)
    Bouton BA, BB, BC, BD; //(version ref)

    public :
    //Constructeur
    Jeu();

    //~Jeu(); (version new)

    //renvoie une question aléatoire
    Question Question_Random();
    
    //Incrémente le score
    void Increment_Score();
    
    //Retourne le score
    int getScore();

    Ecran getEcran();

    /*Bouton * getBA();
    Bouton * getBB();
    Bouton * getBC();
    Bouton * getBD(); (version new et pointeurs)*/

    Bouton& getBA();
    Bouton& getBB();
    Bouton& getBC();
    Bouton& getBD(); //(version ref)

    bool getReady();
    void setReady(bool R);

    void Init_Jeu();

    void Fin_Jeu();



};