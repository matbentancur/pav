#ifndef DTSPINNING_H
#define DTSPINNING_H

#include "DtClase.h"

class DtSpinning : public DtClase {

    private:
        int cantBicicletas;

    public:
        DtSpinning(int, string, Turno, int);
        ~DtSpinning();

        int getCantBicicletas();

        friend ostream& operator<<(ostream &os, DtSpinning&);
};

#endif // DTSPINNING_H
