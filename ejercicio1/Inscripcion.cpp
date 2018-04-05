#include "include/Inscripcion.h"

Inscripcion::Inscripcion(Fecha fecha, Socio* socio) {
    this->fecha = fecha;
    this->socio = socio;
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

Socio* Inscripcion::getSocio(){
    return this->socio;
}

void Inscripcion::setSocio(Socio* socio){
    this->socio = socio;
}
