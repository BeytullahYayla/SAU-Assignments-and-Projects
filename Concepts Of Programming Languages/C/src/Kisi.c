#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>


Kisi Kisii(char* isim,float para,float turBasinaYatirilanParaOrani,int bahisSayisi){
	 Kisi this;
	 this=(Kisi)malloc(sizeof(struct KISI));
	this->isim=isim;
	this->para=para;
	this->turBasinaYatirilanParaOrani=turBasinaYatirilanParaOrani;
	this->bahisSayisi=bahisSayisi;

	this->next=NULL;
	
	


	return this;
}


