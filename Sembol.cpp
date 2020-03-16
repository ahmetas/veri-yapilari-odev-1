#include <cstdlib>
#include "Sembol.h"

Sembol::Sembol() {
    karakter = RastgeleKarakterAta();
}

char Sembol::GetKarakter(){
    return karakter;
}

char Sembol::RastgeleKarakterAta(){
    char karakterler[5] = {'#', '$', '&', '/', '?'};
    karakter = karakterler[rand() % 5];
    return karakter;
}