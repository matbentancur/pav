#include "DtEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento() {
    //constructor
}

DtEntrenamiento::DtEntrenamiento(int id, string nombre, Turno turno, bool enRambla) {
    id = id;
    nombre = nombre;
    turno = turno;
    this->enRambla = enRambla;
}

bool DtEntrenamiento::getEnRambla(){
    return this->enRambla;
}
