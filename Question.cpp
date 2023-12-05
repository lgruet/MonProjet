#include "Question.h"

Question::Question(){
  NULL;
}

Question::Question(string Q, string A, string B, string C, string D, int BonneReponse){
    this->Qst=Q;
    this->ReponseA=A;
    this->ReponseB=B;
    this->ReponseC=C;
    this->ReponseD=D;
    this->BonneReponse=BonneReponse;
}

string getQst(){
  return this->Qst;
}

string getA(){
  return this->ReponseA;
}

string getB(){
  return this->ReponseB;
}

string getC(){
  return this->ReponseC;
}

string getD(){
  return this->ReponseD;
}

int getBonneReponse(){
  return this->BonneReponse;
}

Question & operator = (const Question & autre){
    Qst=autre.Qst;
    ReponseA=autre.ReponseA;
    ReponseB=autre.ReponseB;
    ReponseC=autre.ReponseC;
    ReponseD=autre.ReponseD;
    BonneReponse=autre.BonneReponse;
}