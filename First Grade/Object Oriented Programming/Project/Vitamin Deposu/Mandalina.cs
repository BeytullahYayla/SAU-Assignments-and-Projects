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
    class Mandalina:NarenciyeSikacagi
    {

        Meyveler mandalina = new Meyveler();



        //Diger meyvelerle ayni islemler yapilir
        //KatiMeyveSikacagindan gelen metotlar ezilir
        public override double NetGramajHesapla(Meyveler meyve)//Narenciye Sikacagindaki metot ezilerek net Gramaj Hesaplanir
        {
            Random rastgele = new Random();

            meyve.gramaj = rastgele.Next(70, 120);
            meyve.verim = rastgele.Next(30, 70);
            meyve.netGramaj = meyve.gramaj - ((meyve.gramaj * (100 - meyve.verim)) / 100);
            return meyve.netGramaj;
        }

        public override double VitaminAHesapla(Meyveler meyve)//Narenciye Sikacagindaki metot ezilerek VitaminA Hesaplanir
        {
            meyve.vitaminA = (6.81 * NetGramajHesapla(mandalina));
           

            return meyve.vitaminA;

        }
        public override double VitaminCHesapla(Meyveler meyve)//Narenciye Sikacagindaki metot ezilerek VitaminC Hesaplanir
        {
            meyve.vitaminC =  (26 * NetGramajHesapla(mandalina)) / 100;
            return meyve.vitaminC;
        }
        public double VitaminA
        {
            get
            {
                return VitaminAHesapla(mandalina);
            }
            set
            {
                value = VitaminAHesapla(mandalina);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(mandalina);
            }
            set
            {
                value = VitaminCHesapla(mandalina);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(mandalina);
            }
            set
            {
                value = NetGramajHesapla(mandalina);
            }
        }



        
    }
}
