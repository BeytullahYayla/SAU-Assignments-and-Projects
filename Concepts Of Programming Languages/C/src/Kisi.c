#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>


Kisi Kisii(char* isim,double para,float turBasinaYatirilanParaOrani,int bahisSayisi){//Kisi olusturacak constructor
	 Kisi this;
	 this=(Kisi)malloc(sizeof(struct KISI));//Heap bellek bolgesinden alan tahsis et
	this->isim=isim;
	this->para=para;
	this->turBasinaYatirilanParaOrani=turBasinaYatirilanParaOrani;
	this->bahisSayisi=bahisSayisi;
	this->KisiYazdir=&kisiYazdir;//Fonksiyon gostericisini fonksiyon adresine ata
	this->isActive=true;
	
	
	


	return this;//Kisiyi geri dondur
}
void kisiYazdir(const Kisi this){
	//this yardımıyla kisiyi yazdir
	printf("%s\n",this->isim);
	printf("%f\n",this->para);
	printf("%f\n",this->turBasinaYatirilanParaOrani);
	printf("%d\n",this->bahisSayisi);
	

}



