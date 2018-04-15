#include "Spinning.h"

Spinning::Spinning(DtSpinning &dtSpinning) {
    this->setId(dtSpinning.getId());
    this->setNombre(dtSpinning.getNombre());
    this->setTurno(dtSpinning.getTurno());
    this->setTopeInscripciones(0);
    this->setCantBicicletas(dtSpinning.getCantBicicletas());
}

Spinning::Spinning(int id, string nombre, Turno turno, int cantBicicletas) {
    this->setId(id);
    this->setNombre(nombre);
    this->setTurno(turno);
    this->setTopeInscripciones(0);
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

int Spinning::cupo() {
    return this->getCantBicicletas();
}

void Spinning::print() {
    string stringTurno;
    if(this->getTurno() == 1){
        stringTurno = "Mañana";
    }
    else if (this->getTurno() == 2){
        stringTurno = "Tarde";
    }
    else if (this->getTurno() == 3){
        stringTurno = "Noche";
    }
    else{
        stringTurno = "Sin definir";
    }
    cout <<
        "ID: " << this->getId() <<"\n" <<
        "Nombre: " << this->getNombre() << "\n"<<
        "Turno: " << stringTurno << "\n" <<
        "Cantidad de bicicletas: " << this->getCantBicicletas() << "\n";
}
