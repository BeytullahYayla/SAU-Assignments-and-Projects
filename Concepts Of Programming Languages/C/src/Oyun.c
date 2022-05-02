#include "Oyun.h"
#include "Kisi.h"
#include <stdlib.h>



Oyun Oyunn(Kisi kisi,int sayilar){
    
    Oyun this;
    this=(Oyun)malloc(sizeof(struct OYUN));
   
    this->Basla=&basla;
    return this;
    


}

void basla(){

}