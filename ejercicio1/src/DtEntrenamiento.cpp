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

//error al utilizar el puntero
//ostream& operator<<(ostream &os, DtEntrenamiento& dtEntrenamiento) {
//    string turno;
//    if(dtEntrenamiento.getTurno() == Turno::Manana){
//        turno = "Mañana";
//    }
//    else if (dtEntrenamiento.getTurno() == Turno::Tarde){
//        turno = "Tarde";
//    }
//    else if (dtEntrenamiento.getTurno() == Turno::Noche){
//        turno = "Noche";
//    }
//    else{
//        turno = "";
//    }
//
//    string stringEnRambla;
//    if (true){
//        stringEnRambla = "Sí";
//    }
//    else{
//        stringEnRambla = "No";
//    }
//
//    os <<
//        "ID: " << dtEntrenamiento.getId() <<"\n" <<
//        "Nombre: " << dtEntrenamiento.getNombre() << "\n"<<
//        "Turno: " << turno << "\n" <<
//        "En rambla: " << dtEntrenamiento << "\n";
//    return os;
//}
