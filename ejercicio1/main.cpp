#include <iostream>
#include <string>
#include <exception>
#include "DtClase.h"
#include "DtSocio.h"
#include "Fecha.h"
#include "Socio.h"
#include "Clase.h"

#define MAX_SOCIOS 240
#define MAX_CLASES 9

using namespace std;

struct socios{
    Socio* socios = new Socio[MAX_SOCIOS];
    int tope;
} coleccionSocios;

struct clases{
    Clase** clases = new Clase*[MAX_CLASES]; //arreglo para una clase abstracta.
    int tope = 0;
} coleccionClases;

void agregarSocio(string, string);
void agregarClase(DtClase&);
void agregarInscripcion(string, int, Fecha);
void borrarInscripcion(string, int);
DtSocio** obtenerInfoSociosPorClase (int, int&);
DtClase& obtenerClase(int);

int main() {

    agregarSocio("1", "Socio 1");
    agregarSocio("2", "Socio 2");
    for (int i = 0; i < coleccionSocios.tope; i++){
        cout << coleccionSocios.socios[i] << endl;
    }

    return 0;
}

//Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción
//std::invalid_argument.
void agregarSocio(string ci, string nombre){
    int i = 0;
    for (i; i < coleccionSocios.tope; i++) {
        if (coleccionSocios.socios[i].getCI() == ci){
            throw std::invalid_argument("Ya existe el socio");
        }
    }
    coleccionSocios.socios[i].setCI(ci);
    coleccionSocios.socios[i].setNombre(nombre);
    coleccionSocios.tope++;
}

//Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción
//std::invalid_argument.
void agregarClase(DtClase& clase){

}

//Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
//la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
//inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
//levanta una excepción std::invalid_argument.
void agregarInscripcion(string ciSocio, int idClase, Fecha fecha){

}

//Borra la inscripción de un socio a una clase. Si no existe una inscripción de ese usuario para esa
//clase, se levanta una excepción std::invalid_argument.
void borrarInscripcion(string ciSocio, int idClase){

}

//Retorna un arreglo con los socios que están inscriptos a determinada clase. El largo del arreglo de
//socios está dado por el parámetro cantSocios.
DtSocio** obtenerInfoSociosPorClase (int idClase, int& cantSocios){

}

//Retorna la información de la clase identificada por idClase.
DtClase& obtenerClase(int idClase){

}
