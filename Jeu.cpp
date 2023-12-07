
#include "Jeu.h"

Jeu::Jeu(){
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

    //création des boutons
    /*BA= new Bouton(D5, 'I', 1);
    BB= new Bouton(D6, 'I', 2);
    BC= new Bouton(D8, 'I', 3);
    BD= new Bouton(D7, 'I', 4); (version new)*/

    BA= Bouton(D5, 'I', 1);
    BB= Bouton(D6, 'I', 2);
    BC= Bouton(D8, 'I', 3);
    BD= Bouton(D7, 'I', 4); //(version pointeur et ref)

    E=Ecran();
}

/*Jeu::~Jeu(){
  delete(BA);
  delete(BB);
  delete(BC);
  delete(BD);
  Serial.println("destructeur");
} (version new)*/

Question Jeu::Question_Random(){
    return qst_tab[rand() %sizeof(qst_tab)] ;
}

void Jeu::Increment_Score(){
    this->score++;
}

int Jeu::getScore(){
    return this->score;
}

Ecran Jeu::getEcran(){
  return this->E;
}

/*Bouton * Jeu::getBA(){
  return BA;
}

Bouton * Jeu::getBB(){
  return BB;
}

Bouton * Jeu::getBC(){
  return BC;
}

Bouton * Jeu::getBD(){
  return BD;
} (version new)*/

/*Bouton * Jeu::getBA(){
  return &BA;
}

Bouton * Jeu::getBB(){
  return &BB;
}

Bouton * Jeu::getBC(){
  return &BC;
}

Bouton * Jeu::getBD(){
  return &BD;
} (version pointeurs)*/

Bouton& Jeu::getBA(){
  return BA;
}

Bouton& Jeu::getBB(){
  return BB;
}

Bouton& Jeu::getBC(){
  return BC;
}

Bouton& Jeu::getBD(){
  return BD;
} //(version ref)

bool Jeu::getReady(){
  return this->ready;
}

void Jeu::setReady(bool R){
  this->ready=R;
}

// On affiche un écran de départ et on attend que le joueur appuie sur un bouton pour commencer
void Jeu::Init_Jeu(){

}

//Affichage du score + écran de fin 
void Jeu::Fin_Jeu(){

}
