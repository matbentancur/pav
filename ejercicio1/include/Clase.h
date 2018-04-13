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
        Inscripcion* inscripciones[50];
        int topeInscripciones;

    public:
        Clase();
        ~Clase();
        int getId();
        void setId(int);
        string getNombre();
        void setNombre(string);
        Turno getTurno();
        void setTurno(Turno);
        int getTopeInscripciones();
        void setTopeInscripciones(int);
        Inscripcion* getInscripciones();
        void agregarInscripcionAlArreglo(Inscripcion*);

        virtual int cupo() = 0;
        DtClase* getDtClase(); //para devolver su datatype
};

#endif // CLASE_H
