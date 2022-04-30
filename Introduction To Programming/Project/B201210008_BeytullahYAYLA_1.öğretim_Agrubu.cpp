/****************************************************************************
**					       SAKARYA ÜNİVERSİTESİ
**			    BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				     BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				        PROGRAMLAMAYA GİRİŞİ DERSİ
**
**
**              ÖDEV NUMARASI…...:2
**			    ÖĞRENCİ ADI...............:Beytullah YAYLA
**				ÖĞRENCİ NUMARASI.:b201210008
**				DERS GRUBU…………:A
****************************************************************************/

#include <iostream>//cout,cin gibi islemler icin bu kutuphaneyi kullandim
#include <fstream>//Dosya okuma ve yazma islemleri icin bu kutuphaneyi kullandim
#include <string>//String degiskeni icin bu kutuphaneyi kullandim
#include <iomanip>//Setw() kullanmak icin bu kutuphaneyi kullandim
#include <chrono>//Zaman kutuphanesi
#include <ctime>//Zaman kutuphanesi
using namespace std;
int islem = 0;
int main()
{

	char cevap = 'e';
	//Okuyucu.txt
	long long Tc_no;
	string ad;
	string soyad;
	string UyeNo;
	string Telefon;
	string DogumTarihi;
	string gorev;
	int Alabilecegi_Kitap_Sayisi;
	//Kitaplar.txt
	string Isbn;
	string Kitap_ismi;
	string Yazar_adi;
	string Yazar_soyadi;
	string Konu;
	string Tur;
	string Sayfa_sayisi;
	//Odunc.txt
	string Odunc_tarihi;
	string Donus_tarihi;
	//Kullanici.txt
	string id;
	string sifre;
	string gecici_id, gecici_sifre;
	ifstream DosyaOku("Kullanici.txt");
	cout << "Kullanici adinizi giriniz: ";
	cin >> gecici_id;
	cout << "Sifrenizi giriniz: ";
	cin >> gecici_sifre;
	while (DosyaOku >> id >> sifre) {
		//Ilk satirdaki deger kullanicinin id'sine esit ve ikinci satirdaki deger kullanicinin sifresine esitse sistem acilir
		if (id == gecici_id && sifre == gecici_sifre) {
			system("cls");//Konsol Ekranini temizlemek icin kullandim
			cout << "Giris Basarili" << endl;
			//Sisteme giris saati icin asagidaki kodu yazdim
			auto start = chrono::system_clock::now();
			auto simdi = chrono::system_clock::to_time_t(start);
			char girisSaat[30];
			ctime_s(girisSaat, sizeof(girisSaat), &simdi);
			cout << "\n Giris Saati:" << girisSaat << "\n";
			//Istenenler disinda islem yapmamasi icin do-while kullandim
			do {
				cout << "Ne yapmak istiyorsunuz?" << endl;//Menuyu olusturdum
				cout << "1)Okuyucu kaydi" << endl;
				cout << "2)Okuyucu kaydi guncelleme" << endl;
				cout << "3)Okuyucu silme" << endl;
				cout << "4)Okuyucu kitap odunc verme" << endl;
				cout << "5)Okuyucu kitap geri dondurme" << endl;
				cout << "6)Okuyucu uzerindeki kitaplar listesi" << endl;
				cout << "7)Kitap ekleme" << endl;
				cout << "8)Kitap silme" << endl;
				cout << "9)Kitap duzeltme" << endl;
				cout << "10)Cikis" << endl;
				cout << endl;
				cout << "Hangi islemi yapmak istiyorsunuz?" << endl;
				cin >> islem;
				//Secilen islem 1 ise asagidaki islemler yapilir
				if (islem == 1) {
					system("cls");
					cout << "************Okuyucu kayit ekleme************" << endl;
					//Kullanici birden fazla art arda hasta kaydi eklemek isteyebilir.Bu yüzden do-while kullandim
					do {


						ofstream DosyaYaz;//Kullanicidan gerekli verileri dosyaya yazmasi icin olusturdum
						DosyaYaz.open("Okuyucu.txt", ios::app);//Okuyucu.txt adli dosyayi yazdirma olarak actim
						//Kullanicidan dosyaya yazilacak verileri istedim
						cout << "Okuyucu TC No: "; cin >> Tc_no;
						long long tcno2 = Tc_no;
						int tc_uzunlugu;
						for (tc_uzunlugu = 1; tcno2 > 10; tc_uzunlugu++) {
							tcno2 = tcno2 / 10;
						}
						if (tc_uzunlugu == 11) {
							cout << "Okuyucu isim: "; cin >> ad;
							cout << "Okuyucu soyisim: "; cin >> soyad;
							cout << "Okuyucu UyeNO :"; cin >> UyeNo;
							cout << "Okuyucu telefon:"; cin >> Telefon;
							cout << "Okuyucu dogum tarihi:"; cin >> DogumTarihi;
							cout << "Okuyucu gorev: "; cin >> gorev;
							cout << "Okuyucunun alabilecegi kitap sayisi:"; cin >> Alabilecegi_Kitap_Sayisi;

							DosyaYaz << "\n" << Tc_no << "  " << ad << "  " << soyad << "  " << UyeNo << "  " << Telefon << "  " << DogumTarihi << "  " << gorev << "  " << Alabilecegi_Kitap_Sayisi << endl;//Dosyaya yazdirdim
							DosyaYaz.close();
						}
						else
							cout << "Girdiginiz Tc No 11 haneli degil" << endl;

						cout << "Devam etmek istiyor musunuz?(EVET=e , HAYIR=h)" << endl;
						cin >> cevap;




					} while (cevap == 'e');

					//Cikis Saati
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "\n Cikis Saati:" << cikisSaat << "\n";

				}

				//Yapilacak islem 2 ise calisacak kodlari yazdim
				if (islem == 2)
				{
					long long sorgu_TC;//Sorgu yapilacak okuyucu icin tc istedim
					system("cls"); //Ekran temizleme komutu

					cout << "************ 2- Okuyucu Kaydi Guncelleme ************" << endl;


					ifstream DosyaOku("Okuyucu.txt"); //Okuyucu dosyasini okuttum
					ofstream DosyaYaz("Okuyucu.tmp", ios::app);//Gecici bir dosya açtım
					int gcc = 0;

					do {

						cout << "Duzenlenecek Okuyucunun TC. Kimlik Numarasi...:"; cin >> sorgu_TC; //düzenlenecek okuyucunun kimlik numarasını sorgulattım.

						while (DosyaOku >> Tc_no >> ad >> soyad >> UyeNo >> Telefon >> DogumTarihi >> gorev >> Alabilecegi_Kitap_Sayisi) //Okuyucu.txt'yi okuttum
						{


							if (sorgu_TC == Tc_no)//Sorgulanan TC. Kimlik numarası varsa Okuyucu bilgilerini gösterir.
							{
								cout << "************ Okuyucu Bilgileri ************" << endl << endl;//Okuyucu bilgieri yazdırılır.


								cout << "Okuyucu  Adi :" << ad << endl;
								cout << "Okuyucu Soyadi :" << soyad << endl;
								cout << "Okuyucu UyeNo :" << UyeNo << endl;
								cout << "Okuyucu Telefon Numarasi :" << Telefon << endl;
								cout << "Okuyucu dogum tarihi :" << DogumTarihi << endl;
								cout << "Okuyucu gorev:" << gorev << endl;
								cout << "Okuyucunun alabilecegi kitap sayisi:" << Alabilecegi_Kitap_Sayisi << endl;
								cout << "Ouyucu Bilgilerini Yenileyiniz..." << endl << endl;//Okuyucu bilgilerini dışardan girdirmesini istedim

								//Kullanicidan guncellenecek bilgileri yeniden girmesini istedim
								cout << "Okuyucu  Adi :"; cin >> ad;
								cout << "Okuyucu Soyadi :"; cin >> soyad;
								cout << "Okuyucu UyeNo :"; cin >> UyeNo;
								cout << "Okuyucu Telefon Numarasi :"; cin >> Telefon;
								cout << "Okuyucu dogum tarihi :"; cin >> DogumTarihi;
								cout << "Okuyucu gorev:"; cin >> gorev;
								cout << "Okuyucunun alabilecegi kitap sayisi:"; cin >> Alabilecegi_Kitap_Sayisi;




								DosyaYaz << "\n" << sorgu_TC << " " << ad << " " << soyad << " " << UyeNo << " " << Telefon << " " << DogumTarihi << " " << gorev << " " << Alabilecegi_Kitap_Sayisi << endl;//Düzenlenen dosya bilgileri yazdırılır.
								gcc = 1;


							}
							//Eger tc'ler eslesmiyorsa gecici dosyaya yazar
							else
								DosyaYaz << "\n" << Tc_no << " " << ad << " " << soyad << " " << UyeNo << " " << Telefon << " " << DogumTarihi << " " << gorev << " " << Alabilecegi_Kitap_Sayisi << endl;//Tc'ler eslesmezse gecici dosyaya yazilir ve silinir

						}
						//Basta tanimlanan gcc hala 0'a esitse donguye girmemis demektir ve boyle bir kayit yoktur
						if (gcc == 0)
							cout << "Boyle bir kayit bulunamadigindan isleme devam edemiyoruz :(" << endl;


						DosyaYaz.close();
						DosyaOku.close();
						remove("Okuyucu.txt");// Okuyucu.txt dosyası silinirken
						rename("Okuyucu.tmp", "Okuyucu.txt");//Okuyucu.tmp dosyası Okuyucu.txt dosyası olarak değiştirirlir.
						cout << "Guncellemeye devam etmek istiyor musunuz(e/h)" << endl;
						cin >> cevap;

					} while (cevap == 'e');
					system("cls");
					//sistem cikis saati
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";
				}
				//Secilen islem 3 ise calisacak kodlari yazdim
				if (islem == 3) {
					long long sil_Tc;
					system("cls");
					cout << "************Okuyucu kaydi silme************" << endl << endl;
					ifstream DosyaOku("Okuyucu.txt"); //Okuyucu.txt'yi okutmak icin
					ofstream DosyaYaz("Okuyucu.tmp", ios::app);//Gecici bir dosya açtım



					cout << "Kaydi Silinecek Okuyucunun TC. Kimlik Numarasi...:"; cin >> sil_Tc; //Düzenlenecek kimlik numarasını sorgulattım.


					while (DosyaOku >> Tc_no >> ad >> soyad >> UyeNo >> Telefon >> DogumTarihi >> gorev >> Alabilecegi_Kitap_Sayisi)// Okuyucu.txt dosyasını sonuna kadar okuttum.
					{


						if (sil_Tc == Tc_no)//Sorgulanan TC. Kimlik numarası varsa hasta bilgilerini gösterir.
						{
							cout << "************ Okuyucu Bilgileri ************" << endl;//Okuyucu bilgieri yazdırılır.


							cout << "Okuyucu  Adi :" << ad << endl;
							cout << "Okuyucu Soyadi :" << soyad << endl;
							cout << "Okuyucu UyeNo :" << UyeNo << endl;
							cout << "Okuyucu Telefon Numarasi :" << Telefon << endl;
							cout << "Okuyucu dogum tarihi :" << DogumTarihi << endl;
							cout << "Okuyucu gorev:" << gorev << endl;
							cout << "Okuyucunun alabilecegi kitap sayisi:" << Alabilecegi_Kitap_Sayisi << endl;

						}
						//Tcler eslesmesse gecici dosyaya yazilir
						else

							DosyaYaz << "\n" << Tc_no << " " << ad << " " << soyad << " " << UyeNo << " " << Telefon << " " << DogumTarihi << " " << gorev << " " << Alabilecegi_Kitap_Sayisi;//Tc'ler esit degilse gecici.tmp'ye yazilir ve silinir


					}

					DosyaYaz.close();
					DosyaOku.close();
					remove("Okuyucu.txt");// Okuyucu.txt dosyası silinirken
					rename("Okuyucu.tmp", "Okuyucu.txt");//Okuyucu.tmp dosyası Okuyucu.txt dosyası olarak değiştirirlir.
					cout << " Islem basariyla gerceklesti..." << endl << endl;


					//Cikis saati
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";


				}
				//Secilen islem 4 ise yapilacak islemleri yazdim
				if (islem == 4) {
					long long TC;//Tc'nin eslesip eslesmedşgine bakmak icin
					string IsbnNO;//Isbn'nin eslenip eslesmedigine bakmak icin
					int tc_uzunlugu;
					system("cls");
					cout << "************ Okuyucu Kitap Odunc Verme ************" << endl;
					cout << "Okuyucu TC :"; cin >> TC;
					ifstream DosyaOku("Okuyucu.txt");



					while (DosyaOku >> Tc_no >> ad >> soyad >> UyeNo >> DogumTarihi >> Telefon >> gorev >> Alabilecegi_Kitap_Sayisi) //Okuyucu.txt'yi sonuna kadar okuttum
					{

						//Tc'ler eslesiyorsa asagidaki islemler yapilir
						if (TC == Tc_no) {
							cout << "Okuyucu Bilgileri";
							cout << "Tc No:" << Tc_no << endl;
							cout << "Ad:" << ad << endl;
							cout << "Soyad:" << soyad << endl;
							cout << "UyeNo:" << UyeNo << endl;
							cout << "Dogum Tarihi:" << DogumTarihi << endl;
							cout << "Telefon" << Telefon << endl;
							cout << "Alabilecegi Kitap Sayisi" << Alabilecegi_Kitap_Sayisi << endl;
							DosyaOku.close();
							ifstream DosyaOku("Kitaplar.txt");
							ofstream DosyaYaz("Odunc.txt", ios::app);
							cout << "Odunc vermek istediginiz kitabin ISBN numarasini giriniz:"; cin >> IsbnNO;
							while (DosyaOku >> Isbn >> Kitap_ismi >> Yazar_adi >> Yazar_soyadi >> Konu >> Sayfa_sayisi)//Kitaplar.txt'yi sona kadar okuttum
							{
								system("cls");
								//Isbn'ler eslesiyorsa asagidaki islemler yapilir
								if (Isbn == IsbnNO) {

									cout << "Kitap Isbn:" << Kitap_ismi << endl;
									cout << "Yazar Adi:" << Yazar_adi << endl;
									cout << "Yazar Soyadi:" << Yazar_soyadi << endl;
									cout << "Tur:" << Tur << endl;
									cout << "Konu:" << Konu << endl;
									cout << "Kitap Sayfa Sayisi" << Sayfa_sayisi << endl;
									cout << endl << endl;
									cout << "Kitabi odunc aldiginiz tarihi giriniz(GG/AA/YY): "; cin >> Odunc_tarihi;
									cout << "Kitabi en gec bir ay sonra iade edecek sekilde donus tarihini giriniz(GG/AA/YY): "; cin >> Donus_tarihi;
									DosyaYaz << "\n" << IsbnNO << " " << Tc_no << " " << Odunc_tarihi << " " << Donus_tarihi << endl;
									break;

								}
								else
									DosyaYaz << "\n" << Isbn << " " << Tc_no << " " << Odunc_tarihi << " " << Donus_tarihi;//Isbn'ler esit degilse gecici dosyaya yazilir ve silinir




							}
							DosyaYaz.close();
							DosyaOku.close();
						}

					}











				}

				//Secilen islem 5 ise asagidaki islemler yapilir
				if (islem == 5)
				{
					string IsbnSil;
					system("cls");
					cout << "************ Odunc Kitap Geri Dondurme************" << endl;
					ifstream DosyaOku("Odunc.txt");//Odunc.tx'yi okutmak icin
					ofstream DosyaYaz("Odunc.tmp", ios::app);


					int gcc = 0;
					while (DosyaOku >> Isbn >> Tc_no >> Odunc_tarihi >> Donus_tarihi)//DosyaOku da belirttiğim Hasta.txt dosyasını sonuna kadar okuttum.
					{


						cout << "Odunc alinacak kitabin Isbn numarasini giriniz:"; cin >> IsbnSil;
						//Silinecek ısbn'ler eslesirse asagidaki islemler yapilir
						if (IsbnSil == Isbn) {
							cout << "Odunc alinacak kitabin Isbn no: " << Isbn << endl;
							cout << "Odunc alinacak okuyucunun TC NO: " << Tc_no << endl;
							cout << "Odunc alinacak kitabin Odunc tarihi: " << Odunc_tarihi << endl;
							cout << "Odunc alinacak kitabin  donus tarihi: " << Donus_tarihi << endl << endl;
							cout << "Kitap iadesi gerceklesti..." << endl;

						}




						//gecici dosyaya yazilir
						else
						{
							DosyaYaz << IsbnSil << " " << Tc_no << " " << Odunc_tarihi << " " << Donus_tarihi;
						}
					}
					//gcc=0 ise donguye girmemistir yani tc'ler eslesmemistir


					DosyaYaz.close();//DosyaOku kapanir
					DosyaOku.close();//DosyaOku kapanir
					remove("Odunc.txt");//Odunc.txt kaldirilirken
					rename("Odunc.tmp", "Odunc.txt");//Odunc.tmp'nin adi Odunc.txt olur
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";

				}
				//Yapilan islem 6'ysa asagidakiler yapilir.
				if (islem == 6) {
					long long sorgu_tc;
					system("cls");
					cout << "************Okuyucu uzerindeki kitaplar listesi************" << endl;
					ifstream DosyaOku("Okuyucu.txt");//Okuyucu.txt'yi okumak icin actim
					cout << "Okuyucu'nun Tc'sini giriniz:"; cin >> sorgu_tc;
					while (DosyaOku >> Tc_no >> ad >> soyad >> UyeNo >> DogumTarihi >> Telefon >> gorev >> Alabilecegi_Kitap_Sayisi) {
						//Tc'ler eslesirse okuyucu bilgilerini gosterir
						if (sorgu_tc == Tc_no) {
							cout << endl << endl;
							cout << "Okuyucu Bilgileri: " << endl;
							cout << "Tc No: " << Tc_no << endl;
							cout << "Ad: " << ad << endl;
							cout << "Soyad: " << soyad << endl;
							cout << "UyeNo: " << UyeNo << endl;
							cout << "Dogum Tarihi: " << DogumTarihi << endl;
							cout << "Telefon: " << Telefon << endl;
							cout << "Gorev: " << gorev << endl;
							cout << "Alabilecegi Kitap Sayisi: " << Alabilecegi_Kitap_Sayisi << endl;
							DosyaOku.close();
							ifstream DosyaOku("Odunc.txt");//Odunc txt.'yi okuttum
							while (DosyaOku >> Isbn >> Tc_no >> Odunc_tarihi >> Donus_tarihi) {
								cout << endl << endl;
								//Sorgulanan tc'ler esit ise odunc kitaplar yazdirilir
								if (sorgu_tc == Tc_no) {
									cout << setw(10) << "TCno" << setw(10) << "Isbn" << setw(15) << "Odunc Tarihi" << setw(20) << "Donus Tarihi" << endl;
									cout << setw(10) << Tc_no << setw(10) << Isbn << setw(15) << Odunc_tarihi << setw(20) << Donus_tarihi << endl;
								}


							}
							DosyaOku.close();
							cout << endl << endl;
							//Cikis Saati
							auto finish = chrono::system_clock::now();
							auto simdibitis = chrono::system_clock::to_time_t(finish);
							char cikisSaat[30];
							ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
							cout << "Cikis Saati:" << cikisSaat << "\n";

						}



					}


				}
				//Secilen islem 7 ise asagidaki kod calisir
				if (islem == 7) {
					system("cls");//Ekran temizleme komutu
					cout << "************Kitap Kayit Ekleme************" << endl;
					do {
						ofstream DosyaYaz;//Kullanicidan gerekli verileri dosyaya yazmasi icin olusturdum
						DosyaYaz.open("Kitaplar.txt", ios::app);
						//Kullanicidan dosyaya yazilacak verileri istedim
						cout << "Kitap Isbn:"; cin >> Isbn;
						cout << "Kitap Ismi: "; cin >> Kitap_ismi;
						cout << "Yazar Adi: "; cin >> Yazar_adi;
						cout << "Yazar Soyadi:"; cin >> Yazar_soyadi;
						cout << "Konu:"; cin >> Konu;
						cout << "Tur:"; cin >> Tur;
						cout << "Sayfa Sayisi: "; cin >> Sayfa_sayisi;
						DosyaYaz << Isbn << "  " << Kitap_ismi << "  " << Yazar_adi << "  " << Yazar_soyadi << "  " << Konu << "  " << Konu << "  " << Tur << "  " << Sayfa_sayisi << endl;
						cout << "Devam etmek istiyor musunuz?(EVET=e , HAYIR=h)" << endl;
						cin >> cevap;
						DosyaYaz.close();
					} while (cevap == 'e');
					//Cikis saati
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";

				}


				//Secilen islem 8 ise calisacak kodlari yazdim
				if (islem == 8) {
					string sil_ISBN2;
					system("cls");



					cout << "************Kitap kaydi silme************" << endl << endl;
					ifstream DosyaOku("Kitaplar.txt"); //Dosya okumak için gerekli kodu yazdım.
					ofstream DosyaYaz("Kitaplar.tmp",ios::app);//Gecici bir dosya açılır
					


					cout << "Silinecek Kitabin ISBN Numarasi...:"; cin >> sil_ISBN2; //düzenlenecek kimlik numarasını sorgulattım.


					while (DosyaOku >> Isbn >> Kitap_ismi >> Yazar_adi >> Yazar_soyadi >> Konu >> Tur >> Sayfa_sayisi) //DosyaOku da belirttiğim Kitaplar.txt dosyasını sonuna kadar okuttum.
					{


						if (Isbn == sil_ISBN2)//Sorgulanan TC. Kimlik numarası varsa Okuyucu bilgilerini gösterir.
						{
							cout << "************ Kitap Bilgileri ************" << endl << endl;//Kitap bilgieri yazdırılır.


							cout << "Kitap  Adi :" << Kitap_ismi << endl;
							cout << "Yazar adi :" << Yazar_adi << endl;
							cout << "Yazar soyadi :" << Yazar_soyadi << endl;
							cout << "Konu   :" << Konu << endl;
							cout << "Tur   :" << Tur << endl;
							cout << "Sayfa Sayisi:" << Sayfa_sayisi << endl;
							


						}
						else {

							DosyaYaz << Isbn << " " << Kitap_ismi << " " << Yazar_adi << " " << Yazar_soyadi << " " << Konu << " " << Tur << " " << Sayfa_sayisi << " \n";//Tcler eslesmiyorsa gecici dosyaya yazilir ve silinir

						}
					}
					



					DosyaYaz.close();
					DosyaOku.close();
					remove("Kitaplar.txt");// Okuyucu.txt dosyası silinirken
					rename("Kitaplar.tmp", "Kitaplar.txt");//Okuyucu.tmp dosyası Okuyucu.txt dosyası olarak değiştirirlir.

					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";



				}
				//Secilen islem 9 ise calisacak kodlari yazdim
				if (islem == 9)
				{

					string sorgu_isbn;
					system("cls"); //Ekran temizleme komutu

					cout << "************ 9- Kitap Kaydi Guncelleme ************" << endl;

					ifstream DosyaOku("Kitaplar.txt"); //Dosya okutabilmek  için gerekli kodu yazdım.
					ofstream DosyaYaz("Kitaplar.tmp", ios::app);//Gecici bir dosya açılır
					int gcc = 0;


					cout << "Duzenlenecek Kitabin Isbn Numarasi...:"; cin >> sorgu_isbn; //düzenlenecek isbn sorgulattım.


					while (DosyaOku >> Isbn >> Kitap_ismi >> Yazar_adi >> Yazar_soyadi >> Konu >> Tur >> Sayfa_sayisi) //DosyaOku da belirttiğim Okuyucu.txt dosyasını sonuna kadar okuttum.
					{


						if (Isbn == sorgu_isbn)//Sorgulanan TC. Kimlik numarası varsa kitap  bilgilerini gösterir.
						{
							cout << "************ Kitap Bilgileri ************" << endl << endl;


							cout << "Kitap Adi :" << Kitap_ismi << endl;
							cout << "Yazar Adi :" << Yazar_adi << endl;
							cout << "Yazar Soyadi :" << Yazar_soyadi << endl;
							cout << "Konu :" << Konu << endl;
							cout << "Tur :" << Tur << endl;
							cout << "Sayfa Sayisi:" << Sayfa_sayisi << endl;
							cout << "Kitap Bilgilerini Yenileyiniz..." << endl << endl;//Okuyucu bilgilerini dışardan girdirmesini istedim
							cout << "Kitap Adi :"; cin >> Kitap_ismi;
							cout << "Yazar Adi :"; cin >> Yazar_adi;
							cout << "Yazar Soyadi :"; cin >> Yazar_soyadi;
							cout << "Konu :"; cin >> Konu;
							cout << "Tur :"; cin >> Tur;
							cout << "Sayfa Sayisi:"; cin >> Sayfa_sayisi;






							DosyaYaz << "\n" << sorgu_isbn << " " << Kitap_ismi << " " << Yazar_adi << " " << Yazar_soyadi << " " << Konu << " " << Tur << " " << Sayfa_sayisi << " " << endl;//Düzenlenen dosya bilgileri yazdırılır.
							gcc = 1;


						}

						else
							DosyaYaz << "\n" << Isbn << " " << Kitap_ismi << " " << Yazar_adi << " " << Yazar_soyadi << " " << Konu << " " << Tur << " " << Sayfa_sayisi << " " << endl;;//Tc'ler eslesmiyorsa gecici dosyaya yazar

					}
					//Basta tanimlanan gcc hala 0'a esitse donguye girmemis demektir ve boyle bir kayit yoktur
					if (gcc == 0)
						cout << "Boyle bir kayit bulunamadigindan isleme devam edemiyoruz :(" << endl;


					DosyaYaz.close();//Yazma dosyasi kapandi
					DosyaOku.close();//Okuma dosyasi kapandi
					remove("Kitaplar.txt");// Kitaplar.txt dosyası silinirken
					rename("Kitaplar.tmp", "Kitaplar.txt");//Kitaplar.tmp dosyası Kitaplar.txt dosyası olarak değiştirirlir.



					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";
				}
				//Secilen islem 10 ise asagidaki islemler yapilir
				if (islem == 10) {
					system("cls");
					cout << "Cikis yapildi" << endl;
					auto finish = chrono::system_clock::now();
					auto simdibitis = chrono::system_clock::to_time_t(finish);
					char cikisSaat[30];
					ctime_s(cikisSaat, sizeof(cikisSaat), &simdibitis);
					cout << "Cikis Saati:" << cikisSaat << "\n";
					exit(10);
				}

			} while (islem != 1 || islem != 2 || islem != 3 || islem != 4 || islem != 5 || islem != 6 || islem != 7 || islem != 8 || islem != 9 || islem != 10);

		}
	}

	DosyaOku.close();

}

