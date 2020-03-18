#include <cstdio>
#include <fcntl.h>
#include <io.h>
#include "Konsol.h"
#include "windows.h"

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
WORD w = csbi.wAttributes;

int mod = _setmode(_fileno(stdin ), _O_BINARY );

void Konsol::KonsolRenkDuzelt(){
    SetConsoleTextAttribute(h, w);
}

void Konsol::KonsolRenkDegis(wchar_t ptr){
    SetConsoleTextAttribute(h, ptr);
}

void Konsol::KonsolModDegis(bool b){
    if(b)
        _setmode(_fileno(stdout), _O_U16TEXT);
    else
        _setmode(_fileno(stdout), mod);
}