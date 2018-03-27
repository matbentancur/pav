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
