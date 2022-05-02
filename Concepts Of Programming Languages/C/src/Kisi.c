#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>

char* _isim;
float _para;
float _turBasinaYatirilanParaOrani;
int _bahisSayisi;
Kisi Kisii(char* isim,float para,float turBasinaYatirilanParaOrani,int bahisSayisi){
	 Kisi this;
	 this=(Kisi)malloc(sizeof(struct KISI));
	_isim=isim;
	_para=para;
	_turBasinaYatirilanParaOrani=turBasinaYatirilanParaOrani;
	_bahisSayisi=bahisSayisi;
	
	this->GetIsim=&getIsim;
	this->SetIsim=&setIsim;
	
	this->GetPara=&getPara;
	this->SetPara=&setPara;
	
	this->GetYatirilanParaOrani=&getYatirilanParaOrani;
	this->SetYatirilanParaOrani=&setYatirilanParaOrani;
	
	this->GetBahisSayisi=&getBahisSayisi;
	this->SetBahisSayisi=&setBahisSayisi;
	return this;
}

char* getIsim(){
	return _isim;
	
}
void setIsim(char* yeniIsim){
	_isim=yeniIsim;
	
}

float getPara(){
	
	return _para;
}
void setPara(float yeniPara){
	_para=yeniPara;
	
}
float getYatirilanParaOrani(){
	return _turBasinaYatirilanParaOrani;
}
void setYatirilanParaOrani(float yeni){
	_turBasinaYatirilanParaOrani=yeni;
}


int getBahisSayisi(){
	return _bahisSayisi;
}
void setBahisSayisi(int yeniBahisSayisi){
	_bahisSayisi=yeniBahisSayisi;
}