#ifndef SPINNING_H
#define SPINNING_H

#include "Clase.h"
#include "DtSpinning.h"


class Spinning : public Clase {

    private:
        int cantBicicletas;

    public:
        Spinning(DtSpinning&);
        Spinning(int,string,Turno,int);
        ~Spinning();

        int getCantBicicletas();
        void setCantBicicletas(int);
        virtual int cupo();

        void print();
};

#endif // SPINNING_H
