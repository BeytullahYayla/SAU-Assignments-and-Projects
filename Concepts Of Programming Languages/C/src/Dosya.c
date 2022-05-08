#include "Dosya.h"
#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Dosya Dosyaa()//Constructor benzetimi
{
	Dosya this;
	this = (Dosya)malloc(sizeof(struct DOSYA));//Bellekten yapı için yer tahsis edilir
	//Fonksiyon göstericileri ilgili fonksiyonların adreslerine atanır
	this->ReturnNumbers = &returnNumbers;
	this->ReturnKisi = &returnKisi;
	this->DeleteItemFromArray=&deleteItemFromArray;
	this->ReturnNumberOfKisi=&returnNumberOfKisi;
	this->ReturnNumberOfSayi=&returnNumberOfSayi;
	this->DeleteDosya=&deleteDosya;
	return this;//Yapı geri dondurulur
}
int returnNumberOfKisi(const Dosya this){//Dosyadan okunan kisilerin sayisini donduren fonksiyon
	char line[500];
	FILE *ptr;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Kisiler.txt", "r");
	int counter=0;//Sayaç
	while (fgets(line, sizeof(line), ptr))//Satır satır okuma işlemi 
	{
		
			

		
		
        
		counter++;//Her satırda sayacı bir arttır

	}
	
	return counter;//Sayıyı geri dondur

}

int returnNumberOfSayi(const Dosya this){//Dosyadan okunan sayilarin sayisini dondurur
	char line[1000];
	FILE *ptr;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Sayilar.txt", "r");
	int counter=0;//Sayaç
	while (fgets(line, sizeof(line), ptr))
	{
		
			

		
		
        
		counter++;//her satır için sayacı bir artir

	}
	return counter;//sayaci geri dondur

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
int *returnNumbers(const Dosya this)//Sayilari dondurecek fonksiyon
{
	
	int* array=(int*)malloc(sizeof(int)*returnNumberOfSayi(this));//Sayilarin tutulacağı dizi
	int counter = 0;

	FILE *ptr;
	char number;
	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Sayilar.txt", "r");

	if (NULL == ptr)
	{
		// printf("file can't be opened \n");
	}

	char line[1000];
	while (fgets(line, sizeof(line), ptr))//Satır satır okuma
	{

		remove_spaces(line);//Satırdaki boşlukları uzaklaştır
		int number_line = atoi(line);//satırdaki sayıyı int tipine çevir
		array[counter] = number_line;//diziye ata
		

		counter++;
	}
	
	

	return array;//diziyi dondur
}
void deleteItemFromArray(Dosya this,Kisi* kisiler,int position){
	int i;
	int size=1000;
	for(i=position-1; i<size-1; i++)
        {
            kisiler[i] = kisiler[i + 1];
        }

       
        

}
struct Kisi* returnKisi(Dosya this)//Kisileri dondurecek fonksiyon
{

	int counter = 0;
	int counter2 = 0;
	char *delimiter = "#";//Kısıtlayıcı
	char *token;
	FILE *ptr;
	char number;

	ptr = fopen("C:\\Users\\ASUS\\Documents\\GitHub\\SAU-Assignments-and-Projects\\Concepts Of Programming Languages\\C\\doc\\Kisiler.txt", "r");

	if (NULL == ptr)
	{
		 printf("file can't be opened \n");
	}
	
	char line[1000];
	Kisi* kisiler=(Kisi*)malloc(returnNumberOfKisi(this)*sizeof(Kisi));//Kisiler dizisi icin kisi sayisi kadar yer ayiriyoruz
	
	while (fgets(line, sizeof(line), ptr))
	{
			char* isim=(char*)malloc(200);
			float para;
			float yatirilanParaOrani;
			int sansliSayi;
			token = strtok(line, delimiter);//stringi uygun kısıtlayıcıya göre parçalıyoruz

		while (token != NULL)
		{
			

			if (counter2 == 0)//sayac 0 olursa isimdir
			{
				strcpy(isim,token);
				
			}
			else if (counter2 == 1)//1 olursa paradır
			{
				para=atof(token);
			}
			else if (counter2 == 2)//2 olursa orandır
			{
				yatirilanParaOrani=atof(token);
			}
			else if (counter2 == 3)//3 olursa sanslı sayıdır
			{
				sansliSayi=atoi(token);
			}
			
			token = strtok(NULL, delimiter);
			counter2++;//counter2 yi arttir
		}
		counter2=0;//her dongude 0a eşitle
		Kisi kisi=Kisii(isim,para,yatirilanParaOrani,sansliSayi);//Yeni bir kisi olustur buldugumuz degerler ile
		
	    kisiler[counter]=kisi;//dizinin ilgili dizisine ata
        
		counter++;

	}

	
	
	
	
	
	return kisiler;//kisileri geri dondur

}
void deleteDosya(const Dosya this){//Heap bellek bolgesindeki alanı serbest bırakır
	if(this==NULL){
		return;
	}
	free(this);//Null değilse serbest bırak
	
}

