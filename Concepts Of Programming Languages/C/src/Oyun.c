#include "Oyun.h"
#include "Kisi.h"
#include "Dosya.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
Oyun Oyunn(Kisi *kisiler, int *sayilar)
{

    Oyun this;
    this = (Oyun)malloc(sizeof(struct OYUN));
    this->kisiler = kisiler;
    this->sayilar = sayilar;
    this->masaParasi=0;
    this->Basla = &basla;
    return this;
}

void basla(Oyun this)
{
   

    double kazanilanPara=0;
    double kaybedilenPara=0;
    Dosya dosya;
    dosya=Dosyaa();
    int kisiSayisi=dosya->ReturnNumberOfKisi(dosya);
    int sayiSayisi=dosya->ReturnNumberOfSayi(dosya);
    double enBuyukPara=0;
    int turSayisi = 0;
    int kalanKisiSayisi = kisiSayisi;
    Kisi enZenginKisi;
    enZenginKisi=this->kisiler[0];
    int counter;
    printf("%d\n",kisiSayisi);
    for (int i = 0; i < sayiSayisi; i++)
    {

        if (counter!=kisiSayisi)
        {
            /* code */
        
        
        for (int j = 0; j < kisiSayisi; j++)
        {
           
                /* code */
            
            
            
           
                if (this->kisiler[j]->para >= 1000)
                {
                    for (int k = 0; k < 1000; k++)
                    {
                        if (enZenginKisi->para<this->kisiler[k]->para)
                        {
                            enZenginKisi=this->kisiler[k];
                        }
                        
                    }
                    
                    
                    if (this->kisiler[j]->bahisSayisi == this->sayilar[i]) // Eger kisi ilgili turda sayıyı tutturmuş ise
                    {
                       
                        kazanilanPara=(this->kisiler[j]->para*this->kisiler[j]->turBasinaYatirilanParaOrani)*9;
                        this->kisiler[j]->para+=kazanilanPara;
                        this->masaParasi-=kazanilanPara;
                        
                        
                        
                    }
                    else if (this->kisiler[j]->bahisSayisi != this->sayilar[i]) // Eger kisi sayiyi tutturamamissa
                    {
                         
                        kaybedilenPara=(this->kisiler[j]->para)*(this->kisiler[j]->turBasinaYatirilanParaOrani);
                        this->masaParasi+=kaybedilenPara;
                        this->kisiler[j]->para-=kaybedilenPara;
                        
                    }
                }
                else if (this->kisiler[j]->para < 1000)
                {
                    // Dosya dosya = Dosyaa();
                    // dosya->DeleteItemFromArray(dosya, this->kisiler, j);
                    // counter++;
                    if (this->kisiler[j]->isActive==true)
                    {
                        this->kisiler[j]->isActive=false;
                        counter++;
                        
                    }
                    
                    
                    
                    continue;

                 
                }
            
          

             
        
       
        }
        }
        
         else if (counter==kisiSayisi)
        {
            
                printf("\t\t\t\t\t##\t\tTUR: %i \t\t##\n", turSayisi);
                printf("\t\t\t\t\t##\tMASA PARASI: %.2f\t##\n", this->masaParasi);
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##--------------------------------------##\n");
                printf("\t\t\t\t\t##\t\tOYUN BITTI\t\t##\n");
                
                printf("\t\t\t\t\t##########################################\n");
            break;
        }
        
       printf("%d\n",counter);
        
        
         
        turSayisi++;
        
 
        printf("%d",counter);
        printf("\t\t\t\t\t##########################################\n");
                printf("\t\t\t\t\t##\t\tSANSLI SAYI: %i\t\t##\n", this->sayilar[i]);
                printf("\t\t\t\t\t##########################################\n");
                printf("\t\t\t\t\t##########################################\n");
                printf("\t\t\t\t\t##\t\tTUR: %i \t\t##\n", turSayisi);
                printf("\t\t\t\t\t##\tMASA PARASI: %.2f\t##\n", this->masaParasi);
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##--------------------------------------##\n");
                printf("\t\t\t\t\t##\t\tEN ZENGIN KISI\t\t##\n");
                printf("\t\t\t\t\t##\t\t%s\t\t##\n", enZenginKisi->isim);
                printf("\t\t\t\t\t##\tBAKIYESI: %.2f\t\t##\n", enZenginKisi->para);
                printf("\t\t\t\t\t##########################################\n");
       
        

       
       
       
    }
}