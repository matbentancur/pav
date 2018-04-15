#include "DtSocio.h"

DtSocio::DtSocio() {

}

DtSocio::DtSocio(string CI, string nombre) {
    this->CI = CI;
    this->nombre = nombre;
}

string DtSocio::getCI(){
    return this->CI;
}

string DtSocio::getNombre(){
    return this->nombre;
}

ostream& operator << (ostream &salida, DtSocio& dtSocio) {
    salida <<
        "Cedula: " << dtSocio.CI << "\n" <<
        "Nombre: " << dtSocio.nombre << "\n"
    ;
    return salida;
}
