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

	// dosya->ReturnNumbers(dosya);
	


  sayilar=dosya->ReturnNumbers(dosya);

  kisiler=dosya->ReturnKisi(dosya);

  Oyun oyun=Oyunn(kisiler,sayilar);
  oyun->Basla(oyun);

  
// for (int i = 0; i < 277; i++)
// {
//     printf("%d\n",sayilar[i]);
// }

// for (int i = 0; i < 1000; i++)
// {
//     printf("%s\n",kisiler[i]->isim);
// }


    
    
    

 
    
 
    return 0;
	
	
}
