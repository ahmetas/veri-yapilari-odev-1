#include <cstdlib>
#include "Sembol.h"

Sembol::Sembol() {
    karakter = rand() % 5 + 1;
}

int Sembol::GetKarakter(){
    return karakter;
}