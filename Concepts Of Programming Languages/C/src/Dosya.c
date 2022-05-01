#include "Dosya.h"
#include <stdlib.h>
#include <stdio.h>


Dosya Dosyaa(){
Dosya this;
this=(Dosya)malloc(sizeof(struct DOSYA));
this->ReturnNumbers=&returnNumbers;

}

int* returnNumbers(Dosya dosya){
	 static int array[12];
	 int counter=0;
	
     FILE* ptr;
     char number;
     ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\src\\Sayilar.txt", "r");
 
    if (NULL == ptr) {
        // printf("file can't be opened \n");
     }
 
    printf("content of this file are \n");
 
     while (!feof(ptr)) {
         number = fgetc(ptr);
		
        printf("%c", (int)number);
		
		counter++;
		
     }
     fclose(ptr);
	 
	 // for(int i=0;i<12;i++){
			 // printf("%d",array[i]);
	 // }
	
	 return array;

}
