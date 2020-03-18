#include "Kart.h"

Sembol *ptrSembol;

Kart::Kart() {
    ptrSembol = new Sembol();
    sembol = ptrSembol;
}

Sembol* Kart::GetSembol() {
    return sembol;
}

Kart::~Kart() {
    delete ptrSembol;
}
