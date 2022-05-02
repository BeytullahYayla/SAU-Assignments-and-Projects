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
  void (*AddKisi)(struct DOSYA* dosya,struct KISI* kisi);
  void (*DeleteKisiList)(struct DOSYA* dosya);
  void (*PrintKisiList)(struct DOSYA* dosya);
};
typedef struct DOSYA* Dosya;

Dosya Dosyaa();
int* returnNumbers(Dosya dosya);
struct Kisi* returnKisi(Dosya dosya);
void addKisi(Dosya dosya, Kisi kisi);
void deleteKisiList(Dosya dosya);
void printKisiList(Dosya dosya);
#endif 