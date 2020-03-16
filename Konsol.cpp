#include "Konsol.h"
#include "windows.h"

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
WORD w = csbi.wAttributes;

void Konsol::KonsolRenkDuzelt(){
    SetConsoleTextAttribute(h, w);
}

void Konsol::KonsolRenkDegis(char ptr){
    SetConsoleTextAttribute(h, ptr);
}