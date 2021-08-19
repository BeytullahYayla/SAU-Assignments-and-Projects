/****************************************************************************
**					     SAKARYA ÜNIVERSITESI
**			   BİLGİSAYAR VE BILISIM BILMLERI FAKULTESI
**				   BILGISAYAR MUHENDISLIGI BOLUMU
**				      PROGRAMLAMAYA GIRISI DERSI
**
**				ODEV NUMARASI…...:2
**				OGRENCI ADI...............:Beytullah YAYLA
**				OGRENCI NUMARASI.:b201210008
**				DERS GRUBU…………:A
**
****************************************************************************/

#include <iostream>
#include <Windows.h>//Gotoxy'yi kullanmak icin
using namespace std;
//Burada videoda verilen fonksiyonu kullandim
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Burada cati classi kullandim
class Cati
{
public:
	int yukseklik;
	int genislik;
	int CatiYuksekligi;
	int x;
	int y;

	Cati(int genislik, int CatiYuksekligi, int x, int y)//Cati constructoru
	{


		this->genislik = genislik;
		this->CatiYuksekligi = CatiYuksekligi;
		this->x = x;
		this->y = y;


	}

	//Cati cizdirmek icin
	void CatiCiz() {
		//Catinin yuksekligini ayarlayan for
		for (int i = 0; i <= CatiYuksekligi - 1; i++) {
			gotoxy(1, y + i );
			//Catinin her katindaki bosluk sayisini ayarlayan for dongusu
			for (int j = 0; j < CatiYuksekligi + x - 2 - i; j++) {
				cout << " ";
			}
			//Catinin her katindaki sekil sayisini ayarlayan for dongusu
			for (int k = 0; k <= genislik - 2 - 2 * (CatiYuksekligi - 1 - i) + 1; k++) {
				cout << "*";
			}
			cout << endl;

		}
		gotoxy(0, yukseklik + y);//İmleci son kaldigim yerde birakmak icin
	}
};
//Kapi sinifi
class Kapi {
public:

	int genislik;
	int yukseklik;
	int CatiYuksekligi;
	int KapiYuksekligi;
	int KapiGenisligi;
	int x;
	int y;
	//Kapi constructor
	Kapi(int genislik, int yukseklik,int CatiYuksekligi, int KapiYuksekligi, int KapiGenisligi, int x, int y) {
		this->genislik = genislik;
		this->yukseklik = yukseklik;
		this->CatiYuksekligi = CatiYuksekligi;
		this->KapiYuksekligi = KapiYuksekligi;
		this->KapiGenisligi = KapiGenisligi;
		this->x = x;
		this->y = y;
     }

	//Kapiyi cizdirecek fonskiyon 
	void KapiCiz() {
		//Kapinin boyutlarini genislik ve yukseklikle orantili yaptim
		int kapiGenisligi = genislik / 4;
		int KapiYuksekligi = yukseklik / 2;

		for (int i = 0; i < KapiYuksekligi; i++) {
			//Bu for kapinin yuksekligini ayarlar 
			gotoxy(x - 1 + 6, y + yukseklik + i - KapiYuksekligi+CatiYuksekligi);
			for (int j = 0; j < kapiGenisligi; j++) {
				//Bu for kapinin her satirdaki genisligini ayarlar
                cout << "#";
			}
			cout << endl;
		}

	}
};


//Kat sinifi
class Kat {
public:
	char a = 219;//ASCI tablosundaki 219. karakter
	int yukseklik;
	int CatiYuksekligi;
	int genislik;
	int x;
	int y;
	//Kat constructor
	Kat(int a,int CatiYuksekligi, int yukseklik, int genislik, int x, int y) {
		this->a = a;
		this->CatiYuksekligi = CatiYuksekligi;
		this->yukseklik = yukseklik;
		this->genislik = genislik;
		this->x = x;
		this->y = y;




	}

	void KatCiz() {

		system("cls");
		//Katin ust duvarini soldan saga dogru cizdirir.
		for (int i = x; i < genislik + x; i++) {
			gotoxy(i, y+CatiYuksekligi);
			cout << a;
		}
        //Katin sag yan duvarini yukardan asagi cizdirir
		for (int i = 0; i < yukseklik; i++) {
			gotoxy(genislik + x - 1, i + y+CatiYuksekligi);
			cout << a;
		}
        //Katin alt duvarini sagdan sola dogru yazdirir.
		for (int i = 0; i < genislik; i++) {
			gotoxy(genislik + x - i - 1, yukseklik+CatiYuksekligi - 1 + y);
			cout << a;

		}
		//Katin sol yan duvarini asagidan yukari cizdirir
		for (int i = 0; i < yukseklik; i++) {
			gotoxy(x, yukseklik - i - 1 + y+CatiYuksekligi);
			cout << a;

		}
		gotoxy(0, yukseklik + y);//Imleci kaydirmak icin
	}
};

class Ev {

public:
 //Bu fonksiyon diger olusturdugumuz siniflardaki sekil cizme fonksiyonlarini kullanarak ev cizdirir.
	void EvCiz() {
		system("cls");
		char a = 219;//ASCI tablosundaki 219. karakter
		int yukseklik = 0;
		int KapiYuksekligi = 0;
		int KapiGenisligi = 0;
		int genislik = 0;
		int CatiYuksekligi = 0;
		int x = 0;
		int y = 0;
		cout << "Yukseklik: "; cin >> yukseklik;//Yukseklik degerini girdirdim
		cout << "Genislik: "; cin >> genislik;//Genislik degerini girdirdim
		cout << "Cati Yuksekligi: "; cin >> CatiYuksekligi;//Catinin yuksekligini girdirdim
		cout << "X: "; cin >> x;//x koordinati
		cout << "Y: "; cin >> y;//y koordinati
		//Sirasi ile cati,kat ve kapi nesnelerini olusturdum
		Cati cati = Cati(genislik, CatiYuksekligi, x, y);
		Kat kat = Kat(a,CatiYuksekligi, yukseklik, genislik, x, y);
		Kapi kapi = Kapi(genislik, yukseklik,CatiYuksekligi, KapiYuksekligi, KapiGenisligi, x, y);
        kat.KatCiz();
		cati.CatiCiz();
		kapi.KapiCiz();
		cin.get();
     }
};


int main() {
   Ev ev;//ev nesnesini olusturdum
   ev.EvCiz();//Ev ciz metodunu cagirarak evi cizdirdim





}