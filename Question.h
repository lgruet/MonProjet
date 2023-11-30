#include <string>  

using namespace std;


class Question{
    private :
        string Qst;
        string ReponseA;
        string ReponseB;
        string ReponseC;
        string ReponseD;
        int BonneReponse;
    public :

    Question();
    Question(string Q, string A, string B, string C, string D, int BonneReponse);
};