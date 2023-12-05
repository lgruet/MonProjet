#include <random> 
#include "Question.h"
#include "Actionneur.h"
#include "Bouton.h"

using namespace std;

class Application{
    private :
    Question qst_tab[5];
    int score;
    bool ready; // Indique si le joueur est prêt à jouer

    public :
    //Constructeur
    Application();

    //renvoie une question aléatoire
    Question Question_Random();
    
    //Incrémente le score
    void Increment_Score();
    
    //Retourne le score
    int getScore();

    void Init_Jeu();

    void Fin_Jeu();

    void Init_Application();
    void Run_Application();


};