#ifndef KISI_H
#define KISI_H

struct KISI{
	
	char* (*GetIsim)();
	void (*SetIsim) (char*);
	
	double (*GetPara)();
	void (*SetPara) (double);
	
	//double (*GetTurBasinaYatirilanParaOrani)();
	// void (*SetTurBasinaYatirilanParaOrani) (double);
	
	int (*GetBahisSayisi)();
	void (*SetBahisSayisi) (int);
	
};
typedef struct KISI* Kisi;
Kisi Kisii(char*,double,double,int);
char* getIsim();
void setIsim(char*);

double getPara();
void setPara(double);

//double getTurBasinaYatirilanParaOrani();
// void setTurBasinaYatirilanParaOrani(double);

int getBahisSayisi();
void setBahisSayisi(int);

#endif