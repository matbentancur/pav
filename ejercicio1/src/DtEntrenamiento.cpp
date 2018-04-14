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
    string turno;
    if(dtEntrenamiento.getTurno() == Turno::Manana){
        turno = "Mañana";
    }
    else if (dtEntrenamiento.getTurno() == Turno::Tarde){
        turno = "Tarde";
    }
    else if (dtEntrenamiento.getTurno() == Turno::Noche){
        turno = "Noche";
    }
    else{
        turno = "";
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
        "Turno: " << turno << "\n" <<
        "En rambla: " << stringEnRambla << "\n";
    return salida;
}
