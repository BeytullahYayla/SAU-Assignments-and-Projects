#ifndef KISI_H
#define KISI_H
#include <stdbool.h>
struct KISI
{


	char* isim;
	double para;
	float turBasinaYatirilanParaOrani;
	int bahisSayisi;
	void (*KisiYazdir)(struct KISI* kisi);
	bool isActive;
	

	

	

	

	
};
typedef struct KISI *Kisi;
Kisi Kisii(char *, double, float, int);
void kisiYazdir(Kisi kisi);

#endif