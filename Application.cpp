#include "Application.h"

Application::Application(){
  NULL;
}


//Méthode appelée dans le setup du .ino
void Application::Init_Application(){
  //Initialise le terminal (Serial Monitor) de l'Arduino avec un baud rate de 9600
  Serial.begin(9600);
  J=Jeu();
}


//Méthode appelée dans le loop du .ino
void Application::Run_Application(){
  //Sert à l'affichage des questions
  Question Q;
  //Permet de stocker les questions précédemment affichées
  Question q_precedent[4];
  //Permet de stocker la reponse donnée par le joueur
  int reponseDonnee=0;

  //Affichage de l'ecran d'accueil du jeu
  J.getEcran().DebutJeu();
  
  //Attente de l'appui du bouton A pour démarrer le jeu
  while(J.getBA().getEtat()==LOW){
    J.getBA().ReadEtat();
  }

  //Déroulement du jeu
  for (int i=0;i<5;i++){
    q_precedent[i]=Q;
    Q=J.Question_Random();
    //Permet de ne pas afficher plusieurs fois la même question
    while ((Q==q_precedent[0])||(Q==q_precedent[1])||(Q==q_precedent[2])||(Q==q_precedent[3])||Q==q_precedent[4]){
      Q=J.Question_Random();
    }
    J.getEcran().AfficheQst(Q);
    //Evite que l'Arduino détecte plusieurs appui sur un bouton lorsque le joueur appuie sur un bouton
    delay(1000);

    //On attend que le joueur appuie sur un bouton 
    //Quand un bouton est appuyé, on stocke lequel grâce à la variable reponseDonnee 
    while(J.getReady()==false){
      J.getBA().ReadEtat();
      J.getBB().ReadEtat();
      J.getBC().ReadEtat();
      J.getBD().ReadEtat();
      if(J.getBA().getEtat()==HIGH){
        J.setReady(true);
        reponseDonnee=J.getBA().getReponse();
      }
      else if(J.getBB().getEtat()==HIGH){
        J.setReady(true);
        reponseDonnee=J.getBB().getReponse();
      }
      else if(J.getBC().getEtat()==HIGH){
        J.setReady(true);
        reponseDonnee=J.getBC().getReponse();
      }
      else if(J.getBD().getEtat()==HIGH){
        J.setReady(true);
        reponseDonnee=J.getBD().getReponse();
      }
    }
    //On incrémente le score si la bonne reponse est donnée
    if (reponseDonnee==Q.getBonneReponse()){
      J.Increment_Score();
    }
    J.setReady(false);
  }

  //On affiche la fin du jeu après les 5 questions posées
  J.getEcran().FinJeu(J.getScore());
  

  //Boucle infinie pour pas que le jeu redémarre tout seul : il redémarre avec le reset de la carte
  while(1){
    delay(1000);
  }

}