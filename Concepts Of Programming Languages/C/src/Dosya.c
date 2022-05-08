#include "Dosya.h"
#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Dosya Dosyaa()
{
	Dosya this;
	this = (Dosya)malloc(sizeof(struct DOSYA));
	this->ReturnNumbers = &returnNumbers;
	this->ReturnKisi = &returnKisi;
	this->DeleteItemFromArray=&deleteItemFromArray;
	this->ReturnNumberOfKisi=&returnNumberOfKisi;
	this->ReturnNumberOfSayi=&returnNumberOfSayi;
	this->DeleteDosya=&deleteDosya;
	return this;
}
int returnNumberOfKisi(const Dosya this){
	char line[500];
	FILE *ptr;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Kisiler.txt", "r");
	int counter=0;
	while (fgets(line, sizeof(line), ptr))
	{
		
			

		
		
        
		counter++;

	}
	printf("%d",counter);
	return counter;

}

int returnNumberOfSayi(const Dosya this){
	char line[500];
	FILE *ptr;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Sayilar.txt", "r");
	int counter=0;
	while (fgets(line, sizeof(line), ptr))
	{
		
			

		
		
        
		counter++;

	}
	return counter;

}
void remove_spaces(char *s)
{
	char *d = s;
	do
	{
		while (*d == ' ')
		{
			++d;
		}
	} while (*s++ = *d++);
}
int *returnNumbers(const Dosya this)
{
	int size=returnNumberOfSayi(this);
	int* array=(int*)malloc(sizeof(int)*returnNumberOfSayi(this));
	int counter = 0;

	FILE *ptr;
	char number;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Sayilar.txt", "r");

	if (NULL == ptr)
	{
		// printf("file can't be opened \n");
	}

	char line[1000];
	while (fgets(line, sizeof(line), ptr))
	{

		remove_spaces(line);
		int number_line = atoi(line);
		array[counter] = number_line;
		

		counter++;
	}
	
	

	return array;
}
void deleteItemFromArray(Dosya this,Kisi* kisiler,int position){
	int i;
	int size=1000;
	for(i=position-1; i<size-1; i++)
        {
            kisiler[i] = kisiler[i + 1];
        }

       
        

}
struct Kisi* returnKisi(Dosya this)
{

	int counter = 0;
	int counter2 = 0;
	char *delimiter = "#";
	char *token;
	FILE *ptr;
	char number;

	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Kisiler.txt", "r");

	if (NULL == ptr)
	{
		 printf("file can't be opened \n");
	}
	
	char line[1000];
	Kisi* kisiler=(Kisi*)malloc(returnNumberOfKisi(this)*sizeof(Kisi));
	
	while (fgets(line, sizeof(line), ptr))
	{
			char* isim=(char*)malloc(200);
			float para;
			float yatirilanParaOrani;
			int sansliSayi;
			token = strtok(line, delimiter);

		while (token != NULL)
		{
			

			if (counter2 == 0)
			{
				strcpy(isim,token);
				
			}
			else if (counter2 == 1)
			{
				para=atof(token);
			}
			else if (counter2 == 2)
			{
				yatirilanParaOrani=atof(token);
			}
			else if (counter2 == 3)
			{
				sansliSayi=atoi(token);
			}
			
			token = strtok(NULL, delimiter);
			counter2++;
		}
		counter2=0;
		Kisi kisi=Kisii(isim,para,yatirilanParaOrani,sansliSayi);
		
	    kisiler[counter]=kisi;
        
		counter++;

	}

	
	
	
	
	
	return kisiler;

}
void deleteDosya(const Dosya this){
	if(this==NULL){
		return;
	}
	free(this);
	
}

