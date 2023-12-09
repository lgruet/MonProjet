//#include <string>  //Inutile, existe déjà dans Arduino apparement
#include <Arduino.h>
using namespace std;

class Question{
    private :
    String Qst;
    String ReponseA;
    String ReponseB;
    String ReponseC;
    String ReponseD;
    int BonneReponse;
    
    public :
    //Constructeurs
    Question();
    //Concstructeur qui initialise une question avec ses propositions de réponse et indique laquelle est la bonne réponse
    Question(String Q, String A, String B, String C, String D, int BonneReponse);
    
    //Chaque méthode retourne un des éléments privés d'une instance question
    String getQst();
    String getA();
    String getB();
    String getC();
    String getD();
    int getBonneReponse();

    //Redéfinition de l'opérateur = pour la classe question
    Question& operator = (const Question & autre);

    //Redéfinition de l'opérateur == pour la classe question
    bool operator == (const Question & autre);
};