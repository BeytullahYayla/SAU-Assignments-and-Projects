#include "Oyun.h"
#include "Kisi.h"
#include "Dosya.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
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
    printf("%s\n", "*************************************Kisiler*****************************************");

    float kazanilanPara=0;
    float kaybedilenPara=0;
    Dosya dosya;
    dosya=Dosyaa();
    float enBuyukPara=0;
    int turSayisi = 0;
    int kalanKisiSayisi = 1000;
    Kisi enZenginKisi;
    enZenginKisi=this->kisiler[0];
    int counter=0;
    for (int i = 0; i < 278; i++)
    {

        if (kalanKisiSayisi != 0)
        {
        for (int j = 0; j < 1000; j++)
        {
            
            int yatirilanPara=(this->kisiler[j]->para)*(this->kisiler[j]->turBasinaYatirilanParaOrani);
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
                        this->masaParasi-=kazanilanPara;
                        this->kisiler[j]->para+=kazanilanPara;
                        
                        
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
                    counter++;
                    continue;

                 
                }
            
          

             
        }
        }
        else if (kalanKisiSayisi==0)
        {
            break;
        }
        
        
         
        turSayisi++;
        kalanKisiSayisi-=counter;
        printf("%s\n", "#######Tur Sayisi########");
        printf("%d\n", turSayisi);
        printf("%s\n", "#######SansliSayi#######");
        printf("%d\n", this->sayilar[i]);
        printf("%s\n", "######Masa Parasi########");
        printf("%f\n", floor(this->masaParasi));
        
        printf("%s\n","#########En zengin Kisi########");
        printf("%s\n",enZenginKisi->isim);
        printf("%s\n","#########En zengin Kisi Para########");
        printf("%f\n",floor(enZenginKisi->para));
        
       
       
       
    }
}