#ifndef DTSOCIO_H
#define DTSOCIO_H

#include <string>

using namespace std;

class DtSocio {
    private:
        string CI;
        string nombre;

    public:
        DtSocio(string,string);
        string getCI();
        string getNombre();

        friend ostream& operator<<(ostream &os, DtSocio&);
};

#endif // DTSOCIO_H
