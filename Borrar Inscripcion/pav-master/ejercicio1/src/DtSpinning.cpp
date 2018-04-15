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
    string stringTurno;
    if(dtSpinning.getTurno() == 1){
        stringTurno = "Mañana";
    }
    else if (dtSpinning.getTurno() == 2){
        stringTurno = "Tarde";
    }
    else if (dtSpinning.getTurno() == 3){
        stringTurno = "Noche";
    }
    else{
        stringTurno = "Sin definir";
    }

    salida <<
        "ID: " << dtSpinning.getId() <<"\n" <<
        "Nombre: " << dtSpinning.getNombre() << "\n"<<
        "Turno: " << stringTurno << "\n" <<
        "Cantidad de bicicletas: " << dtSpinning.getCantBicicletas() << "\n";
    return salida;
}
