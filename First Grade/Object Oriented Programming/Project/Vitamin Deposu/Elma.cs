
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
    class Elma:KatiMeyveSikacagi
    {

        

        Meyveler elma = new Meyveler();
        
        

        //Diger meyvelerle ayni islemler yapilir
        //KatiMeyveSikacagindan gelen metotlar ezilir
        public override double NetGramajHesapla(Meyveler meyve)
        {
            Random rastgele = new Random();

            meyve.gramaj = rastgele.Next(70, 120);
            meyve.verim = rastgele.Next(80, 95);
            meyve.netGramaj= meyve.gramaj - ((meyve.gramaj * (100 - meyve.verim)) / 100);
            return meyve.netGramaj;
        }
        
        public override double VitaminAHesapla(Meyveler meyve)
        {
            meyve.vitaminA=(54 * NetGramajHesapla(elma)) / 100;
            return meyve.vitaminA;
            
        }
        public override double VitaminCHesapla(Meyveler meyve)
        {
            meyve.vitaminC = (NetGramajHesapla(elma)) / 20;
            return meyve.vitaminC;
        }
        public double VitaminA
        {
            get
            {
                return VitaminAHesapla(elma);
            }
            set
            {
                value = VitaminAHesapla(elma);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(elma);
            }
            set
            {
                value = VitaminCHesapla(elma);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(elma);
            }
            set
            {
                value = NetGramajHesapla(elma);
            }
        }
        

        







     


      
    }
}
