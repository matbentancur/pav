#ifndef DTSOCIO_H
#define DTSOCIO_H

#include <string>
#include <iostream>

using namespace std;

class DtSocio {
    private:
        string CI;
        string nombre;

    public:
        DtSocio();
        DtSocio(string,string);
        string getCI();
        string getNombre();

        friend ostream& operator << (ostream &salida, DtSocio&);
};

#endif // DTSOCIO_H
