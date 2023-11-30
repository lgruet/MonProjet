#include <string>  
#include "Question.h"

using namespace std;


Question::Question(string Q, string A, string B, string C, string D, int BonneReponse){
    this->Qst=Q;
    this->ReponseA=A;
    this->ReponseB=B;
    this->ReponseC=C;
    this->ReponseD=D;
    this->BonneReponse=BonneReponse;
}