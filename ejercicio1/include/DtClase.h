#ifndef DTCLASE_H
#define DTCLASE_H

#include <string>
#include <vector>
#include <iostream>
#include "Turno.h"
#include "Inscripcion.h"

using namespace std;

class DtClase {

    private:
        int id;
        string nombre;
        Turno turno;

    public:
        DtClase();

        int getId();
        string getNombre();
        Turno getTurno();

        virtual ~DtClase();
};

#endif // DTCLASE_H
