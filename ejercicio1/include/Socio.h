#ifndef SOCIO_H
#define SOCIO_H

#include <string>

using namespace std;

class Socio {

    private:
        string CI;
        string nombre;

    public:
        Socio();
        Socio(string,string);
        ~Socio();

        string getCI();
        void setCI(string);
        string getNombre();
        void setNombre(string);
};

#endif // SOCIO_H
