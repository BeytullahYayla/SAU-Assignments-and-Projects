#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
#include "Oyun.h"
int main(){

 Dosya dosya=Dosyaa();
    
    
  Kisi* kisiler;
  int* sayilar;
  sayilar=dosya->ReturnNumbers(dosya);

  kisiler=dosya->ReturnKisi(dosya);

  Oyun oyun=Oyunn(kisiler,sayilar);
  oyun->Basla(oyun);
  

  

    
    
    

 
    
 
    return 0;
	
	
}
