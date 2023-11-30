
#include "Application.h"

Application::Application(){
    //Initialisation du tableau de question
    this->qst_tab[0]=Question("Qui a écrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);
    this->qst_tab[1]=Question("Qui a écrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);
    this->qst_tab[2]=Question("Qui a écrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);
    this->qst_tab[3]=Question("Qui a écrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);
    this->qst_tab[4]=Question("Qui a écrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);

    //Initialisation du score
    this->score=0;

    //Initialisation de l'état du joueur
    this->ready=false;
}

Question Application::Question_Random(){
    return qst_tab[rand() %sizeof(qst_tab)] ;
}

void Application::Increment_Score(){
    this->score++;
}

int Application::getScore(){
    return this->score;
}

// On affiche un écran de départ et on attend que le joueur appuie sur un bouton pour commencer
void Init_Jeu(){

}

//Affichage du score + écran de fin 
void Fin_Jeu(){

}

// Fonction appelée dans le setup du .ino
void Init_Application(){
    Init_Jeu();
}

//Fonction appelée dans le loop du .ino
void Run_Application(){
    for (int i=0; i<5; i++){
    //On affiche une question random et on attend la réponse du joueur 
    }
}