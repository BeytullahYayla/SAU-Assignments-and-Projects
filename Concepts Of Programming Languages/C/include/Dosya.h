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
};
typedef struct DOSYA* Dosya;

Dosya Dosyaa();
int* returnNumbers(Dosya dosya);
struct Kisi* returnKisi(Dosya dosya);

#endif 