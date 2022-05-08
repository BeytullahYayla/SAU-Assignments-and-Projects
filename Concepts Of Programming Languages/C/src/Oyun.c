#include "Oyun.h"
#include "Kisi.h"
#include "Dosya.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
Oyun Oyunn(Kisi *kisiler, int *sayilar)//Oyun structı için constructor simülasyonu
{

    Oyun this;//this structı 
    this = (Oyun)malloc(sizeof(struct OYUN));//Bellekten this icin yer ayrılır
	this->DeleteOyun=&deleteOyun;//.h uzantılı dosyadaki fonksiyon göstericisi deleteOyun fonksiyonunun adresini gösterir
    this->kisiler = kisiler;//paramatreden gelen kisileri thisdeki kisilere ata
    this->sayilar = sayilar;//parametreden gelen sayilari sayilara ata
    this->masaParasi=0;//masaParasinin baslangic degerini 0 ata
    this->Basla = &basla;//Basla fonksiyon gostericisi basla fonksiyonunun adresini tutar
    return this;
}

void basla(const Oyun this)
{
   

    double kazanilanPara=0;
    double kaybedilenPara=0;
    Dosya dosya;
    dosya=Dosyaa();
    int kisiSayisi=dosya->ReturnNumberOfKisi(dosya);//Kişi sayısını döndürür
    int sayiSayisi=dosya->ReturnNumberOfSayi(dosya);//Sayılar.txtdeki sayıların kaç tane olduğunu döndürür
    int turSayisi = 0;
    int kalanKisiSayisi = kisiSayisi;
    Kisi enZenginKisi;//en zengin kisi olusturulur
    enZenginKisi=this->kisiler[0];//En zengin kisi baslangicta ilk kisidir
    int counter;//Döngüden çıkmak için kullanılan sayaç
    
	
    for (int i = 0; i < sayiSayisi; i++)//Her turda sayilar.txtdeki sayı şanslı sayı olur
    {

        
            
	
	
        
        
        for (int j = 0; j < kisiSayisi; j++)//Şanslı sayıyla kişilerin iddialarını karşılaştıracağımız for döngüsü
        {
           
                
            
            
            
           
                if (this->kisiler[j]->para >= 1000)//Eğer kisinin parası 1000den büyük veya eşitse oyuna devam edebilir
                {
                    
                    
                    
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
                else if (this->kisiler[j]->para < 1000)//Eğer kisinin parasi 1000den kucukse 
                {
                    
                    if (this->kisiler[j]->isActive==true)//Ve kisi o turda oyuna devam ediyorsa yani aktifse
                    {
						
                        this->kisiler[j]->isActive=false;//Oyundan elenir
                        counter++;//Sayaç bir artırılır
                        
                    }
                    
					
						continue;//Eğer kullanıcı aktif değilse bir şey yapmadan devam edilir
					
                    
                    
                    

                 
                }
            
          

             
        
       
        }
			
        
         
      
        
        
         
        turSayisi++;
		for (int k = 0; k < kisiSayisi; k++)//Diğer tur icin en zengin kisi bulunur
                    {
                        if (enZenginKisi->para<this->kisiler[k]->para)//Eger bir onceki turun en zengininin parası bu turdakinden kucukse yeni en zengini kisiler[k] ata
                        {
                            enZenginKisi=this->kisiler[k];
                        }
                        
                    }
        
	
		system("cls");//Konsol ekranını temizle
      
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
       
		
		 if(counter==kalanKisiSayisi){//Eğer kisilerin hepsi elenmişse
		//Oyun biter
				
				system("cls");//Konsol ekranını temizle
				printf("\t\t\t\t\t##########################################\n");
                 printf("\t\t\t\t\t##\t\ttur: %i \t\t##\n", turSayisi);
                 printf("\t\t\t\t\t##\tmasa parasi: %.2f\t##\n", this->masaParasi);
                 printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##--------------------------------------##\n");
              printf("\t\t\t\t\t##\t\tOYUN BITTI\t\t##\n");
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
				printf("\t\t\t\t\t##\t\t\t\t\t##\n");
				printf("\t\t\t\t\t##########################################\n");
				
            break;//Döngüden çıkılır
        
		
		}
		if(i==sayiSayisi-1){//Eger yapilacak baska tur kalmamisssa 
		//Oyun biter
			system("cls");
				printf("\t\t\t\t\t##########################################\n");
                 printf("\t\t\t\t\t##\t\tTUR: %i \t\t##\n", turSayisi);
                 printf("\t\t\t\t\t##\tMASA BAKIYESI: %.2f\t##\n", this->masaParasi);
                 printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##--------------------------------------##\n");
              printf("\t\t\t\t\t##\t\tOYUN BITTI\t\t##\n");
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
                printf("\t\t\t\t\t##\t\t\t\t\t##\n");
				printf("\t\t\t\t\t##\t\t\t\t\t##\n");
				printf("\t\t\t\t\t##########################################\n");
			
		}
        

       
       
       
    }
}
void deleteOyun(const Oyun this){//Oyun structinin kapladıgı yeri bellege iade ederiz
	if(this==NULL){//Eger bos bir parametre gelirse
		return;//bir sey yapma
		
	}
	free(this);//Bellekte ayrılan yeri serbest bırak
}