#ifndef DEF_PILECHAINE
#define DEF_PILECHAINE
#include "Bloc.h"
class PileChaine{
      private:
              Bloc *sommet;
             
      public: 
              void initPile();
              bool pileVide();
              void empiler(int x); 
              int depiler();
              int tetePile();
                    
      
      
      
      
      };
#endif       
