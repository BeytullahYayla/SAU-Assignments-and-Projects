#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Dosya.h"
#include "Kisi.h"
int main(){
	// Dosya dosya=Dosyaa();
    // dosya->ReturnNumbers(dosya);
	// Kisi kisi=Kisii("Beytullah",5000,0.87,5);
	// kisi->SetIsim("Ilayda");
	// printf("%s",kisi->GetIsim());
	// FILE* ptr;
    // char ch;
	// char* token;
	
    // ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\src\\Kisiler.txt", "r");
 
    // if (NULL == ptr) {
        // printf("file can't be opened \n");
    // }
    // char line[1000];
	// while(fgets(line,sizeof(line),ptr)){
		// token=strtok(line,"#");
		// while( token != NULL ) {

      // printf( " %s\n", token );
    
      // token = strtok(NULL, line);
   // }
		
	
	
	// }
	
	Kisi kisi;
	kisi=Kisii("Rahim Yayla",5000,0.75,7);
	kisi->SetIsim("Beytullah Yayla");
	printf("%s",kisi->GetIsim);
	Dosya dosya=Dosyaa();
	//dosya->ReturnNumbers(dosya);
    dosya->ReturnKisi(dosya);
 
    
 
    return 0;
	
	
}
