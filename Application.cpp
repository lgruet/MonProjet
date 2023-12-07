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
  J.getEcran().DebutJeu();
  /*Bouton B;
  B=Bouton(D5, 'I', 1);
  B.ReadEtat();
  Serial.println(B.getEtat()); (tests)*/
  
  /*J.getBA()->ReadEtat();
  Serial.println(J.getBA()->getEtat()); (version new et pointeurs)*/
  
  while(J.getBA().getEtat()==LOW){

    J.getBA().ReadEtat();
    Serial.println("dans le while");
    
    /*J.getBA()->ReadEtat();
    Serial.println("dans le while");((version new et pointeurs) ATTENTION changer condition en J.getBA()->ReadEtat()==LOW*/
  
    /*B.ReadEtat();
    Serial.println(B.getEtat()); (tests)*/
    /*J.getBA().ReadEtat();
    Serial.println("dans le while");
    delay(1000);(tests)*/
  }
  Serial.println("en dehors");

  while(1){
    delay(1000);
  }

   /* for (int i=0; i<5; i++){
    //On affiche une question random et on attend la réponse du joueur 
    }*/

}