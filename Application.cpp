#include "Application.h"

Application::Application(){
  NULL;
}


// Fonction appelée dans le setup du .ino
void Application::Init_Application(){
  Serial.begin(9600);
  J=Jeu();
  J.Init_Jeu();
}

//Fonction appelée dans le loop du .ino
void Application::Run_Application(){
  //affichage ecran d'accueil du jeu
  J.getEcran().DebutJeu();
  
  //attente de l'appui du bouton A pour démarrer le jeu
  while(J.getBA().getEtat()==LOW){
    J.getBA().ReadEtat();
  }
  
  //code du jeu

  //boucle infinie pour pas que le jeu redémarre tout seul : il redémarre avec le reset de la carte
  while(1){
    delay(1000);
  }

}