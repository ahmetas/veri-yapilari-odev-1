#ifndef VERIYAPILARIODEV1_SEMBOL_H
#define VERIYAPILARIODEV1_SEMBOL_H

class Sembol {
private:
    char karakter[2];
public:
    Sembol();

    char GetKarakter();
    char GetKarakterRenk();
    char RastgeleKarakterAta();
    char RastgeleRenkAta();
};

#endif //VERIYAPILARIODEV1_SEMBOL_H
