#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include "Clase.h"

class Entrenamiento : public Clase {
    private:
        bool enRambla;

    public:
        Entrenamiento();
        Entrenamiento(int,string,Turno,bool);
        ~Entrenamiento();

        bool getEnRambla();
        void setEnRambla(bool);

        int cupo();
};

#endif // ENTRENAMIENTO_H
