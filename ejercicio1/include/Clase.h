#ifndef CLASE_H
#define CLASE_H

#include <string>
#include "Turno.h"

using namespace std;

class Clase {

    private:
        int id;
        string nombre;
        Turno turno;

    public:
        Clase();
        ~Clase();

        int getId();
        void setId(int);

        string getNombre();
        void setNombre(string);

        Turno getTurno();
        void setTurno(Turno);

        virtual int cupo() = 0;
};

#endif // CLASE_H
