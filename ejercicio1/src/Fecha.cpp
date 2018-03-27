#include "Fecha.h"

Fecha::Fecha() {
    //ctor
}

Fecha::Fecha (int dia,int mes,int anio){
    if (dia < 1 || dia > 31){
        throw invalid_argument("dia < 1 or dia > 31");
    }
    else{
        this->dia = dia;
    }

    if (mes < 1 || mes > 12){
        throw invalid_argument("mes < 1 or mes > 12");
    }
    else{
        this->mes = mes;
    }

    if (anio < 1900){
        throw invalid_argument("anio < 1900");
    }
    else{
        this->anio = anio;
    }
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
