#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
#include "Oyun.h"
int main(){

	// Dosya dosya=Dosyaa();
    
    
    Kisi* kisiler;
	// dosya->ReturnNumbers(dosya);
	
  Dosya dosya=Dosyaa();
  kisiler=dosya->ReturnKisi(dosya);
  for(int i=0;i<1000;i++){
      
      printf("%s\n",kisiler[i]->isim);
  }
  

    
    
    

 
    
 
    return 0;
	
	
}
