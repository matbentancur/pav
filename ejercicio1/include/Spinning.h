#ifndef SPINNING_H
#define SPINNING_H

#include "Clase.h"


class Spinning : public Clase {

    private:
        int cantBicicletas;

    public:
        Spinning();
        Spinning(int,string,Turno,int);
        ~Spinning();

        int getCantBicicletas();
        void setCantBicicletas(int);

        int cupo();

};

#endif // SPINNING_H
