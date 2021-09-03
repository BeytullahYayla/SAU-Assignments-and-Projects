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
**                     DERSİN ALINDIĞI GRUP...:B*/




using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
namespace odev2_part22
{

    public partial class Form1 : Form
    {


        public Form1()
        {

            InitializeComponent();
        }
        //Matris islemleri icin matris adinda statik bir sınıf olusturdum
        public static class Matris
        {
            
            static public double[,] matris1 = new double[3, 3];//Ilk matris
            static public double[,] kopya_matris1 = new double[3, 3];//Ters matris almak icin kullanilacak matris birin kopyasi
            static public double[,] kopya_matris2 = new double[3, 3];//Ters matris almak icin kullanilacak matris ikinin kopyasi
            static public double[,] matris2 = new double[3, 3];//Ikinci matris
            static public double[,] sonuc_matris = new double[3, 3];//Islem yapilan matrislerin sonucu olan matris
            static public double[,] birim_matris = new double[3, 3];//Matris tersi alinirkan lazim olan ilk birim matris
            static public double[,] birim_matris2 = new double[3, 3];//Matris tersiz alinirkan lazim olacak ikinci birim matris

            static Random rastgele = new Random();//Rastgele sayi olusturulur


            static public void MatrisYazdirma(string islem)//Matris Yazdirma Metodu
            {
                if (islem == "toplama")//Eger yapilmak istenen islem toplama ise yapilacak islemler
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";//Dosya yolunu belirtiriz
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris1----");//Text dosyasina yazdirir
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris1[i, j] + "  ");//Matrisin i,j. elemani yazdirilir
                        }
                        sw.WriteLine();//Bir alt satira gecilir
                    }
                    sw.WriteLine();
                    sw.WriteLine("----Matris2----");//Text dosyasina yazdirilir
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris2[i, j] + "  ");//Matris2nin i,j. elemani yazdirilir
                        }
                        sw.WriteLine();//Alt satira gecilir
                    }
                    sw.WriteLine("----Islemler----");//Yapilacak islem yazdirilir
                    sw.WriteLine("Matris Toplama");

                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {

                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris1[i, j] + "+" + Matris.matris2[i, j] + "      ");//Sonuc matrisinin i,j.elemanina matris 1 ve matris 2 nin i,j.elemanlarinin toplami atanir

                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine();

                    sw.WriteLine("----Sonuc----");//Sonuc 
                    for (int i = 0; i < 3; i++)//Satir Islemleri
                    {

                        for (int j = 0; j < 3; j++)//Sutun islemleri
                        {
                            sw.Write(Matris.sonuc_matris[i, j] + "  ");//sonuc matrisi yazdirilir

                        }
                        sw.WriteLine();
                    }
                    sw.Flush();

                    sw.Close();
                    fs.Close();
                }
                if (islem == "carpma")//Eger yapilacak islem matris carpma ise yapilacak islemler
                {

                    string dosya_yolu = @"C:\Bilgiler.txt";
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris1----");
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris1[i, j] + " ");//Matris 1 yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine();
                    sw.WriteLine("----Matris2----");
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris2[i, j] + " ");//Matris 2 yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine();
                    sw.WriteLine("----Islemler----");//Yapilacak islemler yazdirilir
                    sw.WriteLine("Matris Carpma");
                    // Matris carpma islemi esas alinarak tum islemler teker teker dosyaya yazdirilir
                    sw.WriteLine(Matris.matris1[0, 0] + "*" + Matris.matris2[0, 0] + "+" + Matris.matris1[0, 1] + "*" + Matris.matris2[1, 0] + "+" + Matris.matris1[0, 2] + "*" + Matris.matris2[2, 0] + "=" + Matris.sonuc_matris[0, 0]);
                    sw.WriteLine(Matris.matris1[0, 0] + "*" + Matris.matris2[0, 1] + "+" + Matris.matris1[0, 1] + "*" + Matris.matris2[1, 1] + "+" + Matris.matris1[0, 2] + "*" + Matris.matris2[2, 1] + "=" + Matris.sonuc_matris[0, 1]);
                    sw.WriteLine(Matris.matris1[0, 0] + "*" + Matris.matris2[0, 2] + "+" + Matris.matris1[0, 1] + "*" + Matris.matris2[1, 2] + "+" + Matris.matris1[0, 2] + "*" + Matris.matris2[2, 2] + "=" + Matris.sonuc_matris[0, 2]);
                    sw.WriteLine(Matris.matris1[1, 0] + "*" + Matris.matris2[0, 0] + "+" + Matris.matris1[1, 1] + "*" + Matris.matris2[1, 0] + "+" + Matris.matris1[1, 2] + "*" + Matris.matris2[2, 0] + "=" + Matris.sonuc_matris[1, 0]);
                    sw.WriteLine(Matris.matris1[1, 0] + "*" + Matris.matris2[0, 1] + "+" + Matris.matris1[1, 1] + "*" + Matris.matris2[1, 1] + "+" + Matris.matris1[1, 2] + "*" + Matris.matris2[2, 1] + "=" + Matris.sonuc_matris[1, 1]);
                    sw.WriteLine(Matris.matris1[1, 0] + "*" + Matris.matris2[0, 2] + "+" + Matris.matris1[1, 1] + "*" + Matris.matris2[1, 2] + "+" + Matris.matris1[1, 2] + "*" + Matris.matris2[2, 2] + "=" + Matris.sonuc_matris[1, 2]);
                    sw.WriteLine(Matris.matris1[2, 0] + "*" + Matris.matris2[0, 0] + "+" + Matris.matris1[2, 1] + "*" + Matris.matris2[1, 0] + "+" + Matris.matris1[2, 2] + "*" + Matris.matris2[2, 0] + "=" + Matris.sonuc_matris[2, 0]);
                    sw.WriteLine(Matris.matris1[2, 0] + "*" + Matris.matris2[0, 1] + "+" + Matris.matris1[2, 1] + "*" + Matris.matris2[1, 1] + "+" + Matris.matris1[2, 2] + "*" + Matris.matris2[2, 1] + "=" + Matris.sonuc_matris[2, 1]);
                    sw.WriteLine(Matris.matris1[2, 0] + "*" + Matris.matris2[0, 2] + "+" + Matris.matris1[2, 1] + "*" + Matris.matris2[1, 2] + "+" + Matris.matris1[2, 2] + "*" + Matris.matris2[2, 2] + "=" + Matris.sonuc_matris[2, 2]);
                    sw.WriteLine("----Sonuc----");

                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.sonuc_matris[i, j] + "  ");//Sonuc matrisi dosyaya yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();



                    sw.Close();
                    fs.Close();

                }
                if (islem == "matris izi1")//Yapilacak islem matris izi alma ise yapilacak islemler
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris1----");
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris1[i, j] + "  ");
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();
                    sw.WriteLine();
                    sw.WriteLine("----Islemler----");
                    sw.WriteLine("Matris Izi Bulma");
                    sw.WriteLine(Matris.matris1[0, 0] + "+" + Matris.matris1[1, 1] + "+" + Matris.matris1[2, 2] + "=" + Matris.MatrisIzi(Matris.matris1));//Yapilan islemler yazdirilir

                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();
                }
                if (islem == "matris izi2")//Yapilacak islem ikinci matrisin izini almaksa asagidaki islemler yapilir
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris2----");
                    for (int i = 0; i < 3; i++)//Matristeki satir islemlerini yapan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Matristeki her satir icin sutunlari yazdiracak for dongusu
                        {
                            sw.Write(Matris.matris2[i, j] + "  ");//Matris2 yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine();
                    sw.WriteLine("----Islemler----");
                    sw.WriteLine("Matris Izi Bulma");
                    sw.WriteLine(Matris.matris2[0, 0] + "+" + Matris.matris2[1, 1] + "+" + Matris.matris2[2, 2] + "=" + Matris.MatrisIzi(Matris.matris2));
                    //Dosyaya ekleyeceğimiz iki satırlık yazıyı WriteLine() metodu ile yazacağız.
                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();
                }
                if (islem == "matris transpoze1")
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris1----");
                    //Asagidaki for donguleriyle matris1 yazilir
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            sw.Write(Matris.matris1[i, j] + "  ");
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine("Islemler");
                    sw.WriteLine("Matris Transpoze");
                    sw.WriteLine("Transpoze Matris");
                    Matris.MatrisTranspoze(Matris.matris1);//Matris transpozesi alinir
                    //Matrisin transpoze hali yazdirilir
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            sw.Write(Matris.matris1[i, j] + " ");
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();

                }
                //Matris transpoze1 icin yapilan islemlerin aynilari matris transpoze2de de yapilir
                if (islem == "matris transpoze2")
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris2----");
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            sw.Write(Matris.matris2[i, j] + "  ");
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine("Islemler");
                    sw.WriteLine("Matris Transpoze");
                    sw.WriteLine("Transpoze Matris");
                    Matris.MatrisTranspoze(Matris.matris2);
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            sw.Write(Matris.matris2[i, j] + " ");
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();

                }
                if (islem == "matris tersi1")
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris1----");
                    for (int i = 0; i < 3; i++)//Satir islemleri
                    {
                        for (int j = 0; j < 3; j++)//Sutun islemleri
                        {
                            sw.Write(Matris.matris1[i, j] + "  ");//Matris1'in i,j. elemanlari ekana yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine("----Islemler----");
                    sw.WriteLine("Matris Tersi");
                    sw.WriteLine("----Ters Matris1----");
                    Matris.MatrisTersi("matris tersi1");//Ilk matrisin tersi alinir
                    for (int i = 0; i < 3; i++)//Satir islemleri icin for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Sutun islemleri icin for dongusu
                        {
                            sw.Write(Matris.birim_matris[i, j] + " ");//Matris1 in i,j.elemani ekrana yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();
                }
                if (islem == "matris tersi2")
                {
                    string dosya_yolu = @"C:\Bilgiler.txt";
                    //İşlem yapacağımız dosyanın yolunu belirtiyoruz.
                    FileStream fs = new FileStream(dosya_yolu, FileMode.OpenOrCreate, FileAccess.Write);

                    //Bir file stream nesnesi oluşturuyoruz. 1.parametre dosya yolunu,
                    //2.parametre dosya varsa açılacağını yoksa oluşturulacağını belirtir,
                    //3.parametre dosyaya erişimin veri yazmak için olacağını gösterir.
                    StreamWriter sw = new StreamWriter(fs);
                    sw.WriteLine("----Matris2----");
                    for (int i = 0; i < 3; i++)//Satir islemleri
                    {
                        for (int j = 0; j < 3; j++)//Sutun islemleri
                        {
                            sw.Write(Matris.matris2[i, j] + "  ");//Matris1'in i,j. elemanlari ekana yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.WriteLine("----Islemler----");
                    sw.WriteLine("Matris Tersi");
                    sw.WriteLine("----Ters Matris1----");
                    Matris.MatrisTersi("matris tersi1");//Ilk matrisin tersi alinir
                    for (int i = 0; i < 3; i++)//Satir islemleri icin for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Sutun islemleri icin for dongusu
                        {
                            sw.Write(Matris.birim_matris2[i, j] + " ");//Matris1 in i,j.elemani ekrana yazdirilir
                        }
                        sw.WriteLine();
                    }
                    sw.Flush();
                    //Veriyi tampon bölgeden dosyaya aktardık.
                    sw.Close();
                    fs.Close();
                }

            }
            static public void MatrisToplama()//Matris Toplama Metodu
            {
                for (int i = 0; i < 3; i++)//Matris satir dongusu
                {
                    for (int j = 0; j < 3; j++)//Matris sutun dongusu
                    {
                        sonuc_matris[i, j] = matris1[i, j] + matris2[i, j];//Birinci ve ikinci matrislerin i,j. elemanindaki sayilar toplanarak dizi3'un i,j. elemanina atanir
                    }
                }
            }
            static public void MatrisCarpma()//
            {
                //Asagidaki islemlerde matris carpma kuralarini kullandim matris 1'in birinci satiriyla ikinci matrisin ilk sutunu cagirilip toplanir
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            sonuc_matris[i, j] += matris1[i, k] * matris2[k, j];
                        }
                    }
                }
            }
            static public string MatrisOku()//Matris okuma islemleri
            {
                string dosya_yolu = @"C:\Bilgiler.txt";//dosya yolunu belirttik
                string text = System.IO.File.ReadAllText(dosya_yolu);//Read all text ile tum texti okuduk ve text degerine atadik
                return text;//text degerini string olarak dondurduk
            }
            static public void MatrisTranspoze(double[,] list)//Matris tranpoze metodu
            {
                //Matris transpoze islemi matrisiz 0.sutun 1,2. satirlari arası ile 0. satir 1 ve 2. sutunlari arasinda olur
                double temp1 = list[0, 1];//0.satir 1.sutun  temp1e atanir
                double temp2 = list[0, 2];//0.satir 2. sutun temp2ye atanir
                //Asagidaki islemlerde yerleri degisir
                list[0, 1] = list[1, 0];
                list[0, 2] = list[2, 0];
                list[1, 0] = temp1;
                list[2, 0] = temp2;



            }
            static public double MatrisIzi(double[,] list)
            {
                //Matris izi kosegenlerdeki elemanlarin toplamina verilen isimdir.O halde


                double matris_izi = list[0, 0] + list[1, 1] + list[2, 2];
                return matris_izi;//Matris izi degerini geri dondurur


            }

            static public void MatrisTersi(string islem)
            {



                if (islem == "matris tersi1")//Eger  islem matris tersi1 ise asagidaki islemler yapilir
                {
                    for (int i = 0; i < 3; i++)//Satir islemleri
                    {
                        for (int j = 0;  j < 3;  j++)//Sutun islemleri
                        {
                            kopya_matris1[i, j] = matris1[i, j];//Matris1'in tüm elemanlari kopya matrise atanir
                        }
                    }
                   
                    
                    for (int i = 0; i < 3; i++)//Satir islemleri icin olan for dongusu
                    {
                        for (int j = 0; j < 3; j++)//Sutun islemleri icin olan for dongusu
                        {
                            if (i == j)//Eger eleman kosegen uzerinde ise 
                                birim_matris[i, j] = 1;//O indise 1 degerini ata
                            else
                                birim_matris[i, j] = 0;//Degilse o indise 0 değerini ata

                        }

                    }

                    double temp1, temp2;//d ve k adlı degiskenler olusturdum
                    for (int i = 0; i < 3; i++)//Satir islemleri icin
                    {
                        temp1 = kopya_matris1[i, i];//kopya matrisin i,i. elemanini temp1'e atadim(yani kosegenlerdeki elemanlar)
                        for (int j = 0; j < 3; j++)//Sutun islemleri
                        {
                            //Her defasinda kopya_matrisin ve birim matrisin i,j.elemanini kosegen elemana boldum
                            kopya_matris1[i, j] = kopya_matris1[i, j] / temp1;
                            birim_matris[i, j] = birim_matris[i, j] / temp1;
                        }
                        for (int x = 0; x < 3; x++)//2. sutun islemi iceren for dongusu
                        {
                            if (x != i)//Eger x i'ye esit degilse yani kosegen uzerinde degilse
                            {
                                temp2 = kopya_matris1[x, i];//Kosegen haric diger elemanlari sirayla temp2ye atadim ve
                                for (int j = 0; j < 3; j++)
                                {
                                    kopya_matris1[x, j] = kopya_matris1[x, j] - (kopya_matris1[i, j] * temp2);
                                    birim_matris[x, j] = birim_matris[x, j] - (birim_matris[i, j] * temp2);
                                }

                            }
                        }

                    }


                }
                //Matris tersi ile ayni islemler yapilir
                else if (islem == "matris tersi2")
                {
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            kopya_matris2[i, j] = matris2[i, j];
                        }
                    }
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            Console.Write(kopya_matris2[i, j] + " ");
                        }
                        Console.WriteLine();
                    }
                    for (int i = 0; i < 3; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            if (i == j)
                                birim_matris2[i, j] = 1;
                            else
                                birim_matris2[i, j] = 0;

                        }

                    }

                    double d, k;
                    for (int i = 0; i < 3; i++)
                    {
                        d = kopya_matris2[i, i];
                        for (int j = 0; j < 3; j++)
                        {
                            kopya_matris2[i, j] = kopya_matris2[i, j] / d;
                            birim_matris2[i, j] = birim_matris2[i, j] / d;
                        }
                        for (int x = 0; x < 3; x++)
                        {
                            if (x != i)
                            {
                                k = kopya_matris2[x, i];
                                for (int j = 0; j < 3; j++)
                                {
                                    kopya_matris2[x, j] = kopya_matris2[x, j] - (kopya_matris2[i, j] * k);
                                    birim_matris2[x, j] = birim_matris2[x, j] - (birim_matris2[i, j] * k);
                                }

                            }
                        }

                    }


                }
                }
            }
        




        public static void DosyaOlustur()
        {
            string dosya_adi = "Bilgiler.txt";
            string dosya_yolu = @"C:\Bilgiler";
            string hedef_yol = System.IO.Path.Combine(dosya_yolu, dosya_adi);


            System.IO.File.Create(hedef_yol);

        }
       
        
        


        private void Form1_Load(object sender, EventArgs e)
        {
            if (!File.Exists("Bilgiler.txt"))//Eger bilgilerin kaydedilecegi bir dosya yok ise 
            {
                DosyaOlustur();//Dosya Olustur
            }

            //Form yuklendiginde asagidaki butonların enabled ozelligi false olur yani tiklanamaz
            btnmatriscarp.Enabled = false;//Matris Carpma Butonu 
            btnmatristopla.Enabled = false;//Matris Toplama Butonu
            btnmatrisizi.Enabled = false;//Matris Izi Butonu
            btnmatrisizi2.Enabled = false;//MatrisIzi2 Butonu
            btnmatristranspoze.Enabled=false;//Matris Transpoze Butonu
            btnmatristranspoze2.Enabled = false;//Matris Transpoze2 Butonu
            btnmatristersi2.Enabled = false;//Matris Tersi2 Butonu
            checkBox1.Enabled = false;//Checkbox
            btnmatristersi.Enabled = false;//Matris tersi butonu

        }

       

        public void button1_Click(object sender, EventArgs e)
        {
            label8.Visible = false;
            label9.Visible = false;
            //Matris olustur butonuna tiklandigi zaman asagidaki butonların enabled durumlari belirlenir
            listviewters1.Visible = false;
            listviewters2.Visible = false;
            label3.Visible = false;
            label5.Visible = false;
            listviewters1.Clear();
            listviewters2.Clear();
            richTextBox1.Clear();
            btnmatrisizi.Enabled = true;
            btnmatrisizi2.Enabled = true;
            btnmatristersi.Enabled=true;
            btnmatristersi2.Enabled=true;
            btnmatristranspoze.Enabled=true;
            btnmatristranspoze2.Enabled = true;

            checkBox1.Enabled = true;
            btnmatrisolustur.Enabled = true;
            btnmatristopla.Enabled = true;
            btnmatriscarp.Enabled = true;
            //Listviewler temizlenir
            listView1.Clear();
            listView2.Clear();
            listView3.Clear();
            Random rastgele = new Random();
            for (int i = 0; i < 3; i++)
            {

                for (int j = 0; j < 3; j++)
                {
                    int rand = rastgele.Next(0, 15);//0 ve 15 arasinda rastele deger olusturulur her defasinda
                    Matris.matris1[i, j] = rand;//Uretilen rastgele deger matris1'in i,j. degerine atanir
                    rand = rastgele.Next(0, 15);//Bir daha 0 ve 15 arasi rastgele deger olusturulur

                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.matris1[i, j].ToString();//Matris1'in i,j. elemani stringe cevrilerek 
                    listView1.Items.Add(ekle);//listview1de goruntulenir


                }
            }
            for (int i = 0; i < 3; i++)//Matris satir islemleri
            {

                for (int j = 0; j < 3; j++)//Matris sutun islemleri
                {
                    int rand = rastgele.Next(0, 15);//0 ve 15 arasinda rastele deger olusturulur her defasinda
                    Matris.matris2[i, j] = rand;//Uretilen rastgele deger matris1'in i,j. degerine atanir
                    rand = rastgele.Next(0, 15);//Bir daha 0 ve 15 arasi rastgele deger olusturulur


                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.matris2[i, j].ToString();//Matris2'in i,j. elemani stringe cevrilerek 
                    listView2.Items.Add(ekle);//listview2de goruntulenir


                }
            }

            btnmatrisolustur.Enabled = true;


        }

        private void button2_Click(object sender, EventArgs e)
        {
            listView3.Clear();//Listview3 temizlenir
            Matris.MatrisToplama();//Matrisler toplanir
            for (int i = 0; i < 3; i++)//Matris satir islemleri
            {
                for (int j = 0; j < 3; j++)//Matris sutun islemleri
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.sonuc_matris[i, j].ToString();//sonuc matrisin i,j. elemani stringe cevrilerek 
                    listView3.Items.Add(ekle);

                }
            }
            Matris.MatrisYazdirma("toplama");//toplama islemi dosyaya yazdirilir
            richTextBox1.Clear();//richtextbox temizlenir
            btnmatriscarp.Enabled = true;
            btnmatristopla.Enabled = false;
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnmatrisizi_Click(object sender, EventArgs e)
        {
            label8.Text = (Matris.MatrisIzi(Matris.matris1)).ToString();//Matris1in tersi alinarak label8'in textine yazdirilir
            label8.Visible = true;//Boleliklşe label 8 gorunur
            richTextBox1.Clear();
            Matris.MatrisYazdirma("matris izi1");//Yapilan islemler ve sonuc dosyaya yazdirilir
            btnmatrisizi.Enabled = false;

        }

        private void btnmatriscarp_Click(object sender, EventArgs e)
        {
            listView3.Clear();
            Matris.MatrisCarpma();//Matrisler carpilir
            for (int i = 0; i < 3; i++)//Satir islemleri icin olan for dongusu
            {
                for (int j = 0; j < 3; j++)//Sutun islemleri icin olan for dongusu
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.sonuc_matris[i, j].ToString();//Sonuc matris stringe cevrilerek 
                    listView3.Items.Add(ekle);//Listview3'te goruntulenir

                }
            }
            richTextBox1.Clear(); 
            btnmatristopla.Enabled = true;
            btnmatriscarp.Enabled = false;
            Matris.MatrisYazdirma("carpma");//Islemler bilgiler.txt dosyasina yazdirilir
        }

        private void btnmatristersi_Click(object sender, EventArgs e)
        {

        }

        private void btnmatristersi2_Click(object sender, EventArgs e)
        {
            listView2.Clear();
            Matris.MatrisTranspoze(Matris.matris2);//Matris transpozesi alinir
            for (int i = 0; i < 3; i++)//Matris satir islemleri
            {
                for (int j = 0; j < 3; j++)//Matris sutun islemleri
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.matris2[i, j].ToString();//Matris2nin i,j. elemani stringe cevrilerek
                    listView2.Items.Add(ekle);//listview2ye eklenir

                }
            }
            btnmatristranspoze2.Enabled = false;
            Matris.MatrisYazdirma("matris transpoze2");
            
        }

        private void btnmatristersi_Click_1(object sender, EventArgs e)
        {
            
            listView1.Clear();
            Matris.MatrisTranspoze(Matris.matris1);//Matris 1 in transpozesi alinir
            for (int i = 0; i < 3; i++)//Satir islemlerini kontrol eden for dongusu
            {
                for (int j = 0; j < 3; j++)//Sutun islemlerini kontrol eden for dongusu
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.matris1[i, j].ToString();//Matris1'in i,j.elemani stringe cevrilerek
                    listView1.Items.Add(ekle);//listview1de goruntulenir

                }
            }
            richTextBox1.Clear();
            
            btnmatristranspoze.Enabled = false;
            Matris.MatrisYazdirma("matris transpoze1");
            
        }

        private void btnmatrisizi2_Click(object sender, EventArgs e)
        {
            label9.Text = (Matris.MatrisIzi(Matris.matris2)).ToString();//matris2 nin izi alinir ve lable 9 un textine yazilir
            label9.Visible = true;//label9 gorunurdur
            richTextBox1.Clear();
            Matris.MatrisYazdirma("matris izi2");//matris2 izi ve yapilan islemler yazdirilir
            btnmatrisizi2.Enabled = false;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            
            richTextBox1.Text = Matris.MatrisOku();
            richTextBox1.Visible = true;
        }

        private void richTextBox1_TextChanged_1(object sender, EventArgs e)
        { 

        }

        private void btnmatristersi_Click_2(object sender, EventArgs e)
        {
            listviewters1.Clear();
            richTextBox1.Clear();
            label3.Visible = true;
            listviewters1.Visible = true;
            Matris.MatrisTersi("matris tersi1");//matris1 in tersi alinir
            for (int i = 0; i < 3; i++)//Satir islemler,
            {
                for (int j = 0; j < 3; j++)//Sutun islemleri
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.birim_matris[i, j].ToString();//Elde ettigimiz birim matris bizim ters matrisimizdi bu yuzden birim matrisin i,j. elemani stringe cevrilerek
                    listviewters1.Items.Add(ekle);
                }
            }
            Matris.MatrisYazdirma("matris tersi1");

            btnmatristersi.Enabled = false;
        }

        private void btnmatristersi2_Click_1(object sender, EventArgs e)
        {
            richTextBox1.Clear();
            listviewters2.Clear();
            label5.Visible = true;//Label4 gorunur olur
            listviewters2.Visible = true;//listviewters2 gorunur olur
            Matris.MatrisTersi("matris tersi2");//Matris2nin tersi alinir
            for (int i = 0; i < 3; i++)//Satir islemleri
            {
                for (int j = 0; j < 3; j++)//Sutun islemleri
                {
                    ListViewItem ekle = new ListViewItem();
                    ekle.Text = Matris.birim_matris2[i, j].ToString();//Elde ettigimiz birim matris bizim ters matrisimizdi bu yuzden birim matrisin i,j. elemani stringe cevrilerek
                    listviewters2.Items.Add(ekle);//Listviewters2 de goruntulenir
                }
            }
            Matris.MatrisYazdirma("matris tersi2");
            btnmatristersi2.Enabled = false;
        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
            
        }
    }
}

