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
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
                                    

namespace Vitamin_Deposu
{
    class Armut:KatiMeyveSikacagi
    {
        
          Meyveler armut = new Meyveler();



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
            meyve.vitaminA = (NetGramajHesapla(armut)) / 4;
            
            return meyve.vitaminA;
            
        }
        public override double VitaminCHesapla(Meyveler meyve)
        {
            meyve.vitaminC = (NetGramajHesapla(armut)) / 20;
            return meyve.vitaminC;
        }
        public  double VitaminA
        {
            get
            {
                return VitaminAHesapla(armut);
            }
            set
            {
                value = VitaminAHesapla(armut);
            }
        }
        public double VitaminC
        {
            get
            {
                return VitaminCHesapla(armut);
            }
            set
            {
                value = VitaminCHesapla(armut);
            }
        }
        public double netGramaj
        {
            get
            {
                return NetGramajHesapla(armut);
            }
            set
            {
                value = NetGramajHesapla(armut);
            }
        }
        

        







     


      
    }




  
    }

