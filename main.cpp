#include <iostream>
#include "Kart.h"
#include <io.h>
#include "ctime"
#include "Yazici.h"

using namespace std;

int secim;

Yazici yazici;

void IslemlerMenu(){
    cout << "islemler" << endl;
    cout << "1. Kart Degistir" << endl;
    cout << "2. Ters Cevir" << endl;
    cout << "3. Cikis" << endl;
    cout << ">>";
}

void KartDegistir(){
    int degisen1, degisen2;
    Kart* gecici;

    cout << "Kacinci Karti Degistirmek istiyorsun:";
    cin >> degisen1;
    cout << "Hangi Kart ile Degistirmek istiyorsun:";
    cin >> degisen2;

    gecici = yazici.ptrKart[degisen1 - 1];
    yazici.ptrKart[degisen1 - 1] = yazici.ptrKart[degisen2 - 1];
    yazici.ptrKart[degisen2 - 1] = gecici;
}

void TersCevir(){
    Kart* gecici;
    int sayac = yazici.kartSayisi;

    for (int i = 0; i < yazici.kartSayisi / 2; ++i) {
        gecici = yazici.ptrKart[i];
        yazici.ptrKart[i] = yazici.ptrKart[sayac - 1];
        yazici.ptrKart[sayac - 1] = gecici;
        sayac--;
    }
}

int main() {
    srand((unsigned)time(NULL));

    cout << "Kart adedi giriniz.";
    cin >> yazici.kartSayisi;

    yazici.ptrKart = new Kart* [yazici.kartSayisi];
    for (int i = 0; i < yazici.kartSayisi; ++i)
        yazici.ptrKart[i] = new Kart();

    do {
        yazici.KartlariYazdir();
        IslemlerMenu();
        cin >> secim;
        switch (secim) {
            case 1:
                KartDegistir();
                break;
            case 2:
                TersCevir();
                break;
            case 3:
                return 0;
            default: cout << "Lutfen gecerli bir secim yapiniz." << endl;
        }
    }while (secim != 3);

    delete []yazici.ptrKart;
    for (int i = 0; i < yazici.kartSayisi; ++i)
        delete yazici.ptrKart[i];
    return 0;
}