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
    this->Basla = &basla;
    return this;
}

void basla(Oyun this)
{
    printf("%s\n", "*************************************Kisiler*****************************************");

    float kazanilanPara;
    float kaybedilenPara;
    float masaParasi = 0;
    float enBuyukPara;
    int turSayisi = 0;
    int kalanKisiSayisi = 1000;
    Kisi enZenginKisi;
    
    for (int i = 0; i < 277; i++)
    {

        
        for (int j = 0; j < kalanKisiSayisi; j++)
        {
            
            if (kalanKisiSayisi != 0)
            {
                if (this->kisiler[j]->para >= 1000)
                {
                    if (this->kisiler[j]->bahisSayisi == this->sayilar[i]) // Eger kisi ilgili turda sayıyı tutturmuş ise
                    {
                        kazanilanPara = (this->kisiler[j]->turBasinaYatirilanParaOrani) * 10 * (this->kisiler[j]->para);
                        masaParasi -= kazanilanPara;
                        this->kisiler[j]->para = (this->kisiler[j]->para) + kazanilanPara; // Yatirdigi paranin 10 katini kazanir
                        if(this->kisiler[j]->para>=enBuyukPara){
                            enZenginKisi=Kisii(this->kisiler[j]->isim,this->kisiler[j]->para,this->kisiler[j]->turBasinaYatirilanParaOrani,this->kisiler[j]->bahisSayisi);
                            
                            enBuyukPara=this->kisiler[j]->para;
                        }
                    }
                    else if (this->kisiler[j]->bahisSayisi != this->sayilar[i]) // Eger kisi sayiyi tutturamamissa
                    {
                        kaybedilenPara = (this->kisiler[j]->turBasinaYatirilanParaOrani) * (this->kisiler[j]->para);
                        masaParasi += kaybedilenPara;
                        this->kisiler[j]->para = (this->kisiler[j]->para) - kaybedilenPara;
                         if(this->kisiler[j]->para>enBuyukPara){
                            enZenginKisi=Kisii(this->kisiler[j]->isim,this->kisiler[j]->para,this->kisiler[j]->turBasinaYatirilanParaOrani,this->kisiler[j]->bahisSayisi);
                            enBuyukPara=this->kisiler[j]->para;
                        }
                    }
                }
                else if (this->kisiler[j]->para < 1000)
                {
                    Dosya dosya = Dosyaa();
                    dosya->DeleteItemFromArray(dosya, this->kisiler, j);
                    kalanKisiSayisi--;
                }
            }
            else if(kalanKisiSayisi == 0)
                {
                    break;
                }

            //  else if (this->kisiler[j]->para < 1000)
            // {
            //     printf("%s\n","Para 1000den az...");
            //     printf("%f\n",this->kisiler[j]->para);

            // }
        }
        turSayisi++;
        printf("%s\n", "#######Tur Sayisi########");
        printf("%d\n", turSayisi);
        printf("%s\n", "#######SansliSayi#######");
        printf("%d\n", this->sayilar[i]);
        printf("%s\n", "######Masa Parasi########");
        printf("%f\n", ceil(masaParasi));
        
        printf("%s\n","#########En zengin Kisi########");
        printf("%s\n",enZenginKisi->isim);
        printf("%s\n","#########En zengin Kisi Para########");
        printf("%f\n",ceil(enZenginKisi->para));
        
       
       
    }
}