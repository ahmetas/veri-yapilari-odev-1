#ifndef VERIYAPILARIODEV1_KART_H
#define VERIYAPILARIODEV1_KART_H

#include "Sembol.h"

class Kart {
private:
    Sembol* sembol;
public:
    Kart();
    Sembol* GetSembol();
    ~Kart();
};

#endif //VERIYAPILARIODEV1_KART_H
