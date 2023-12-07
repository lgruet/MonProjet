#include "Ecran.h"

Ecran::Ecran(){
  NULL;
}

void Ecran::DebutJeu(){
    Serial.println("*********************************************************************");
    Serial.println("Bienvenue au début du jeu :)");
    Serial.println("Appuyez sur le bouton A pour commencer");
    Serial.println("*********************************************************************");
}

void Ecran::AfficheQst(Question Qst){
    Serial.println(Qst.getQst());
    Serial.print("A. ");
    Serial.print(Qst.getA());
    Serial.print("      ");
    Serial.print("B. ");
    Serial.println(Qst.getB());
    Serial.print("C. ");
    Serial.print(Qst.getC());
    Serial.print("      ");
    Serial.print("D. ");
    Serial.println(Qst.getD());
}

void Ecran::AfficheScore(int score){
    Serial.print("Votre Score: ");
    Serial.print(score);
    Serial.println("/5");
}

void Ecran::FinJeu(int score){
    Serial.println("*********************************************************************");
    Serial.println("Fin");
    AfficheScore(score);
    if (score<2){
        Serial.println("Les questions devaient être difficiles...");
    }
    else if(score==2){
        Serial.println("Presque la moyenne, peut mieux faire ");
    }
    else if((score>3)&&(score<5)){
        Serial.println("C'est pas mal ");
    }
    else if(score==5){
        Serial.println("Perfect, un petit génie");
    }
    Serial.println("*********************************************************************");
}
