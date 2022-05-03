#ifndef KISI_H
#define KISI_H

struct KISI
{


	char* isim;
	float para;
	float turBasinaYatirilanParaOrani;
	int bahisSayisi;


	

	

	

	struct KISI *next;

	
};
typedef struct KISI *Kisi;
Kisi Kisii(char *, float, float, int);

#endif