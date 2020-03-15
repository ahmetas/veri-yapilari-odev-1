#include <iostream>
#include "Kart.h"
#include "ctime"
#include "Konsol.h"

using namespace std;

int main() {
    srand((unsigned)time(NULL));

    int kartSayisi;
    cout << "Kart adedi giriniz. ";
    cin >> kartSayisi;
    Kart *ptrKart;
    ptrKart = new Kart [kartSayisi];

    for (int i = 0; i < kartSayisi; ++i) {
        cout << i + 1 << "      ";
    }
    cout << endl;
    for (int i = 0; i < kartSayisi; ++i) {
        Konsol::SembolYazdir(ptrKart[i].GetSembol()->GetKarakter());
        cout << "     ";
    }

    delete []ptrKart;
    return 0;
}
