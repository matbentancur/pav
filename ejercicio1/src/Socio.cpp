#include "Socio.h"

Socio::Socio() {
    //contrutuctor
}

Socio::Socio(DtSocio& dtSocio) {
    this->CI = dtSocio.getCI();
    this->nombre = dtSocio.getNombre();
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

ostream& operator << (ostream& salida, const Socio& socio) {
    salida <<
        "Cedula: " << socio.CI << "\n" <<
        "Nombre: " << socio.nombre << "\n"
    ;
    return salida;
}
