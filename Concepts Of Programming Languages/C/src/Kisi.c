#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>


Kisi Kisii(char* isim,double para,float turBasinaYatirilanParaOrani,int bahisSayisi){
	 Kisi this;
	 this=(Kisi)malloc(sizeof(struct KISI));
	this->isim=isim;
	this->para=para;
	this->turBasinaYatirilanParaOrani=turBasinaYatirilanParaOrani;
	this->bahisSayisi=bahisSayisi;
	this->KisiYazdir=&kisiYazdir;
	this->isActive=true;
	
	
	


	return this;
}
void kisiYazdir(const Kisi this){
	printf("%s\n",this->isim);
	printf("%f\n",this->para);
	printf("%f\n",this->turBasinaYatirilanParaOrani);
	printf("%d\n",this->bahisSayisi);
	

}



