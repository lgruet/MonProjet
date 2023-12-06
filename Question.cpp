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

string Question::getQst(){
  return this->Qst;
}

string Question::getA(){
  return this->ReponseA;
}

string Question::getB(){
  return this->ReponseB;
}

string Question::getC(){
  return this->ReponseC;
}

string Question::getD(){
  return this->ReponseD;
}

int Question::getBonneReponse(){
  return this->BonneReponse;
}

Question& Question::operator = (const Question & autre){
    Qst=autre.Qst;
    ReponseA=autre.ReponseA;
    ReponseB=autre.ReponseB;
    ReponseC=autre.ReponseC;
    ReponseD=autre.ReponseD;
    BonneReponse=autre.BonneReponse;
}