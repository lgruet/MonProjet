#include "Jeu.h"

Jeu::Jeu(){
  //Initialisation du tableau de question
  this->qst_tab[0]=Question("Qui a ecrit Harry Potter ? ","J.K. Rowling","Stephen King","Suzanne Collins","Christopher Nolan",1);
  this->qst_tab[1]=Question("Quel est le composant principal de l'air ? ","Oxygene","Azote","Hydrogene","Dioxyde de carbone",2);
  this->qst_tab[2]=Question("Quel est le plus grand continent du monde ? ","Europe","Asie","Afrique","Amerique du Nord",2);
  this->qst_tab[3]=Question("Qui a invente la premiere ampoule electrique ?","Thomas Edison","Nikola Tesla","Marie Curie","Alexander Graham Bell",1);
  this->qst_tab[4]=Question("Quelle est la planete la plus proche du soleil ?","Venus","Mars","Mercure","Jupiter",3);
  this->qst_tab[5]=Question("Quel est le symbole chimique de l'or ? ","Ag","Fe","Hg","Au",4);
  this->qst_tab[6]=Question("Quel est le pays le plus densement peuple du monde ?","Inde","Chine","Bangladesh","Japon",3);
  this->qst_tab[7]=Question("Qui a decouvert la penicilline ?","Louis Pasteur","Alexander Fleming","Albert Einstein","Marie Curie",2);
  this->qst_tab[8]=Question("Quel est le plus petit os du corps humain ?","Os frontal","Os cuboide","Etrier","Rotule",3);
  this->qst_tab[9]=Question("Quel groupe a sorti l'album \"Abbey Road\" ?","The Beatles","Led Zeppelin","The Who","The Rolling Stones",1);
  this->qst_tab[10]=Question("Quel est le plus grand ocean du monde ?","Ocean Atlantique","Ocean Indien","Ocean Arctique","Ocean Pacifique",4);
  this->qst_tab[11]=Question("Quel est le composant principal des os ?","Fer","Calcium","Sodium","Potassium",2);
  this->qst_tab[12]=Question("Quel joueur de tennis detient le record du plus grand nombre de victoires en Grand Chelem en simple chez les hommes?","Rafael Nadal","Roger Federer","Novak Djokovic","Pete Sampras",3);
  this->qst_tab[13]=Question("Combien de fois le Stade Toulousain a-t-il remporté le Bouclier de Brennus (championnat de France) ?","20","22","24","26",2);
  this->qst_tab[14]=Question("Quelle ville a accueilli les premiers Jeux Olympiques de l'ere moderne en 1896 ?","Athenes","Paris","Londres","Rome",1);

  //Initialisation du score
  this->score=0;

  //Initialisation de l'état du joueur
  this->ready=false;

  //Création des boutons
  BA= Bouton(D5, 'I', 1);
  BB= Bouton(D6, 'I', 2);
  BC= Bouton(D8, 'I', 3);
  BD= Bouton(D7, 'I', 4); 
  
  //Création de l'ecran
  E=Ecran();
}

Question Jeu::Question_Random(){
  srand((unsigned int)time(0));
  //Retourne une question aléatoire du tableau en générant un indice aléatoire
  return qst_tab[rand()%15] ;
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

Bouton& Jeu::getBA(){
  return this->BA;
}

Bouton& Jeu::getBB(){
  return this->BB;
}

Bouton& Jeu::getBC(){
  return this->BC;
}

Bouton& Jeu::getBD(){
  return this->BD;
}

bool& Jeu::getReady(){
  return this->ready;
}

void Jeu::setReady(bool R){
  this->ready=R;
}
