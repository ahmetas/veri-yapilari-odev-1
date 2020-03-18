#include <iostream>
#include "Yazici.h"
#include "Konsol.h"

using namespace std;

Yazici::Yazici(){
    ptrKart = new Kart*[kartSayisi];
}

void Yazici::KartlariYazdir() {
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