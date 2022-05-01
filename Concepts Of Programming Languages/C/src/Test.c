#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
int main(){
	Dosya dosya=Dosyaa();
    dosya->ReturnNumbers(dosya);
	Kisi kisi=Kisii("Beytullah",5000,0.87,5);
	kisi->SetIsim("Ilayda");
	printf("%s",kisi->GetIsim());
	
	
	
}
