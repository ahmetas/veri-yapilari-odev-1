#include <iostream>
#include "Kart.h"
#include "Konsol.h"
#include "ctime"

using namespace std;

int kartSayisi;
int secim;

Kart *ptrKart;

void KartlariYazdir(){
    for (int i = 0; i < kartSayisi; ++i) {
        cout << i + 1 << "       ";
    }
    cout << endl;
    for (int i = 0; i < kartSayisi; ++i) {
        Konsol::KonsolRenkDegis(ptrKart[i].GetSembol()->GetKarakterRenk());
        cout << ptrKart[i].GetSembol()->GetKarakter();
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

int main() {
    srand((unsigned)time(NULL));

    cout << "Kart adedi giriniz.";
    cin >> kartSayisi;

    ptrKart = new Kart [kartSayisi];

    do {
        KartlariYazdir();
        IslemlerMenu();
        cin >> secim;
    }
    while (secim != 3);

    delete []ptrKart;
    return 0;
}