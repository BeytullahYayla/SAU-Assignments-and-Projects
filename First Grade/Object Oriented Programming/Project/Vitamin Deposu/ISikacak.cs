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
    interface ISikacak
    {
         
        //Bu arayuzde sadece sikacaga ait metotlar bulunur
        //parametre olarak meyve nesnesi alirlar.Cunku islem yapmak icin meyvenin ozellikleri lazim
        double NetGramajHesapla(Meyveler meyve);
        double VitaminAHesapla(Meyveler meyve);
        double VitaminCHesapla(Meyveler meyve);
         
    }
}
