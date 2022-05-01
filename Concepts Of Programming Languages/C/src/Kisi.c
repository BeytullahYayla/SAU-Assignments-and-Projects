#include "Kisi.h"
#include <stdlib.h>
#include <stdio.h>

char* _isim;
double _para;
double _turBasinaYatirilanParaOrani;
int _bahisSayisi;
Kisi Kisii(char* isim,double para,double turBasinaYatirilanParaOrani,int bahisSayisi){
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
	
	//this->GetTurBasinaYatirilanParaOrani=&getTurBasinaYatirilanParaOrani;
	// this->SetTurBasinaYatirilanParaOrani=&setTurBasinaYatirilanParaOrani;
	
	this->GetBahisSayisi=&getBahisSayisi;
	this->SetBahisSayisi=&setBahisSayisi;
}

char* getIsim(){
	return _isim;
	
}
void setIsim(char* yeniIsim){
	_isim=yeniIsim;
	
}

double getPara(){
	
	return _para;
}
void setPara(double yeniPara){
	_para=yeniPara;
	
}

 //double getTurBasinaYatirilanPara(){
	 //return _turBasinaYatirilanParaOrani;
//}
// void setTurBasinaYatirilanPara(double yeniTurBasinaYatirilanParaOrani){
	// _turBasinaYatirilanParaOrani=yeniTurBasinaYatirilanParaOrani;
// }

int getBahisSayisi(){
	return _bahisSayisi;
}
void setBahisSayisi(int yeniBahisSayisi){
	_bahisSayisi=yeniBahisSayisi;
}