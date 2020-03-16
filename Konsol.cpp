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

void Konsol::SembolYazdir(int karakter) {
    SetConsoleTextAttribute(h, static_cast<Renkler>(rand() % sari));
    switch(karakter) {
        case 1:
            cout << "\77";
            break;
        case 2:
            cout << "\43";
            break;
        case 3:
            cout << "\44";
            break;
        case 4:
            cout << "\46";
            break;
        case 5:
            cout << "\57";
            break;
        default:
            break;
    }
    SetConsoleTextAttribute(h, w);
}
