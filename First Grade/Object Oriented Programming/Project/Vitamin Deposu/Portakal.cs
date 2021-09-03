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
    class Portakal:NarenciyeSikacagi
    {

        Meyveler portakal = new Meyveler();



        //Diger meyvelerle ayni islemler yapilir
        //KatiMeyveSikacagindan gelen metotlar ezilir
        public override double NetGramajHesapla(Meyveler meyve)//Net Gramaj Hesaplanir
        {
            Random rastgele = new Random();

            meyve.gramaj = rastgele.Next(70, 120);
            meyve.verim = rastgele.Next(30, 70);
            meyve.netGramaj = meyve.gramaj - ((meyve.gramaj * (100 - meyve.verim)) / 100);
            return meyve.netGramaj;
        }

        public override double VitaminAHesapla(Meyveler meyve)
        {
            meyve.vitaminA = (2.25 * NetGramajHesapla(portakal));
            

            return meyve.vitaminA;

        }
        public override double VitaminCHesapla(Meyveler meyve)
        {
            meyve.vitaminC =(45 * NetGramajHesapla(portakal)) / 100;
            return meyve.vitaminC;
        }
        public double VitaminA
        {
            get
            {
                return VitaminAHesapla(portakal);
            }
            set
            {
                value = VitaminAHesapla(portakal);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(portakal);
            }
            set
            {
                value = VitaminCHesapla(portakal);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(portakal);
            }
            set
            {
                value = NetGramajHesapla(portakal);
            }
        }

    }
}
