#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
#include "Oyun.h"
int main(){

  
  Kisi* kisiler;
  int* sayilar;
 Dosya dosya=Dosyaa();//dosya yapısı oluşturulur
    
   
  sayilar=dosya->ReturnNumbers(dosya);//dosyanın okuduğu sayılar sayilar dizisine atilir

  kisiler=dosya->ReturnKisi(dosya);//dosyanin okuduğu kisiler kisiler dizisine atilir

  Oyun oyun=Oyunn(kisiler,sayilar);//oyun yapısı parametre olarak kisiler ve sayilari alarak olusturulur
  oyun->Basla(oyun);//Oyun baslatilir
  oyun->DeleteOyun(oyun);//Bellekten alınan alan nelleğe geri tahsis edilir
  dosya->DeleteDosya(dosya);//Bellekten alınan alan nelleğe geri tahsis edilir

  
    
    
    

 
    
 
    return 0;
	
	
}
