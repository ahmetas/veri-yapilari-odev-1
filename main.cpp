#include <iostream>
#include "Kart.h"
#include "ctime"
#include "Konsol.h"

using namespace std;

int kartSayisi;
Kart *ptrKart;

void KartlariYazdir(){
    for (int i = 0; i < kartSayisi; ++i) {
        cout << i + 1 << "       ";
    }
    cout << endl;
    for (int i = 0; i < kartSayisi; ++i) {
        Konsol::RastgeleYaziRengiMi(true);
        cout << ptrKart[i].GetSembol()->GetKarakter();
        Konsol::RastgeleYaziRengiMi(false);
        cout << "\t";
    }
}

int main() {
    srand((unsigned)time(NULL));

    cout << "Kart adedi giriniz.";
    cin >> kartSayisi;

    ptrKart = new Kart [kartSayisi];

    KartlariYazdir();

    delete []ptrKart;
    return 0;
}