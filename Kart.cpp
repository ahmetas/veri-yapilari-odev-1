#include "Kart.h"

Kart::Kart() {
    Sembol *ptrSembol;
    ptrSembol = new Sembol();
    sembol = ptrSembol;
}

Sembol* Kart::GetSembol() {
    return sembol;
}

Kart::~Kart() {
}
