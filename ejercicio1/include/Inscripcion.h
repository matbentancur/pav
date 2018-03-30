#ifndef INSCRIPCION_H
#define INSCRIPCION_H

#include "Fecha.h"
#include "Socio.h"
#include "Clase.h"

class Inscripcion {

    private:
        Fecha fecha;
        Socio* socio;
        Clase* clase;

    public:
        Inscripcion();
        Inscripcion(Fecha, Socio*, Clase*);
        ~Inscripcion();

        Fecha getFecha();
        void setFecha(Fecha);

        Socio* getSocio();
        void setSocio(Socio*);

        Clase* getClase();
        void setClase(Clase*);
};

#endif // INSCRIPCION_H
