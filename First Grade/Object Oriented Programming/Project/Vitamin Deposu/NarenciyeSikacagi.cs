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
    abstract class NarenciyeSikacagi :ISikacak
    {
       
        public virtual double NetGramajHesapla(Meyveler meyve)
        {
            throw new NotImplementedException();
        }

        public virtual double VitaminAHesapla(Meyveler meyve)
        {
            throw new NotImplementedException();
        }

        public virtual double VitaminCHesapla(Meyveler meyve)
        {
            throw new NotImplementedException();
        }
    }
}
