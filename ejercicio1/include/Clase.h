#ifndef CLASE_H
#define CLASE_H

#include <string>
#include <vector>
#include "Turno.h"
#include "Inscripcion.h"
#include "DtClase.h"

using namespace std;

class Clase {

    private:
        int id;
        string nombre;
        Turno turno;
        vector<Inscripcion*> inscripciones;

    public:
        Clase();
        ~Clase();
        int getId();
        void setId(int);
        string getNombre();
        void setNombre(string);
        Turno getTurno();
        void setTurno(Turno);
        vector<Inscripcion*> getInscripciones();
        virtual int cupo() = 0;
        DtClase* getDtClase(); //para devolver su datatype
};

#endif // CLASE_H
