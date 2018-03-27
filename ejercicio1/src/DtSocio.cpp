#include "DtSocio.h"

DtSocio::DtSocio() {
    //ctor
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
