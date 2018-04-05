#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include "Fecha.h"
#include "Socio.h"

class Inscripcion {

    private:
        Fecha fecha;
        Socio* socio;

    public:
        Inscripcion(Fecha, Socio*);
        ~Inscripcion();

        Fecha getFecha();
        void setFecha(Fecha);

        Socio* getSocio();
        void setSocio(Socio*);
};

#endif // INSCRIPCION_H
