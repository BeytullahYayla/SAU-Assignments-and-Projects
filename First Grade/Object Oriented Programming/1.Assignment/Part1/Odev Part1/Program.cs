/****************************************************************************
**				        	SAKARYA ÜNİVERSİTESİ
**				  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				       BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				      NESNEYE DAYALI PROGRAMLAMA DERSİ
**			        		2020-2021 BAHAR DÖNEMİ
**	
**				       ÖDEV NUMARASI..........:1
**				       ÖĞRENCİ ADI............:Beytullah YAYLA
**				       ÖĞRENCİ NUMARASI.......:B201210008
**                     DERSİN ALINDIĞI GRUP...:B
****************************************************************************/




using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Odev_Part1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Ayri ayri 8 tane sutun olsuturdum

            char[] sutunlar0 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//0.sutun
            char[] sutunlar1 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//1.sutun
            char[] sutunlar2 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//2.sutun
            char[] sutunlar3 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//3.sutun
            char[] sutunlar4 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//4.sutun
            char[] sutunlar5 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//5.sutun
            char[] sutunlar6 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//6.sutun
            char[] sutunlar7 = new char[8] { '0', '0', '0', '0', '0', '0', '0', '0' };//7.sutun
            Random rastgele_satir = new Random();//Rastgele bir sayi uretiyorum

            //Her satir icin farkli bir rastgele sayi

            int rastgele = rastgele_satir.Next(0, 8);
            int rastgele2 = rastgele_satir.Next(0, 8);
            int rastgele3 = rastgele_satir.Next(0, 8);
            int rastgele4 = rastgele_satir.Next(0, 8);
            int rastgele5 = rastgele_satir.Next(0, 8);
            int rastgele6 = rastgele_satir.Next(0, 8);
            int rastgele7 = rastgele_satir.Next(0, 8);
            int rastgele8 = rastgele_satir.Next(0, 8);

            for (int i = 0; i < 8; i++)//0. sutun icin (her sutun 8 karakterden olusuyor)
            {
                while (rastgele != rastgele2 && rastgele != rastgele3 && rastgele == rastgele5 && rastgele == rastgele6 && rastgele == rastgele7 && rastgele == rastgele8)//Uretilen herhangi bir sayi ile ayni olursa 
                {
                    rastgele = rastgele_satir.Next(0, 8);//Sayi farkli olana kadar tekrar uretilir
                }

                if (rastgele == i)//Eger o sutunun i.elemani rastgele sayiya esit ise oraya bir kale yerlestiriliyor
                {
                    sutunlar0[i] = 'K';
                }


                Console.WriteLine(sutunlar0[i]);//Satranc tahtasi cizdiriliyor


            }

            for (int i = 0; i < 8; i++)//1.sutun icin
            {
                while (rastgele2 == rastgele || rastgele2 == rastgele3 || rastgele2 == rastgele5 || rastgele2 == rastgele6 || rastgele2 == rastgele7 || rastgele2 == rastgele8)//Uretilen herhangi bir sayi ile ayni olursa 
                {
                    rastgele2 = rastgele_satir.Next(0, 8);//Sayi farkli olana kadar tekrar uretilir
                }
                Console.SetCursorPosition(2, i);//Kursorun pozisyonu xekseninde 2 y ekseninde her defasinda i'ye ayarlanir(yukaridan asagi gitmesi icin)
                if (rastgele2 == i)//Eger o sutunun i.elemani rastgele sayiya esit ise oraya bir kale yerlestiriliyor
                {
                    sutunlar1[i] = 'K';
                }



                Console.WriteLine(sutunlar1[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)//2.sutun icin
            {
                while (rastgele3 == rastgele || rastgele3 == rastgele2 || rastgele3 == rastgele4 || rastgele3 == rastgele5 || rastgele3 == rastgele6 || rastgele3 == rastgele7 || rastgele3 == rastgele8)//Uretilen herhangi bir sayi ile ayni olursa 
                {
                    rastgele3 = rastgele_satir.Next(0, 8);//Sayi farkli olana kadar tekrar uretilir
                }
                Console.SetCursorPosition(4, i);//Kusorun pozisyonu x ekseninde 4 y'de i ye ayarlanır(yukaridan asagi yazdirmasi icin)
                if (rastgele3 == i)//rastgele 3 i ye esit ise oraya bir kale yerlestirilir
                {
                    sutunlar2[i] = 'K';
                }
                Console.WriteLine(sutunlar2[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)//3.sutun icin 
            {
                while (rastgele4 == rastgele || rastgele4 == rastgele2 || rastgele4 == rastgele3 || rastgele4 == rastgele5 || rastgele4 == rastgele6 || rastgele4 == rastgele7 || rastgele4 == rastgele8)//Uretilen herhangi bir sayi ile ayni olursa 
                {
                    rastgele4 = rastgele_satir.Next(0, 8);//Sayi farkli olana kadar tekrar uretilir
                }
                Console.SetCursorPosition(6, i);//Kursorun pozisyonu x'te 6'ya y'de iye ayarlanir(yukaridan asagiya yazdirmasi icin)
                if (rastgele4 == i)//rastgele 4 i ye esit ise oraya bir kale yerlestirilir
                {
                    sutunlar3[i] = 'K';
                }
                Console.WriteLine(sutunlar3[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)//4.sutun icin 
            {
                while (rastgele5 == rastgele || rastgele5 == rastgele2 || rastgele5 == rastgele3 || rastgele5 == rastgele4 || rastgele5 == rastgele6 || rastgele5 == rastgele7 || rastgele5 == rastgele8)//Uretilen herhangi bir sayi ile ayni olursa 
                {
                    rastgele5 = rastgele_satir.Next(0, 8);//Sayi farkli olana kadar tekrar uretilir 
                }
                Console.SetCursorPosition(8, i);//Kursorun pozisyonu x'te 6'ya y'de iye ayarlanir(yukaridan asagiya yazdirmasi icin)
                if (rastgele5 == i)//rastgele 5 i ye esit ise oraya bir kale yerlestirilir
                {
                    sutunlar4[i] = 'K';
                }
                Console.WriteLine(sutunlar4[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)//5.sutun icin 
            {
                while (rastgele6 == rastgele || rastgele6 == rastgele2 || rastgele6 == rastgele3 || rastgele6 == rastgele4 || rastgele6 == rastgele5 || rastgele6 == rastgele7 || rastgele6 == rastgele8)//Eger sayilardan herhangi biri birbirine esitse 
                {
                    rastgele6 = rastgele_satir.Next(0, 8);  //Rastgele 6 tekrar olusturulur
                }
                Console.SetCursorPosition(10, i);//Kursor pozisyonu x'te 10 y'de i olarak ayarlanır
                if (rastgele6 == i)//Rastgele 6 i'ye esit ise oraya bir kale yerlestirilir 
                {
                    sutunlar5[i] = 'K';
                }
                Console.WriteLine(sutunlar5[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)//6. sutun icin
            {
                while (rastgele7 == rastgele || rastgele7 == rastgele2 || rastgele7 == rastgele3 || rastgele7 == rastgele4 || rastgele7 == rastgele5 || rastgele7 == rastgele6 || rastgele7 == rastgele8)//Eger sayilardan herhangi biri birbirine esitse 
                {
                    rastgele7 = rastgele_satir.Next(0, 8);//Rastgele 6 tekrar olusturulur
                }
                Console.SetCursorPosition(12, i);//Kursor pozisyonu x'te 12 y'de i olarak ayarlanir
                if (rastgele7 == i)//Rastgele 7 i'ye esit ise oraya bir kale yerlestirilir.
                {
                    sutunlar6[i] = 'K';
                }
                Console.WriteLine(sutunlar6[i]);//Sutun cizdirilir
            }
            for (int i = 0; i < 8; i++)///8.sutun icin
            {
                while (rastgele8 == rastgele || rastgele8 == rastgele2 || rastgele8 == rastgele3 || rastgele8 == rastgele4 || rastgele8 == rastgele5 || rastgele8 == rastgele6 || rastgele8 == rastgele7)//Eger sayilardan herhangi biri birbirine esitse 
                {
                    rastgele8 = rastgele_satir.Next(0, 8);//Rastgele 8 tekrar olusturulur
                }
                Console.SetCursorPosition(14, i);//Kursor pozisyonu x'te 16 y'de i olarak ayarlanir
                if (rastgele8 == i)//Rastgele 8 i'ye esit ise oraya bir kale yerlestirilir.
                {
                    sutunlar7[i] = 'K';
                }
                Console.WriteLine(sutunlar7[i]);//Sutun cizdirilir.
            }



        }
    }
}



