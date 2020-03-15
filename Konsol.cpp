#include <iostream>
#include "Konsol.h"

using namespace std;

void Konsol::SembolYazdir(int karakter) {
    switch(karakter) {
        case 1:
            cout << " \77";
            break;
        case 2:
            cout << " \43";
            break;
        case 3:
            cout << " \44";
            break;
        case 4:
            cout << " \46";
            break;
        case 5:
            cout << " \57";
            break;
        default:
            break;
    }
}
