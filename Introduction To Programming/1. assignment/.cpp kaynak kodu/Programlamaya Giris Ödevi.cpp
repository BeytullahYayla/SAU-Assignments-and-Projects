/***************************************************************************
**                               SAKARYA UNIVERSITESI
**                    BILGISAYAR VE BILISIM BILIMLERI FAKULTESI
**                           BILGISAYAR MUHENDISLIGI BOLUMU
**                              PROGRAMLAMAYA GIRIS DERSİ
**
**                     ODEV NUMARASI......:1
**                     OGRENCI ADI........:Beytullah YAYLA
**                     OGRENCI NUMARASI...:b201210008
**                     DERS GURUBU........:A
***************************************************************************/


#include <iostream>
using namespace std;
struct Zaman {
    int saat, dakika, saniye;
    long toplam_saniye;
};

int main()
{
    Zaman zaman;
    cout << "(A:B:C) olacak sekilde saat,dakika,ve saniye degerlerini giriniz" << endl;
    //Degerler arasi iki noktayi char seklinde tanimladim//
    char ikiNokta;
    cin >> zaman.saat >> ikiNokta >> zaman.dakika >> ikiNokta >> zaman.saniye;
    //Degerleri aldiktan sonra toplam saniyeyi yazdirmak icin toplam saniye formulunu kullaniyorum//
    zaman.toplam_saniye = 3600 * zaman.saat + 60 * zaman.dakika + zaman.saniye;
    if (zaman.saat >= 0 && zaman.saat < 24 && zaman.dakika >= 0 && zaman.dakika < 60 && zaman.saniye >= 0 && zaman.saniye <= 60) {
        cout << "Toplam saniye: " << zaman.toplam_saniye << endl;
    }
    //Bir gün 24 saattir.Dijital saatte en son 23.59 vardir.24 ve 24'ten buyuk olamaz.//
    if (zaman.saat < 0 || zaman.saat >=24) {
        cout << "Girilen saat degeri " << zaman.saat << " yanlis girilmistir " << endl;
    }
    //Bir dakika 60 saniyedir.Dijital saatte 60 ve 60'tan sonra 0'lanacagından//
    if (zaman.dakika < 0 || zaman.dakika >= 60) {
        cout << "Girilen dakika degeri " << zaman.dakika << " yanlis girilmistir " << endl;
    }
    //Dijital saatte 60 ve 60'tan sonra 0'lanacagından//
    if (zaman.saniye < 0 || zaman.saniye >= 60) {
        cout << "Girilen saniye degeri " << zaman.saniye << " yanlis girilmistir" << endl;
    }
    system("Pause");
    return 0;



}


