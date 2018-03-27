#include "DtSpinning.h"

DtSpinning::DtSpinning() {
    //ctor
}

DtSpinning::DtSpinning(int id, string nombre, Turno turno, int cantBicicletas) {
    id = id;
    nombre = nombre;
    turno = turno;
    this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantBicicletas(){
    return this->cantBicicletas;
}
