#ifndef KISI_H
#define KISI_H

struct KISI{
	
	char* (*GetIsim)();
	void (*SetIsim) (char*);
	
	float (*GetPara)();
	void (*SetPara) (float);
	
	float (*GetYatirilanParaOrani)();
	void (*SetYatirilanParaOrani)(float);
	
	
	int (*GetBahisSayisi)();
	void (*SetBahisSayisi) (int);
	
};
typedef struct KISI* Kisi;
Kisi Kisii(char*,float,float,int);
char* getIsim();
void setIsim(char*);

float getPara();
void setPara(float);

float getYatirilanParaOrani();
void setYatirilanParaOrani(float);

int getBahisSayisi();
void setBahisSayisi(int);

#endif