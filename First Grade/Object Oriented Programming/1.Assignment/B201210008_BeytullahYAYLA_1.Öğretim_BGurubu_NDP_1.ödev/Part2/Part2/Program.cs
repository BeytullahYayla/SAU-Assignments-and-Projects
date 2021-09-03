/****************************************************************************
**				          SAKARYA ÜNİVERSİTESİ
**		         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**		               BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                    NESNEYE DAYALI PROGRAMLAMA DERSİ
**			               2020-2015 BAHAR DÖNEMİ
**	
**			             ÖDEV NUMARASI..........:1
**				         ÖĞRENCİ ADI............:Beytullah YAYLA
**				         ÖĞRENCİ NUMARASI.......:B201210008
**                       DERSİN ALINDIĞI GRUP...:B
****************************************************************************/





using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;


namespace Satranç2
{




    class Program
    {

        static void Menu()
        {//Menu icin bir fonksiyon


            Console.WriteLine("1)String bir degiskende substring kullanmadan ara");
            Console.WriteLine("2)String bir degiskende substring kullanarak ara");
            Console.WriteLine("3)Alfabenin karakterlerini bir stringde ara ve kac karakter geciyorsa yaz ve ciz");
            Console.WriteLine("4)Cikis");
            Console.WriteLine();

            Console.WriteLine("Hangi islemi secmek istiyorsunuz");

        }

        static void Main(string[] args)
        {



            int secim = 0;//Baslangi degerini 0 olarak atiyoruz
            string kelime;//Girilen kelime
            string karakter_dizini;//Kullanicidan alinacak cumle
            int paragraf_uzunluk, kelime_uzunluk;//Paragraf ve kelime uzunlukarı for dongusunde kullanmak icin

            do //kullanicinin birden fazla islem yapacagini dusunerekten do-while dongusu kullandim
            {
                Menu();
                secim = Convert.ToInt32(Console.ReadLine());
                if (secim == 1)//Eger secilen islem 1 ise yapilacak islemler
                {
                    Console.Write("Aranilacak kelime:");
                    kelime = Console.ReadLine();//Aranılacak kelimeyi istiyoruz
                    Console.Write("Karakter Dizini:");
                    karakter_dizini = Console.ReadLine();//Karakter dizinini istiyoruz
                    paragraf_uzunluk = karakter_dizini.Length;//Girilen dizinin uzunlugunu buluruz
                    kelime_uzunluk = kelime.Length;//Girilen kelimenin uzunlugunu buluyoruz
                    Console.WriteLine();
                    karakter_dizini.ToUpperInvariant();//Karisiklik olmamasi icin tum karakterleri buyuk harfe ceviriyoruz
                    kelime.ToUpperInvariant();//Aranilacak kelimeyi de buyuk harfe ceviririz
                    for (int i = 0; i <= paragraf_uzunluk - kelime_uzunluk; i++)
                    {
                        bool bulundu = true;//Eger bulundu ise true
                        for (int j = 0; j < kelime_uzunluk; j++)
                        {
                            char a = karakter_dizini[i + j];//Kelime kelime aramak icin
                            char b = kelime[j];//max kelime uzunlugunda yapıyoruz
                            if (a != b)//Eger a b'ye esit degilse
                            {
                                bulundu = false;//bulundu false olur
                                break;//Ve dongu kirilir
                            }
                        }
                        if (bulundu)//Eger bulundu ise 
                        {
                            Console.WriteLine("indis:" + i);//Bulununan indis ekrana yazdirilir.

                        }
                    }
                }
                if (secim == 2)//Secilen islem 2 ise yapilacak islemler
                {
                    Console.Write("Aranilacak kelime:");
                    kelime = Console.ReadLine();//Aranılacak kelimeyi istiyoruz
                    Console.Write("Karakter Dizini:");
                    karakter_dizini = Console.ReadLine();//Karakter dizinini istiyoruz
                    paragraf_uzunluk = karakter_dizini.Length;//for dongusunde kullanmak icin karakter dizininin uzunlugu 
                    kelime_uzunluk = kelime.Length;//for dongusunde kullanmak icin aranilacak kelimenin uzunlugu
                    karakter_dizini.ToUpperInvariant();//Butun karakterleri buyuk harfe cevirdim
                    kelime.ToUpperInvariant();//Butun karakterleri buyuk harfe cevirdim
                    for (int i = 0; i < paragraf_uzunluk - kelime_uzunluk; i++)//Paragraf uzunlugundan kelime uzunlugunu cikardim dizinin boyutunu gecmemesi icin 
                    {
                        for (int j = 0; j < kelime_uzunluk + 1; j++)//Kelimeyi dolasan for dongusu
                        {

                            if (karakter_dizini.Substring(i, j) == kelime) //Karakter dizininde substring ile aranilan kelimenin boyutunu artirdigimizda(en son aranilanin boyutu kadar) aranilan kelimeye esitse
                            {
                                Console.WriteLine("indis:" + i);//indis ekrana yazilir
                            }

                        }
                    }

                }
                if (secim == 3)//Secilen islem 3 ise yapilacak islemler
                {
                    int sayac = 0;//For dongusunde kullanacagim sayac

                    Console.Write("Karakter dizini:");//Karakter dizinini kullanicidan istiyorum
                    karakter_dizini = Console.ReadLine();//Paragrafi istedik
                    karakter_dizini = karakter_dizini.ToUpper(new CultureInfo("tr-TR", true));//Karakter dizininin tum harflerini buyuk harf yaptik
                    paragraf_uzunluk = karakter_dizini.Length;//Paragrafin uzunlugunu buluruz

                    string Alphabet = "ABCÇDEFGĞHIİJKLMNOÖPQRSŞTUÜVWXYZ";//Alfabedeki harfler
                    int alpha_len = Alphabet.Length;//Alphabet uzunlugu
                    for (int i = 0; i < alpha_len; i++)//Alfabenin tum karakterleri kadar arama yapilacak
                    {




                        sayac = 0;//Her dongunun basina dondugumuzde sayac 0lacanak
                        for (int j = 0; j < paragraf_uzunluk; j++)//Paragrafin hepsini donecek olan dongu
                        {

                            if (karakter_dizini[j] == Alphabet[i])//karakter dizinindeki j. eleman Alfabenin i. elemanina esit ise
                            {
                                sayac++;//Sayac bir artirilir

                            }



                        }
                        Console.Write(Alphabet[i] + "  ,  " + sayac + "   ,        ");
                        for (int x = 0; x < sayac; x++)//Gecen karakter sayisi kadar yildiz yazdirilir
                        {
                            Console.Write("*");//Ekrana yildiz bastirir
                        }
                        Console.WriteLine();//Bir alt satira gecilir ve ayni islemler tekrar yapilir
                    }

                }
                if (secim == 4)//Secilen islem 4 ise yapilacak islemler
                {
                    System.Environment.Exit(10);//Cikis yapar
                }




            } while (secim == 1 || secim == 2 || secim == 3);//Secim 1,2 ve 3 oldugu surece yapilacak


        }
    }
}

