#ifndef DTSPINNING_H
#define DTSPINNING_H

#include "DtClase.h"

class DtSpinning : public DtClase {

    private:
        int cantBicicletas;

    public:
        DtSpinning();
        DtSpinning(int, string, Turno, int);

        int getCantBicicletas();

        friend ostream &operator<<(ostream&, const DtSpinning & );
};

#endif // DTSPINNING_H
