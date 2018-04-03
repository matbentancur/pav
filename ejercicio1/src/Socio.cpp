#include "Socio.h"

Socio::Socio() {
    //contrutuctor
}

Socio::Socio(DtSocio& dtSocio) {
    //contrutuctor
}

Socio::Socio(string CI, string nombre) {
    this->CI = CI;
    this->nombre = nombre;
}

Socio::~Socio() {
    //destructor
}

string Socio::getCI(){
    return this->CI;
}

void Socio::setCI(string CI){
    this->CI = CI;
}

string Socio::getNombre(){
    return this->nombre;
}

void Socio::setNombre(string nombre){
    this->nombre = nombre;
}

ostream& operator<<(ostream& os, Socio& socio) {
    os <<
        "Cedula: " << socio.getCI()<< "\n" <<
        "Nombre: " << socio.nombre << "\n"
    ;
    return os;
}
