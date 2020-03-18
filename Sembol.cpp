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

wchar_t Sembol::GetKarakter(){
    return karakter[0];
}

wchar_t Sembol::GetKarakterRenk() {
    return karakter[1];
}

wchar_t Sembol::RastgeleKarakterAta(){
    wchar_t* karakterler[5] = {L"\x2665", L"\x2666", L"\x2663", L"\x263B", L"\x2660"};
    karakter[0] = *karakterler[rand() % 5];
    return karakter[0];
}

wchar_t Sembol::RastgeleRenkAta(){
    return karakter[1] = static_cast<Renkler>(rand() % sari);
}