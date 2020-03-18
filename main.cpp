#include <iostream>
#include "Kart.h"
#include "Konsol.h"
#include <io.h>
#include "ctime"

using namespace std;

int kartSayisi;
int secim;

Kart** ptrKart;

void KartlariYazdir(){
    for (int i = 0; i < kartSayisi; ++i)
        cout << i + 1 << "       ";
    cout << endl;
    for (int i = 0; i < kartSayisi; ++i) {
        Konsol::KonsolRenkDegis(ptrKart[i]->GetSembol()->GetKarakterRenk());
        Konsol::KonsolModDegis(true);
        wcout << ptrKart[i]->GetSembol()->GetKarakter();
        Konsol::KonsolModDegis(false);
        cout << "\t";
    }
    Konsol::KonsolRenkDuzelt();
    cout << endl << endl;
}

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

    gecici = ptrKart[degisen1 - 1];
    ptrKart[degisen1 - 1] = ptrKart[degisen2 - 1];
    ptrKart[degisen2 - 1] = gecici;
}

void TersCevir(){
    Kart* gecici;
    int sayac = kartSayisi;

    for (int i = 0; i < kartSayisi / 2; ++i) {
        gecici = ptrKart[i];
        ptrKart[i] = ptrKart[sayac -1];
        ptrKart[sayac - 1] = gecici;
        sayac--;
    }
}

int main() {
    srand((unsigned)time(NULL));

    cout << "Kart adedi giriniz.";
    cin >> kartSayisi;

    ptrKart = new Kart* [kartSayisi];
    for (int i = 0; i < kartSayisi; ++i)
        ptrKart[i] = new Kart();

    do {
        KartlariYazdir();
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

    delete []ptrKart;
    for (int i = 0; i < kartSayisi; ++i)
        delete ptrKart[i];
    return 0;
}