#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include "Fecha.h"
#include "Socio.h"
#include "Clase.h"

class Inscripcion {

    private:
        Fecha fecha;
        Socio* socio;

    public:
        Inscripcion();
        Inscripcion(Fecha, Socio*);
        ~Inscripcion();

        Fecha getFecha();
        void setFecha(Fecha);

        Socio* getSocio();
        void setSocio(Socio*);
};

#endif // INSCRIPCION_H
