#include "DtClase.h"

DtClase::DtClase() {
    //ctor
}

int DtClase::getId(){
    return this->id;
}

string DtClase::getNombre(){
    return this->nombre;
}

Turno DtClase::getTurno(){
    return this->turno;
}
