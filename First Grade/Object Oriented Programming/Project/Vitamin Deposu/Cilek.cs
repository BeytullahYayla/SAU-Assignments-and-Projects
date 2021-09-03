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
    class Cilek:KatiMeyveSikacagi
    {
        //Diger meyvelerle ayni islemler yapilir
        //KatiMeyveSikacagindan gelen metotlar ezilir
        Meyveler cilek = new Meyveler();
        public override double NetGramajHesapla(Meyveler meyve)
        {
            Random rastgele = new Random();

            meyve.gramaj = rastgele.Next(70, 120);
            meyve.verim = rastgele.Next(80, 95);
            meyve.netGramaj = meyve.gramaj - ((meyve.gramaj * (100 - meyve.verim)) / 100);
            return meyve.netGramaj;
        }
        public override double VitaminAHesapla(Meyveler meyve)
        {
            meyve.vitaminA = (12 * NetGramajHesapla(cilek)) / 100;
            
            return meyve.vitaminA;

        }
        public override double VitaminCHesapla(Meyveler meyve)
        {
            meyve.vitaminC = (3 * NetGramajHesapla(cilek)) / 5;
            return meyve.vitaminC;
        }
        public double VitaminA
        {
            get
            {
                return VitaminAHesapla(cilek);
            }
            set
            {
                value = VitaminAHesapla(cilek);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(cilek);
            }
            set
            {
                value = VitaminCHesapla(cilek);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(cilek);
            }
            set
            {
                value = NetGramajHesapla(cilek);
            }
        }
     

       

        
    }
}
