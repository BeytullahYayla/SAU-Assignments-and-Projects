#ifndef OYUN_H
#define OYUN_H
#include "Kisi.h"
#include <stdlib.h>

struct OYUN{
    void (*Basla)(struct OYUN* oyun);
	void (*DeleteOyun)(struct OYUN* oyun);
    Kisi* kisiler;
    int* sayilar;
    double masaParasi; 
   
};

typedef struct OYUN* Oyun;
Oyun Oyunn(Kisi*,int*);
void basla(const Oyun oyun);
void deleteOyun(const Oyun oyun);

#endif 