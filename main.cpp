#include <iostream>
#include "Kart.h"
#include "Konsol.h"
#include "ctime"

using namespace std;

int kartSayisi;
int secim;

Kart** ptrKart;

void KartlariYazdir(){
    for (int i = 0; i < kartSayisi; ++i) {
        cout << i + 1 << "       ";
    }
    cout << endl;
    for (int i = 0; i < kartSayisi; ++i) {
        Konsol::KonsolRenkDegis(ptrKart[i]->GetSembol()->GetKarakterRenk());
        cout << ptrKart[i]->GetSembol()->GetKarakter();
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
    Kart** gecici;
    gecici = new Kart*[kartSayisi];
    int sayac = kartSayisi;

    for (int i = 0; i < kartSayisi; ++i) {
        gecici[i] = ptrKart[sayac - 1];
        sayac--;
    }
    for (int j = 0; j < kartSayisi; ++j) {
        ptrKart[j] = gecici[j];
    }
}

int main() {
    srand((unsigned)time(NULL));

    cout << "Kart adedi giriniz.";
    cin >> kartSayisi;

    ptrKart = new Kart* [kartSayisi];
    for (int i = 0; i < kartSayisi; ++i) {
        ptrKart[i] = new Kart();
    }

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
            default: cout << "Lutfen gecerli bir secim yapiniz." << endl;
        }
    }
    while (secim != 3);

    delete []ptrKart;
    return 0;
}