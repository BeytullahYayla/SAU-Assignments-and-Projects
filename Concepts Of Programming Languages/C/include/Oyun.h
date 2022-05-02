#ifndef OYUN_H
#define OYUN_H
#include "Kisi.h"
#include <stdlib.h>

struct OYUN{
    void (*Basla)(struct OYUN* oyun);
   
};

typedef struct OYUN* Oyun;
Oyun Oyunn(Kisi*,int*);
void basla(Oyun oyun);

#endif 