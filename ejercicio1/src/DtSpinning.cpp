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

ostream& operator<<(ostream& os, DtSpinning& dtSpinning) {
    os <<
        "ID: " << dtSpinning.getId() <<"\n" <<
        "Nombre: " << dtSpinning.getNombre() << "\n"<<
//        "Turno: " << dtSpinning.getTurno() << "\n" <<
        "Cantidad de bicicletas: " << dtSpinning.getCantBicicletas() << "\n";
    return os;
}
