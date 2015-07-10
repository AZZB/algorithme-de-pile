#include <iostream>
#include "PileChaine.h"


using namespace std;

             void PileChaine::initPile(){
                sommet=NULL;  
                   }
              bool PileChaine::pileVide(){
                   return (sommet==NULL); 
                   }  
              void PileChaine::empiler(int x){
                   Bloc *nouv=new Bloc;
                   nouv->elem=x;
                   nouv->suiv=sommet;
                   sommet=nouv;
                   }
             int PileChaine::depiler(){
                  if(!(pileVide()))  {                         
                            Bloc*p=sommet;
                            int x=sommet->elem;
                            sommet=sommet->suiv;
                            delete p;
                            return x;
                            }
                   cout<<"Pile est vide! "<<endl;
                   }
             int PileChaine::tetePile(){
                 if(!(pileVide()))
                               return sommet->elem;
                               
                   cout<<"Pile est vide!  "<<endl;            
                 }      
