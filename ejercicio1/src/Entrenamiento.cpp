#include "Entrenamiento.h"

Entrenamiento::Entrenamiento(DtEntrenamiento dtEntrenamiento) {
    this->setId(dtEntrenamiento.getId());
    this->setNombre(dtEntrenamiento.getNombre());
    this->setTurno(dtEntrenamiento.getTurno());
    this->setTopeInscripciones(0);
    this->setEnRambla(dtEntrenamiento.getEnRambla());
}

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) {
    this->setId(id);
    this->setNombre(nombre);
    this->setTurno(turno);
    this->setTopeInscripciones(0);
    this->setEnRambla(enRambla);
}

Entrenamiento::~Entrenamiento() {
    //destructor
}

bool Entrenamiento::getEnRambla(){
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla){
    this->enRambla = enRambla;
}

int Entrenamiento::cupo(){
    if (this->enRambla){
        return 20;
    }
    else{
        return 10;
    }
}

void Entrenamiento::print() {
    string turno;
    if(this->getTurno() == Turno::Manana){
        turno = "Mañana";
    }
    else if (this->getTurno() == Turno::Tarde){
        turno = "Tarde";
    }
    else if (this->getTurno() == Turno::Noche){
        turno = "Noche";
    }
    else{
        turno = "Sin definir";
    }

    string stringEnRambla;
    if (this->getEnRambla()){
        stringEnRambla = "Sí";
    }
    else{
        stringEnRambla = "No";
    }

    cout <<
        "ID: " << this->getId() <<"\n" <<
        "Nombre: " << this->getNombre() << "\n"<<
        "Turno: " << turno << "\n" <<
        "En rambla: " << stringEnRambla << "\n";
}
