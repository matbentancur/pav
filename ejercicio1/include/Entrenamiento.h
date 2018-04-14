#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include "Clase.h"
#include "DtEntrenamiento.h"

class Entrenamiento : public Clase {
    private:
        bool enRambla;

    public:
        Entrenamiento(DtEntrenamiento);
        Entrenamiento(int,string,Turno,bool);
        ~Entrenamiento();

        bool getEnRambla();
        void setEnRambla(bool);
        virtual int cupo();
        virtual void print();
};

#endif // ENTRENAMIENTO_H
