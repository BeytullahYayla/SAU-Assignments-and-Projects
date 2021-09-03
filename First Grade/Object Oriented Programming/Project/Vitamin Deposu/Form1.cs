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
                               **                       DERSİN ALINDIĞI GRUP: 1B                         **     
                              ****************************************************************************/
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace Vitamin_Deposu
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            
        }



        //Degiskenlerin ilk degerlerini verdim
        int dogru = 0;
        
        double Kati_Toplam_VitaminA = 0;
        double Kati_Toplam_VitaminC = 0;
        double Narenciye_Toplam_VitaminA = 0;
        double Narenciye_Toplam_VitaminC = 0;
        double Narenciye_Toplam_Net_Gramaj = 0;
        double Kati_Net_Gramaj = 0;
        
        
        public void ResimDegistir()//Resim degistirmesi icin bir fonksiyon yazdim
        {
            Random rastgele = new Random();
            int randompic = rastgele.Next(0, 6);//Rastgele bir resim getirmek icin kullandik
           
            //Asagidaki islemlerle rastgele resim gelmesini sagladim
            if (randompic == 0)
            {
                pictureBox1.ImageLocation = "Resimler/elma.jpg";
                
            }
            else if (randompic == 1)
            {
                pictureBox1.ImageLocation = "Resimler/armut.jpg";
            }
            else if (randompic == 2)
            {
                pictureBox1.ImageLocation = "Resimler/çilek.jpg";
            }
            else if (randompic == 3)
            {
                pictureBox1.ImageLocation = "Resimler/greyfurt.jpg";
            }
            else if (randompic == 4)
            {
                pictureBox1.ImageLocation = "Resimler/mandalina.jpg";
            }
            else if (randompic == 5)
            {
                pictureBox1.ImageLocation = "Resimler/portakal.jpg";
            }
        }
        
        private void Form1_Load(object sender, EventArgs e)
        {
            //Form yuklendiginde btnkati ve btnnarenciye inaktiftir
            btnkati.Enabled = false;
            btnnarenciye.Enabled = false;

        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            listView1.Items.Clear();//Baslaya bastigimizda listviewler temizlenir
            listView2.Items.Clear();
            lbldogru.Text = "";
            lblpuan.Text = "";
            btnnarenciye.Enabled = true;
            btnkati.Enabled = true;
            ResimDegistir();//Resim degisir
            timer1.Enabled = true;//Timer calismaya baslar
            btnbasla.Enabled = false;
            lbldogru.Visible = true;
            
           

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            int kalan=Convert.ToInt32(lblsure.Text);
            kalan--;//Kalan sure timer calistigi surece azalir
            lblsure.Text = kalan.ToString();

            if (kalan == 0)//Kalan 0 oldugunda
            {
                timer1.Enabled = false;//Timer durur
                MessageBox.Show("Sure Bitti");
                btnbasla.Enabled = true;//Basla butonu aktif hale gelir
                btnkati.Enabled = false;//Sure bittigi icin inaktif olur
                btnnarenciye.Enabled = false;//Sure bittigi icin inaktif olur
                lblsure.Text = "60";
                lblpuan.Text = (Convert.ToInt32(lbldogru.Text) * 5).ToString();//Her soru 5 puan oldugu icin dogru sayisiyla carpilir
                ListViewItem ekle = new ListViewItem();
                //Toplam Vitaminler ve Toplam netgramajlar yazdirilir
                ekle.Text = "Toplam";
                ekle.SubItems.Add(Kati_Toplam_VitaminA.ToString());
                ekle.SubItems.Add(Kati_Toplam_VitaminC.ToString());
                ekle.SubItems.Add(Kati_Net_Gramaj.ToString());
                listView1.Items.Add(ekle);

                ListViewItem add = new ListViewItem();
                add.Text = "Toplam";
                add.SubItems.Add(Narenciye_Toplam_VitaminA.ToString());
                add.SubItems.Add(Narenciye_Toplam_VitaminC.ToString());
                add.SubItems.Add(Narenciye_Toplam_Net_Gramaj.ToString());
                listView2.Items.Add(add);
                btnbasla.Text = "Yeniden Basla";
            }
            
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void btnnarenciye_Click(object sender, EventArgs e)
        {
            prgrsbrNarenciye.Value = 0;
            //Resimlere gore meyvelerin vitaminleri ve netgramajlari yazdirilir
            if (pictureBox1.ImageLocation == "Resimler/greyfurt.jpg")
            {
                timer3.Enabled = true;


                Greyfurt greyfurt = new Greyfurt();
                ListViewItem ekle = new ListViewItem();
                
                ekle.Text = "Greyfurt";
                Narenciye_Toplam_VitaminA = Narenciye_Toplam_VitaminA + greyfurt.VitaminA;
                Narenciye_Toplam_VitaminC = Narenciye_Toplam_VitaminC + greyfurt.VitaminC;
                Narenciye_Toplam_Net_Gramaj = Narenciye_Toplam_Net_Gramaj + greyfurt.netGramaj;
                ekle.SubItems.Add(greyfurt.VitaminA.ToString());
                ekle.SubItems.Add(greyfurt.VitaminC.ToString());
                ekle.SubItems.Add(greyfurt.netGramaj.ToString());
               
                listView2.Items.Add(ekle);
                dogru++;//Dogru sayisi artirilir
                lbldogru.Text = dogru.ToString();
            }
            else if (pictureBox1.ImageLocation == "Resimler/portakal.jpg")//Resim portakal ise asagidaki islemler yapilir
            {
                
                timer3.Enabled = true;
                Portakal portakal = new Portakal();
                ListViewItem ekle = new ListViewItem();
                ekle.Text = "Portakal";
                Narenciye_Toplam_VitaminA = Narenciye_Toplam_VitaminA + portakal.VitaminA;
                Narenciye_Toplam_VitaminC = Narenciye_Toplam_VitaminC + portakal.VitaminC;
                Narenciye_Toplam_Net_Gramaj = Narenciye_Toplam_Net_Gramaj + portakal.netGramaj;
                ekle.SubItems.Add(portakal.VitaminA.ToString());
                ekle.SubItems.Add(portakal.VitaminC.ToString());
                ekle.SubItems.Add(portakal.netGramaj.ToString());
                listView2.Items.Add(ekle);
                dogru++;
                lbldogru.Text = dogru.ToString();
            }
            else if (pictureBox1.ImageLocation == "Resimler/mandalina.jpg")//Eger resim mandalina ise asagidaki islemler yapilir
            {
              
                timer3.Enabled = true;

                Mandalina mandalina = new Mandalina();
                ListViewItem ekle = new ListViewItem();
                ekle.Text = "Mandalina";
                Narenciye_Toplam_VitaminA = Narenciye_Toplam_VitaminA + mandalina.VitaminA;
                Narenciye_Toplam_VitaminC = Narenciye_Toplam_VitaminC + mandalina.VitaminC;
                Narenciye_Toplam_Net_Gramaj = Narenciye_Toplam_Net_Gramaj + mandalina.netGramaj;
                ekle.SubItems.Add(mandalina.VitaminA.ToString());
                ekle.SubItems.Add(mandalina.VitaminC.ToString());
                ekle.SubItems.Add(mandalina.netGramaj.ToString());
                listView2.Items.Add(ekle); 
                dogru++;
                lbldogru.Text = dogru.ToString();
            }
            
            ResimDegistir();
        }
        
        
        private void btnkati_Click(object sender, EventArgs e)
        {
            prgrsbrKati.Value = 0;




            if (pictureBox1.ImageLocation == "Resimler/çilek.jpg")//Eger resim cilek ise asagidaki islemler yapilir
            {
                timer2.Enabled = true;



                Cilek cilek = new Cilek();
                
                ListViewItem ekle = new ListViewItem();



                ekle.Text = "Cilek";
                ekle.SubItems.Add(cilek.VitaminA.ToString());
                ekle.SubItems.Add(cilek.VitaminC.ToString());
                ekle.SubItems.Add(cilek.netGramaj.ToString());
                listView1.Items.Add(ekle);
                dogru++;
                lbldogru.Text = dogru.ToString();


            }

            if (pictureBox1.ImageLocation == "Resimler/armut.jpg")//Eger resim armut ise asagidaki islemler yapilir
            {
                timer2.Enabled = true;
                Armut armut = new Armut();
                
                ListViewItem ekle = new ListViewItem();
                ekle.Text = "Armut";
                ekle.SubItems.Add(armut.VitaminA.ToString());
                ekle.SubItems.Add(armut.VitaminC.ToString());
                ekle.SubItems.Add(armut.netGramaj.ToString()); 
                listView1.Items.Add(ekle);
                Kati_Toplam_VitaminA = Kati_Toplam_VitaminA + armut.VitaminA;
                Kati_Toplam_VitaminC = Kati_Toplam_VitaminC + armut.VitaminC;
                dogru++;
                lbldogru.Text = dogru.ToString();
                
              
            }
            if (pictureBox1.ImageLocation == "Resimler/elma.jpg")//Eger resim elma ise asagidaki islemler yapilir

            {

                timer2.Enabled = true;
                Elma elma = new Elma();
                ListViewItem ekle = new ListViewItem();
                ekle.Text = "Elma";
                ekle.SubItems.Add(elma.VitaminA.ToString());
                ekle.SubItems.Add(elma.VitaminC.ToString());
                ekle.SubItems.Add(elma.netGramaj.ToString());
                listView1.Items.Add(ekle);
                Kati_Toplam_VitaminA = Kati_Toplam_VitaminA + elma.VitaminA;
                Kati_Toplam_VitaminC = Kati_Toplam_VitaminC + elma.VitaminC;
                dogru++;
                lbldogru.Text = dogru.ToString();
                
            }
            
            
            
            ResimDegistir();
            
        }

        private void timer2_Tick(object sender, EventArgs e)
        {

            //Bu timer progressbar1 icin
                btnkati.Enabled = false;
                prgrsbrKati.Value += 10;//Timer2 calistigi surece 10'ar artar
                if (prgrsbrKati.Value == 100)//100 oldugunda timer2 durur
                {
                    timer2.Enabled = false;
                    btnkati.Enabled = true;//btnkati aktif hale gelir
                }
            
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            //Bu timer progressbar2 icin
            btnnarenciye.Enabled = false;
            prgrsbrNarenciye.Value += 10;//Timer3 calistigi surece 10'ar artar
            if (prgrsbrNarenciye.Value == 100)//100 oldugunda timer3 durur
            {
                timer3.Enabled = false;
                btnnarenciye.Enabled = true;//btnnarenciye aktif hale gelir
            }
        }

        private void groupBox3_Enter(object sender, EventArgs e)
        {

        }

       
    }
}
