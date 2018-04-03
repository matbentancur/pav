#ifndef TURNO_H
#define TURNO_H

#include <iostream>

using namespace std;

enum class Turno {
    Manana,
    Tarde,
    Noche
};

ostream& operator<<(ostream& os, Turno&);

#endif // TURNO_H
