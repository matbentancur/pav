#include "Fecha.h"

Fecha::Fecha() {
    //ctor
}

Fecha::Fecha (int dia,int mes,int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

int Fecha::getDia(){
    return this->dia;
}

int Fecha::getMes(){
    return this->mes;
}

int Fecha::getAnio(){
    return this->anio;
}
