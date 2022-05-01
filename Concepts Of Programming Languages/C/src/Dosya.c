#include "Dosya.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Dosya Dosyaa(){
Dosya this;
this=(Dosya)malloc(sizeof(struct DOSYA));
this->ReturnNumbers=&returnNumbers;
this->ReturnKisi=&returnKisi;
}
void remove_spaces(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}
int* returnNumbers(Dosya dosya){
	 static int array[277];
	 int counter=0;
	
     FILE* ptr;
     char number;
     ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\src\\Sayilar.txt", "r");
 
    if (NULL == ptr) {
        // printf("file can't be opened \n");
     }
 
    char line[1000];
	while(fgets(line,sizeof(line),ptr)){
		
		remove_spaces(line);
		int number_line=atoi(line);
		array[counter]=number_line;
		printf("%d\n",number_line);
		
		
		counter++;
   }
		
	
	
	
 
     
	 

	
	 return array;

}
struct Kisi* returnKisi(Dosya dosya){
	struct Kisi kisiArray[1000];
	
}
