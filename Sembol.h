#ifndef VERIYAPILARIODEV1_SEMBOL_H
#define VERIYAPILARIODEV1_SEMBOL_H

class Sembol {
private:
    wchar_t karakter[2];
public:
    Sembol();

    wchar_t GetKarakter();
    wchar_t GetKarakterRenk();
    wchar_t RastgeleKarakterAta();
    wchar_t RastgeleRenkAta();
};

#endif //VERIYAPILARIODEV1_SEMBOL_H
