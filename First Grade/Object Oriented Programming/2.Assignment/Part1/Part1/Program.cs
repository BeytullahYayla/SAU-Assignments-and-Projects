                  /****************************************************************************
                  **				        	SAKARYA ÜNİVERSİTESİ
                  **				  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
                  **				       BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
                  **				      NESNEYE DAYALI PROGRAMLAMA DERSİ
                  **			        		2020-2021 BAHAR DÖNEMİ
                  **	
                  **				       ÖDEV NUMARASI..........:2
                  **				       ÖĞRENCİ ADI............:Beytullah YAYLA
                  **				       ÖĞRENCİ NUMARASI.......:B201210008
                  **                     DERSİN ALINDIĞI GRUP...:B*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Odev2_part1
{

    interface IBenim_String//Fonksiyonlarimizin prototipleri tanimlanir
    {
        
        void ElemanSayisi();
        void Birlestir();
        void ArayaGir(int indis,string ekle_cumle);
        void DegerAl(int baslangic,int bitis);
        void DiziyeAyir(char ayirac);
        void CharDiziyeDonustur(string string_dizi);
        void DegerIndis();
        void SiralaAZ();
        void SiralaZA();
        void TersCevir();
    }
    abstract class Benim_String : IBenim_String//Bu siniftan nesne olusturulmasini istemedigimden abstract sinif olarak tanimladim
    {


        public void ElemanSayisi()
        {
            Console.Write("Eleman sayisi bulunacak string degeri giriniz:");
            string karakter_dizini = Console.ReadLine();//Karakter dizinini kullanicidan istedim
            Console.WriteLine("Nesnedeki eleman sayisi: " + karakter_dizini.Length);//karakter dizinindeki eleman sayisini ekrana yazar
        }

        public void Birlestir()
        {
            Console.Write("Birlestirilecek ilk string:");
            string ilk_string = Console.ReadLine();
            Console.Write("Birlestirilecek ikinci string:");
            string ikinci_string = Console.ReadLine();
            Console.WriteLine();//Bir alt satira gecer
            Console.WriteLine(ilk_string + " " + ikinci_string);//iki stringi birlestirir
        }

        public void ArayaGir(int indis, string ekle_cumle)//Indis nereye eklenecegini gosterir.
        {


            string karakter_dizini = "Yorumlar, programa etki etmeyen ancak kendimizin veya kodu inceleyen bir başkasının nerede ne yapıldığını anlamasını sağlayacak yazılardır";//Karakter dizini

            for (int i = 0; i < karakter_dizini.Length; i++)//karakter dizinin hepsini donecek olan for dongusu
            {

                if (i < indis)//Eger i bizim araya yerlestirecegimiz indisten kucukse o zaman indise kadar olan kisim konsola yazdirilir
                {
                    Console.Write(karakter_dizini[i]);
                }
                if (i == indis)//Eger istedigimiz indis ise 
                {
                    Console.Write(karakter_dizini[i] + ekle_cumle);//O indisteki elemani ekrana basariz ve eklenecek cumleyi de onun yanina ekleriz
                }
                if (i > indis)//Eger i istedigimiz indisten buyukse 
                {
                    Console.Write(karakter_dizini[i]);//Istedigimiz indisten sonrasini da ekrana yazdiririz
                }
            }
            Console.WriteLine();
        }

        public void DegerAl(int baslangic, int bitis)
        {
            string str1 = "Yorumlar, programa etki etmeyen ancak kendimizin veya kodu inceleyen bir başkasının nerede ne yapıldığını anlamasını sağlayacak yazılardır";
            for (int i = 0; i < bitis - baslangic; i++)//Bitis- baslangic yapilarak degeri alinacak kelimenin uzunlugu bulunur
            {
                Console.Write(str1[baslangic + i]);//Baslangictan en fazla kelimenin uzunlugu kadar ekrana yazdirilir
            }
            Console.WriteLine();//Bir alt satira gecilir
        }

        public void DiziyeAyir(char ayirac)
        {
            string karakter_dizini = "Yorumlar, programa etki etmeyen ancak kendimizin veya kodu inceleyen bir başkasının nerede ne yapıldığını anlamasını sağlayacak yazılardır";
            Console.WriteLine();
            for (int i = 0; i < karakter_dizini.Length; i++)//Karakter dizinini donecek dongu
            {
                Console.Write(karakter_dizini[i]);//Konsola karakter dizininin i. elemanini yazdir
                if (karakter_dizini[i] == ayirac)//Eger o eleman bizim bolmek istedigimiz ayiraca esitse 
                {

                    Console.WriteLine();//Bir alt satira gecilir
                }
            }
            Console.WriteLine();
        }

        public void CharDiziyeDonustur(string string_dizi)
        {
            char[] dizi = new char[string_dizi.Length];//Yeni bir karakter dizisi olusturdum
            for (int i = 0; i < string_dizi.Length; i++)//String diziyi tamamen donecek for dongusu
            {
                dizi[i] = string_dizi[i];//dizinin i. elemanina string dizinin i. elemani atanir
                Console.WriteLine(dizi[i]);//karakter dizisinin elemanlari her defasinda konsola yazdirilir
            }
        }

        public void DegerIndis()
        {
            string kelime, paragraf;//Aranilacak kelime ve paragrafi tanimladim
            int paragraf_uzunluk, kelime_uzunluk;//For dongusunde kullanilmak uzere paragrafuzunluk ve kelime uzunluk
            Console.Write("Aranilacak kelime:");
            kelime = Console.ReadLine();//Aranılacak kelimeyi istiyoruz
            Console.Write("Karakter Dizini:");
            paragraf = Console.ReadLine();//Karakter dizinini istiyoruz
            paragraf_uzunluk = paragraf.Length;//Girilen dizinin uzunlugunu buluruz
            kelime_uzunluk = kelime.Length;//Girilen kelimenin uzunlugunu buluyoruz
            Console.WriteLine();
            paragraf.ToUpperInvariant();//Karisiklik olmamasi icin tum karakterleri buyuk harfe ceviriyoruz
            kelime.ToUpperInvariant();//Aranilacak kelimeyi de buyuk harfe ceviririz
            for (int i = 0; i <= paragraf_uzunluk - kelime_uzunluk; i++)
            {
                bool bulundu = true;//Eger bulundu ise true
                for (int j = 0; j < kelime_uzunluk; j++)
                {
                    char a = paragraf[i + j];//Kelime kelime aramak icin
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

        public void SiralaAZ()
        {
            
            string paragraf;//Girilecek karakter dizini
            char gecici_tut;//Gecici deger tutan char
            Console.Write("Bir string dizisi giriniz:");
            paragraf=Console.ReadLine();//karakter dizinini kullanicidan istiyoruz
            char[] dizi = paragraf.ToCharArray();//char dizisi
            paragraf=paragraf.ToUpper();//Paragrafin tum harflerini buyuk yapiyoruz(Dogru siralama icin)
            for (int i = 0; i < paragraf.Length; i++)//Karakter dizinindeki tum karakterleri donecek for dongusu
            {
                for (int j = 0; j <paragraf.Length-1 ; j++)//j. elemani digerleriyle karsilastiracak olan dongu
                {
                    if (dizi[j] > dizi[j + 1])//Eger j.karakter bir sonrakinden buyukse (B>A)gibi...
                    {
                        gecici_tut = dizi[j];//j.eleman gecici degere atanir
                        dizi[j] = dizi[j + 1];//j.eleman ile j+1. elemanin yerine gecer
                        dizi[j + 1] = gecici_tut;//j+1. eleman ise gecici tutulan degere esitlenir
                    }
                }
            }
            Console.WriteLine(dizi);//dizi ekrana yazdirilir
        }

        public void SiralaZA()
        {
            string paragraf;//Girilecek karakter dizini
            char gecici_tut;//Gecici deger tutan char
            Console.Write("Bir string dizisi giriniz:");
            paragraf = Console.ReadLine();//karakter dizinini kullanicidan istiyoruz
            char[] dizi = paragraf.ToCharArray();//char dizisi
            paragraf = paragraf.ToUpper();//Paragrafin tum harflerini buyuk yapiyoruz(Dogru siralama icin)
            for (int i = 0; i < paragraf.Length; i++)//Karakter dizinindeki tum karakterleri donecek for dongusu
            {
                for (int j = 0; j < paragraf.Length - 1; j++)//j. elemani digerleriyle karsilastiracak olan dongu
                
                {
                    if (dizi[j] < dizi[j + 1])//Eger j.karakter bir sonrakinden kucukse (A<B)gibi...
                    {
                        gecici_tut = dizi[j];//j. eleman gecici degere atanir
                        dizi[j] = dizi[j + 1];//j.eleman j+1. elemanin yerine gecer 
                        dizi[j + 1] = gecici_tut;//j+1. eleman ise gecici tutulan degere esitlenir
                    }
                }
            }
            Console.WriteLine(dizi);//Dizi konsola yazdirilir
        }

        public void TersCevir()
        {
            string karakter_dizini;
            Console.Write("Stringi giriniz:");
            karakter_dizini=Console.ReadLine();
            for (int i =karakter_dizini.Length-1; i >= 0; i--)//Sondan itibaren dizi okunmaya baslanir
            {
                Console.Write(karakter_dizini[i]);//i. eleman her defasinda ekrana yazdirilir
            }
        }
        
       




       


        

        

       



        

        
    }
    sealed class Test : Benim_String//Bu sinifimin kalitim vermesini istemedigimden sealed anahtar kelimesini kullandim ve BenimStringim adli siniftan kalitim almasini sagladim
    {
        public void test()//Benim_String sinifindaki metotlari test etmek icin
        {
            Console.WriteLine("ElemanSayisi()");
            ElemanSayisi();
            Console.WriteLine("Birlestir()");
            Birlestir();
            Console.WriteLine("ArayaGir()");
            ArayaGir(3, "Beytullah");
            Console.WriteLine("DegerAl()");
            DegerAl(3, 5);
            Console.WriteLine("DiziyeAyir()");
            DiziyeAyir(' ');
            Console.WriteLine("CharDiziYeDonustur()");
            CharDiziyeDonustur("Beyt");
            Console.WriteLine("DegerIndis()");
            DegerIndis();
            Console.WriteLine("SiralaAZ()");
            SiralaAZ();
            Console.WriteLine("SiralaZA()");
            SiralaZA();
            Console.WriteLine("TersCevir()");
            TersCevir();
            
        }

       

        
    }
    
    class Program
    {
        static void Main(string[] args)
        {
            Test t = new Test();//Test sinifindan t adinda bir nesne olusturduk
            t.test();//test metodunu cagirarak Benim_String sinifindaki tum metotlari test ettik
            Console.Read();
            
                
        }
    }
}