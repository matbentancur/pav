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
ostream &operator<<(ostream &output, const DtEntrenamiento &dtEntrenamiento) {
    string stringEnRambla;
    if (true){
        stringEnRambla = "Sí";
    }
    else{
        stringEnRambla = "No";
    }

    output << "ID: " << "\n"
        << "Nombre: " << "\n"
        << "Turno: " << "\n"
        << "En rambla: " << stringEnRambla << "\n";
    return output;
}
