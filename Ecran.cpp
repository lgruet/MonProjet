#include <iostream>
#include "Ecran.h"

void Ecran::DebutJeu(){
    cout<<"*********************************************************************"<<endl;
    cout<<"Bienvenue au début du jeu :)"<<endl;
    cout<<"*********************************************************************"<<endl;
}

void Ecran::AfficheQst(Question Qst){
    //cout<<Qst.getQst()<<endl;
    cout<<"A. "<<Qst.getA();
    //cout<<"      "<<"B. "<<Qst.getB()<<endl;
    //cout<<"C. "<<Qst.getC();
    //cout<<"      "<<"D. "<<Qst.getD()<<endl;
}

void Ecran::AfficheScore(int score){
    cout<<"Votre Score: "<<score<<"/5"<<endl;
}

void Ecran::FinJeu(int score){
    cout<<"*********************************************************************"<<endl;
    cout<<"Fin"<<endl;
    AfficheScore(score);
    if (score<2){
        cout<<"Les questions devaient être difficiles..."<<endl;
    }
    else if(score==2){
        cout<<"Presque la moyenne, peu mieux faire "<<endl;
    }
    else if(score>3&score<5){
        cout<<"C'est pas mal "<<endl;
    }
    else if(score==5){
        cout<<"Perfect, un petit génie"<<endl;
    }
    cout<<"*********************************************************************"<<endl;
}

int main() {
    bool quitter = false;

    while (!quitter) {
        std::cout << "1. Option 1\n";
        std::cout << "2. Option 2\n";
        std::cout << "3. Quitter\n";

        std::cout << "Choisissez une option : ";
        int choix;
        std::cin >> choix;

        switch (choix) {
            case 1:
                std::cout << "Vous avez choisi l'option 1.\n";
                break;
            case 2:
                std::cout << "Vous avez choisi l'option 2.\n";
                break;
            case 3:
                quitter = true;
                break;
            default:
                std::cout << "Option invalide. Veuillez réessayer.\n";
                break;
        }
    }
    std::cout << "Au revoir !\n";
    
    return 0;
}
