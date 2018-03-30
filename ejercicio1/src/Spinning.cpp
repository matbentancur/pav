#include "Spinning.h"

Spinning::Spinning() {
    //ctor
}

Spinning::Spinning(int id, string nombre, Turno turno, int cantBicicletas) {
    this->setId(id);
    this->setNombre(nombre);
    this->setTurno(turno);
    this->cantBicicletas = cantBicicletas;
}

Spinning::~Spinning() {
    //dtor
}

int Spinning::getCantBicicletas(){
    return this->cantBicicletas;
}

void Spinning::setCantBicicletas(int cantBicicletas){
    this->cantBicicletas = cantBicicletas;
}

int Spinning::cupo(){
    return this->getCantBicicletas();
}
