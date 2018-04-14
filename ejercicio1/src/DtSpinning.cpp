#include "DtSpinning.h"

DtSpinning::DtSpinning(int id, string nombre, Turno turno, int cantBicicletas) : DtClase(id,nombre,turno){
    this->cantBicicletas = cantBicicletas;
}

DtSpinning::~DtSpinning() {

}

int DtSpinning::getCantBicicletas(){
    return this->cantBicicletas;
}

ostream& operator << (ostream& salida, DtSpinning& dtSpinning) {
    string turno;
    if(dtSpinning.getTurno() == Turno::Manana){
        turno = "Mañana";
    }
    else if (dtSpinning.getTurno() == Turno::Tarde){
        turno = "Tarde";
    }
    else if (dtSpinning.getTurno() == Turno::Noche){
        turno = "Noche";
    }
    else{
        turno = "";
    }

    salida <<
        "ID: " << dtSpinning.getId() <<"\n" <<
        "Nombre: " << dtSpinning.getNombre() << "\n"<<
        "Turno: " << turno << "\n" <<
        "Cantidad de bicicletas: " << dtSpinning.getCantBicicletas() << "\n";
    return salida;
}
