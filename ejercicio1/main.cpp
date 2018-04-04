
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <exception>
#include "DtClase.h"
#include "DtSocio.h"
#include "Fecha.h"
#include "Socio.h"
#include "Clase.h"

#define MAX_SOCIOS 240
#define MAX_CLASES 9

using namespace std;

struct socios {
  Socio * socios[MAX_SOCIOS];
  int tope;
}
listaDeSocios;

void agregarSocio(string, string);
void inicializarSocios();
bool existeSocio(string);
void menu();

int main() {
  inicializarSocios();

  string nombre;
  string cedula;
  int numOper = 0;
  bool salir = false;
  char opcion = 'n';
  do {
    menu();
    cin >> numOper;
    switch (numOper) {
    case 1:
      cout << "\n\tAgregar socio\n\n";
      cout << "Ingrese la CI: ";
      cin >> cedula;
      cout << "Ingrese el nombre: ";
      cin >> nombre;
      agregarSocio(cedula, nombre);
      break;
    case 2:
      cout << "\n\tAgregar clase\n";
      break;
    case 3:
      cout << "\n\tAgregar inscripcion\n";
      break;
    case 4:
      cout << "\n\tBorrar inscripcion\n";
      break;
    case 5:
      cout << "\n\tObtener informacion de socio por clase\n";

      break;
    case 6:
      cout << "\n\tObtener clase\n";
      break;
    case 7:
      cout << "\n\tImprimir clases\n";
      break;
    case 8:
      cout << "\nEsta seguro de que desea salir (s/n)?: ";
      cin >> opcion;
      if (opcion == 's' || opcion == 'S') {
        cout << "Saliendo...\n";
        salir = true;
      }
      break;
    default:
      cout << "\nNo ingreso una opcion valida, vuelva a intentarlo...\n";
    }
    cout << "\n";
    cout << "Presione Enter Para continuar";
    fflush(stdin);
    cin.ignore();
  } while (!salir);

  Clase** clases = new Clase * [MAX_CLASES]; //arreglo para una clase abstracta.
  return 0;
}

void inicializarSocios() {
  listaDeSocios.tope = 0;
}

void menu() {
  cout << "\nProgramacion Avanzada - Laboratorio 1\n\n";
  cout << "\t\tEjercicio 1 - GIMNASIO\n\n";
  cout << "Lista de operaciones disponibles:\n";
  cout << "1)  Agregar nuevo socio\n";
  cout << "2)  Agregar clase\n";
  cout << "3)  Agregar inscripcion\n";
  cout << "4)  Borrar inscripcion\n";
  cout << "5)  Obtener informacion de socio por clase\n";
  cout << "6)  Obtener clase\n";
  cout << "7)  Imprimir clases\n";
  cout << "8)  Salir\n\n";
  cout << "Ingrese el numero de la operacion a realizar: ";
}

//Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción
//std::invalid_argument.
void agregarSocio(string ci, string nombre) {
  if (listaDeSocios.tope < MAX_SOCIOS) {
    if (existeSocio(ci) == true) {
      throw std::invalid_argument("Ya existe el socio");
    } else {
      Socio* nuevoSocio = new Socio();
      nuevoSocio->setCI(ci);
      nuevoSocio->setNombre(nombre);
      listaDeSocios.socios[listaDeSocios.tope  + 1] = nuevoSocio;
      cout << "\nSe agrego con exito.\n";
    }
  } else {
    cout << "\nNo se puede agregar, se alcanzo el maximo numero de socios.\n";
  }
}

bool existeSocio(string ci) {
  int indice = 1;
  bool existe = false;
  while (existe == false && indice <= listaDeSocios.tope) {
    if (listaDeSocios.socios[indice]-> getCI() == ci) {
      existe = true;
    } else {
      cout << "no existe";
      indice++;
    }
  }
  return existe;
}

//Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción
//std::invalid_argument.
void agregarClase(DtClase & clase) {

}

//Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
//la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
//inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
//levanta una excepción std::invalid_argument.
void agregarInscripcion(string ciSocio, int idClase, Fecha fecha) {

}

//Borra la inscripción de un socio a una clase. Si no existe una inscripción de ese usuario para esa
//clase, se levanta una excepción std::invalid_argument.
void borrarInscripcion(string ciSocio, int idClase) {

}

//Retorna un arreglo con los socios que están inscriptos a determinada clase. El largo del arreglo de
//socios está dado por el parámetro cantSocios.
DtSocio** obtenerInfoSociosPorClase(int idClase, int & cantSocios) {

}

//Retorna la información de la clase identificada por idClase.
DtClase & obtenerClase(int idClase) {

}
