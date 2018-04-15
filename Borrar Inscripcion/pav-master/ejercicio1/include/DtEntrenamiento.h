#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include "DtClase.h"

class DtEntrenamiento : public DtClase{

    private:
        bool enRambla;

    public:
        DtEntrenamiento(int, string, Turno, bool);
        ~DtEntrenamiento();

        bool getEnRambla();

        friend ostream& operator << (ostream &salida, DtEntrenamiento&);
};

#endif // DTENTRENAMIENTO_H
