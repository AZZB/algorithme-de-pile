#include <cstdlib>
#include <iostream>
#include "Pile.h"
#include "PileChaine.h"


using namespace std;

int main(int argc, char *argv[])
{          cout<<"-------------Bienvenue dans mon test"<<endl;
           PileChaine p1;
           p1.initPile();
           //  la pile p1 vide ou non?
           if(p1.pileVide())
               cout<<"La pile est vide"<<endl;
           else
               cout<<"la pile n'est pas vide!"<<endl;
               
           cout<<" empiler la valeur 5 !"<<endl;
           p1.empiler(5);
           cout<<" empiler la valeur 11 !"<<endl;
           p1.empiler(11);
           //  la pile p1 vide ou non?
           if(p1.pileVide())
               cout<<"La pile est vide"<<endl;
           else
               cout<<"la pile n'est pas vide!"<<endl;
           
           cout<<"depiler !"<<endl;
           p1.depiler();
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
