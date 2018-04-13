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
        vector<Inscripcion*> inscripciones;

    public:
        DtClase();
        DtClase(int,string,Turno);

        int getId();
        string getNombre();
        Turno getTurno();
        vector<Inscripcion*> getInscripciones();
};

#endif // DTCLASE_H
