#include <cstdlib>
#include "Sembol.h"

enum Renkler{
    mavi = 1,
    yesil = 2,
    kirmizi = 4,
    magenta = 5,
    kahverengi = 6,
    sari = 14
};

Sembol::Sembol() {
    karakter[0] = RastgeleKarakterAta();
    karakter[1] = RastgeleRenkAta();
}

char Sembol::GetKarakter(){
    return karakter[0];
}

char Sembol::GetKarakterRenk() {
    return karakter[1];
}

char Sembol::RastgeleKarakterAta(){
    char karakterler[5] = {'#', '$', '&', '/', '?'};
    karakter[0] = karakterler[rand() % 5];
    return karakter[0];
}

char Sembol::RastgeleRenkAta(){
    return karakter[1] = static_cast<Renkler>(rand() % sari);
}