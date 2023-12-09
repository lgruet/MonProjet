#include "Question.h"

Question::Question(){
  NULL;
}

Question::Question(String Q, String A, String B, String C, String D, int BonneReponse){
    this->Qst=Q;
    this->ReponseA=A;
    this->ReponseB=B;
    this->ReponseC=C;
    this->ReponseD=D;
    this->BonneReponse=BonneReponse;
}

String Question::getQst(){
  return this->Qst;
}

String Question::getA(){
  return this->ReponseA;
}

String Question::getB(){
  return this->ReponseB;
}

String Question::getC(){
  return this->ReponseC;
}

String Question::getD(){
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
  return (*this);
}

bool Question::operator == (const Question & autre){
  return ((Qst==autre.Qst)&&(ReponseA==autre.ReponseA)&&(ReponseB==autre.ReponseB)&&(ReponseC==autre.ReponseC)&&(ReponseD==autre.ReponseD)&&(BonneReponse==autre.BonneReponse));
}