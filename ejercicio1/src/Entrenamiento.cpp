#include "Entrenamiento.h"

Entrenamiento::Entrenamiento() {
    //contructor
}

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) {
    this->setId(id);
    this->setNombre(nombre);
    this->setTurno(turno);
    this->enRambla = enRambla;
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
    return 0;
}
