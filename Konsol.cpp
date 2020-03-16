#include <iostream>
#include "Konsol.h"
#include "Windows.h"

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
WORD w = csbi.wAttributes;

enum Renkler{
    mavi = 1,
    yesil = 2,
    kirmizi = 4,
    magenta = 5,
    kahverengi = 6,
    sari = 14
};

void Konsol::RastgeleYaziRengiMi(bool b) {
if(b)
    SetConsoleTextAttribute(h, static_cast<Renkler>(rand() % sari));
else
    SetConsoleTextAttribute(h, w);
}
