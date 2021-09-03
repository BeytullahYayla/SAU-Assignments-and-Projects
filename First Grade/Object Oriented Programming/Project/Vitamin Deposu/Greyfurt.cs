           /****************************************************************************
           **				 	       SAKARYA ÜNİVERSİTESİ                          **		
           **				  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ              **	
           **				       BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ                    **	
           **				      NESNEYE DAYALI PROGRAMLAMA DERSİ                   **	
           **				 	       2020-2021 BAHAR DÖNEMİ                        **	
           **	                                                                     **	
           **				        ÖDEV NUMARASI: PROJE                             **	
           **				        ÖĞRENCİ ADI: Beytullah YAYLA                     **	
           **				        ÖĞRENCİ NUMARASI: b201210008                     **	
           **                      DERSİN ALINDIĞI GRUP: 1B                         **     
          ****************************************************************************/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vitamin_Deposu
{
    class Greyfurt:NarenciyeSikacagi
    {
        Meyveler greyfurt = new Meyveler();




        public override double NetGramajHesapla(Meyveler meyve)//Narenciye Sikacagindaki metot ezilerek net Gramaj hesaplanir
        {
            Random rastgele = new Random();

            meyve.gramaj = rastgele.Next(70, 120);//70 120 arasinda meyvenin rastgele gramajı olusur
            meyve.verim = rastgele.Next(30, 70);//Verim rastgele 30 ve 70 arasinda olusur
            meyve.netGramaj = meyve.gramaj - ((meyve.gramaj * (100 - meyve.verim)) / 100);
            return meyve.netGramaj;//meyvenin netgramaji geri dondurulur
        }

        public override double VitaminAHesapla(Meyveler meyve)////Narenciye Sikacagindaki metot ezilerek VitaminA hesaplanir
        {
            meyve.vitaminA = (3 * NetGramajHesapla(greyfurt)) / 100;
            

            return meyve.vitaminA;

        }
        public override double VitaminCHesapla(Meyveler meyve)//Narenciye Sikacagindaki metot ezilerek VitaminC hesaplanir
        {
            meyve.vitaminC = (44 * NetGramajHesapla(greyfurt)) / 100;
            return meyve.vitaminC;
        }
        public double VitaminA
        {
            get
            {
                return VitaminAHesapla(greyfurt);
            }
            set
            {
                value = VitaminAHesapla(greyfurt);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(greyfurt);
            }
            set
            {
                value = VitaminCHesapla(greyfurt);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(greyfurt);
            }
            set
            {
                value = NetGramajHesapla(greyfurt);
            }
        }
    }
}
