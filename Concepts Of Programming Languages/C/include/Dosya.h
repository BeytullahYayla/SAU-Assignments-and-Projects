#ifndef DOSYA_H
#define DOSYA_H
#include <string.h>
#include "Kisi.h"
struct DOSYA
{

  int* (*ReturnNumbers)(struct DOSYA* dosya);
  struct Kisi* (*ReturnKisi) (struct DOSYA* dosya);
  void (*DeleteItemFromArray)(struct DOSYA* dosya,Kisi* kisiler,int);
  int (*ReturnNumberOfKisi)(struct DOSYA* dosya);
  int (*ReturnNumberOfSayi)(struct DOSYA* dosya);
  void (*DeleteDosya)(struct DOSYA* dosya);
};
typedef struct DOSYA* Dosya;

Dosya Dosyaa();
void deleteItemFromArray(const Dosya dosya,Kisi* kisiler,int);
int* returnNumbers(const Dosya dosya);
struct Kisi* returnKisi(const Dosya dosya);
int returnNumberOfKisi(const Dosya dosya);
int returnNumberOfSayi(const Dosya dosya);
void deleteDosya(const Dosya dosya);
#endif 