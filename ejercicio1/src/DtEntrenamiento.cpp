#include "DtEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento(int id, string nombre, Turno turno, bool enRambla) : DtClase(id,nombre,turno){
    this->enRambla = enRambla;
}

DtEntrenamiento::~DtEntrenamiento() {

}

bool DtEntrenamiento::getEnRambla(){
    return this->enRambla;
}

ostream& operator << (ostream &salida, DtEntrenamiento& dtEntrenamiento) {
    string stringTurno;
    if(dtEntrenamiento.getTurno() == 1){
        stringTurno = "Mañana";
    }
    else if (dtEntrenamiento.getTurno() == 2){
        stringTurno = "Tarde";
    }
    else if (dtEntrenamiento.getTurno() == 3){
        stringTurno = "Noche";
    }
    else{
        stringTurno = "Sin definir";
    }

    string stringEnRambla;
    if (dtEntrenamiento.getEnRambla()){
        stringEnRambla = "Sí";
    }
    else{
        stringEnRambla = "No";
    }

    salida <<
        "ID: " << dtEntrenamiento.getId() <<"\n" <<
        "Nombre: " << dtEntrenamiento.getNombre() << "\n"<<
        "Turno: " << stringTurno << "\n" <<
        "En rambla: " << stringEnRambla << "\n";
    return salida;
}
