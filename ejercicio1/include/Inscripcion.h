#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include "Fecha.h"

class Inscripcion {

    private:
        Fecha fecha;

    public:
        Inscripcion();
        Inscripcion(Fecha);
        ~Inscripcion();

        Fecha getFecha();
        void setFecha(Fecha);
};

#endif // INSCRIPCION_H
