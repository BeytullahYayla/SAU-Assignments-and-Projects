#ifndef DOSYA_H
#define DOSYA_H
#include <string.h>
#include "Kisi.h"
struct DOSYA
{

  int* (*ReturnNumbers)(struct DOSYA* dosya);
  struct Kisi* (*ReturnKisi) (struct DOSYA* dosya);
  struct KISI* topOfList;
  struct KISI* endOfList;
  void (*DeleteItemFromArray)(struct DOSYA* dosya,Kisi* kisiler,int);
};
typedef struct DOSYA* Dosya;

Dosya Dosyaa();
void deleteItemFromArray(Dosya dosya,Kisi* kisiler,int);
int* returnNumbers(Dosya dosya);
struct Kisi* returnKisi(Dosya dosya);

#endif 