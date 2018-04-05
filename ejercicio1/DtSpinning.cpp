#include "include/DtSpinning.h"

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

//ostream& operator<<(ostream& os, DtSpinning& dtSpinning) {
//    string turno;
//    if(dtSpinning.getTurno() == Turno::Manana){
//        turno = "Mañana";
//    }
//    else if (dtSpinning.getTurno() == Turno::Tarde){
//        turno = "Tarde";
//    }
//    else if (dtSpinning.getTurno() == Turno::Noche){
//        turno = "Noche";
//    }
//    else{
//        turno = "";
//    }
//
//    os <<
//        "ID: " << dtSpinning.getId() <<"\n" <<
//        "Nombre: " << dtSpinning.getNombre() << "\n"<<
//        "Turno: " << turno << "\n" <<
//        "Cantidad de bicicletas: " << dtSpinning.getCantBicicletas() << "\n";
//    return os;
//}
