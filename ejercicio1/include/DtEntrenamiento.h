#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include "DtClase.h"

class DtEntrenamiento : public DtClase{

    private:
        bool enRambla;

    public:
        DtEntrenamiento();
        DtEntrenamiento(int,string,Turno,bool);

        bool getEnRambla();
};

#endif // DTENTRENAMIENTO_H