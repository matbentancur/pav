#ifndef SOCIO_H
#define SOCIO_H

#include <iostream>
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

        friend ostream& operator<<(ostream &os, Socio&);
};

#endif // SOCIO_H
