#include "Inscripcion.h"

Inscripcion::Inscripcion() {
    //constructor
}

Inscripcion::Inscripcion(Fecha fecha) {
    this->fecha = fecha;
}

Inscripcion::~Inscripcion() {
    //destructor
}

Fecha Inscripcion::getFecha(){
    return this->fecha;
}

void Inscripcion::setFecha(Fecha fecha){
    this->fecha = fecha;
}

Socio Inscripcion::getSocio(){
    return this->socio;
}

void Inscripcion::setSocio(Socio socio){
    this->socio = socio;
}

Clase* Inscripcion::getClase(){
    return this->clase;
}

void Inscripcion::setClase(Clase* clase){
    this->clase = clase;
}
