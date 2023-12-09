#include "Jeu.h"
using namespace std;

class Application{
    private :
    Jeu J;

    public :
    //Constructeur
    Application();

    //Méthode appelée dans le setup du .ino
    //Initialise le quizz
    void Init_Application();
    //Méthode appelée dans le loop du .ino 
    //Déroulement du quizz
    void Run_Application();
};