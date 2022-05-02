#include "Dosya.h"
#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Dosya Dosyaa()
{
	Dosya this;
	this = (Dosya)malloc(sizeof(struct DOSYA));
	this->topOfList=NULL;
	this->endOfList=NULL;
	this->ReturnNumbers = &returnNumbers;
	this->ReturnKisi = &returnKisi;
	this->DeleteKisiList=&deleteKisiList;
	return this;
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
int *returnNumbers(Dosya dosya)
{
	static int array[277];
	int counter = 0;

	FILE *ptr;
	char number;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\src\\Sayilar.txt", "r");

	if (NULL == ptr)
	{
		// printf("file can't be opened \n");
	}

	char line[500];
	while (fgets(line, sizeof(line), ptr))
	{

		remove_spaces(line);
		int number_line = atoi(line);
		array[counter] = number_line;
		

		counter++;
	}
	for (int i = 0; i < counter; i++)
	{
		printf("%d\n",array[i]);
	}
	

	return array;
}
struct Kisi* returnKisi(Dosya dosya)
{

	int counter = 0;
	int counter2 = 0;
	char *delimiter = "#";
	char *token;
	FILE *ptr;
	char number;

	char* isim;
	float para;
	float yatirilanParaOrani;
	int sansliSayi;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\src\\Kisiler.txt", "r");

	if (NULL == ptr)
	{
		 printf("file can't be opened \n");
	}
	Kisi* kisiler=(Kisi*)malloc(1000*sizeof(Kisi));
	char line[1000];
	while (fgets(line, sizeof(line), ptr))
	{
		
		token = strtok(line, delimiter);

		while (token != NULL)
		{
			
			if (counter2 == 0)
			{
				isim=token;
				
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
		printf("%d",kisiler[counter]->GetBahisSayisi());
		counter++;

	}
	for (int i = 0; i < 1000; i++)
	{
		printf("%s\n",kisiler[i]->GetIsim());
	}
	
	
	
	
	return kisiler;

}
void addKisi(Dosya dosya,Kisi kisi){
	if (dosya->topOfList==NULL)
	{
		dosya->topOfList=kisi;
		dosya->endOfList=kisi;
	}
	else{
		
		dosya->endOfList->next=kisi;
		dosya->endOfList=kisi;
	}
	

}
void printKisiList(Dosya dosya){

	Kisi tmp=dosya->topOfList;
	if (tmp==NULL)
	{
		printf("%s","Empty List");
	}
	else{
		while (tmp!=NULL)
	
		tmp->PrintKisi(tmp);
		tmp=tmp->next;
	
	
	}
	free(tmp);
	

}
void deleteKisiList(Dosya dosya){

	Kisi tmp=dosya->topOfList;
	while (dosya->endOfList->next!=0) {
	
	   tmp = dosya->topOfList;
       dosya->topOfList = dosya->topOfList->next;
	   tmp->DeleteKisi(tmp);
	   
	}
	
	

}
