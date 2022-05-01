#ifndef DOSYA_H
#define DOSYA_H
#include <string.h>
struct DOSYA
{

  int* (*ReturnNumbers)(struct DOSYA* dosya);
  
  
};
typedef struct DOSYA* Dosya;

Dosya Dosyaa();
int* returnNumbers(Dosya dosya);


#endif 