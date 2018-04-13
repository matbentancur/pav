#include "Clase.h"

Clase::Clase() {
    //contructor
}

Clase::~Clase() {
    //destructor
}

int Clase::getId(){
    return this->id;
}

void Clase::setId(int id){
    this->id = id;
}

string Clase::getNombre(){
    return this->nombre;
}

void Clase::setNombre(string nombre){
    this->nombre = nombre;
}

Turno Clase::getTurno(){
    return this->turno;
}

void Clase::setTurno(Turno turno){
    this->turno = turno;
}

int Clase::getTopeInscripciones(){
    return this->topeInscripciones;
}

void Clase::setTopeInscripciones(int topeInscripciones){
    this->topeInscripciones = topeInscripciones;
}

DtClase* Clase::getDtClase(){
//    DtClase* dtClase = new DtClase(this->id, this->nombre, this->turno, this->inscripciones);
//    return dtClase;
}
