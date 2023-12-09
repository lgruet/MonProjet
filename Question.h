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

    Question();
    Question(String Q, String A, String B, String C, String D, int BonneReponse);
    
    //Retourne chaques éléments privés d'une instance question
    String getQst();
    String getA();
    String getB();
    String getC();
    String getD();
    int getBonneReponse();

    //Redéfinition de l'opérateur =
    Question& operator = (const Question & autre);

    //Redéfinition de l'opérateur ==
    bool operator == (const Question & autre);
};