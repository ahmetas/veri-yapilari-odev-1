#ifndef VERIYAPILARIODEV1_YAZICI_H
#define VERIYAPILARIODEV1_YAZICI_H

#include "Kart.h"

class Yazici {
public:
    Kart** ptrKart;
    int kartSayisi;

    Yazici();
    void KartlariYazdir();
};

#endif //VERIYAPILARIODEV1_YAZICI_H
