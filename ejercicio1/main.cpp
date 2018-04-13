
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include <typeinfo>
#include "DtClase.h"
#include "DtSocio.h"
#include "DtSpinning.h"
#include "DtEntrenamiento.h"
#include "Fecha.h"
#include "Socio.h"
#include "Clase.h"

#define MAX_SOCIOS 240
#define MAX_CLASES 9

using namespace std;

struct socios{
    Socio* socios[MAX_SOCIOS];
    int tope;
} coleccionSocios;

struct clases{
    DtClase* clases[MAX_CLASES];
    int tope;
} coleccionClases;

//VARIALES PARA SABER SI LA CLASE QUE SE VA A CASTEAR
bool entrenamiento;
bool spinning;

//FUNCIONES DEL LABORATORIOS
void agregarSocio(string, string);
void agregarClase(DtClase&);
void agregarInscripcion(string, int, Fecha);
void borrarInscripcion(string, int);
DtSocio** obtenerInfoSociosPorClase (int, int&);
DtClase& obtenerClase(int);

//FUNCIONES AUXILIARES
bool existeSocio(string);
void menu();
void imprimirSocios();
bool existeClase(int);
void imprimirClases();

int main() {
    //Inicializacion de colecciones
    coleccionSocios.tope = 0;
    coleccionClases.tope = 0;

    //variables que cargan el stdin

    string nombre;
    string cedula;
    int id;
    int tipoClase;
    int intTurno;

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
        try{
            agregarSocio(cedula, nombre);
        }
        catch(invalid_argument& ia) {
            cout << ia.what() << "\n";
            cin.get();
        }
        break;
    case 2:
        cout << "\n\tAgregar clase\n";
        cout << "Ingrese el tipo de clase (1-Entrenamiento, 2-Spinning): ";
        cin >> tipoClase;
        cout << "Ingrese el ID: ";
        cin >> id;
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese el turno (1-Mañana, 2-Tarde, 3-Noche): ";
        cin >> intTurno;
        if (tipoClase == 1){
            entrenamiento = true;
            spinning = false;
        }
        else{
            entrenamiento = false;
            spinning = true;
        }
        Turno turno;
        switch (intTurno) {
            case 1:
                turno = Turno::Manana;
            case 2:
                turno = Turno::Tarde;
            case 3:
                turno = Turno::Noche;
            default:
                turno = Turno::Manana;
        }
//        agregarClase();
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
        imprimirClases();
        break;
    case 8:
        imprimirSocios();
        break;
    case 9:
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

    return 0;
}

//Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción
//std::invalid_argument.
void agregarSocio(string ci, string nombre) {
  if (coleccionSocios.tope < MAX_SOCIOS) {
    if (coleccionSocios.tope != 0){
        if (existeSocio(ci) == true) {
              throw invalid_argument("Ya existe el socio");
        }
    }
    coleccionSocios.socios[coleccionSocios.tope] = new Socio();
    coleccionSocios.socios[coleccionSocios.tope]->setCI(ci);
    coleccionSocios.socios[coleccionSocios.tope]->setNombre(nombre);
    coleccionSocios.tope++;
    cout << "\nSe agrego con exito.\n";
  } else {
    cout << "\nNo se puede agregar, se alcanzo el maximo numero de socios.\n";
  }
}

//Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción
//std::invalid_argument.
void agregarClase(DtClase& clase) {
    //SOLO TIENE EJEMPLO DE COMO HACER EL CAST
    try{
        DtSpinning& spinning = dynamic_cast<DtSpinning&>(clase);
    }catch(std::bad_cast){
        cout << "Error en cast para DtSpinning\n";
    }
    try{
        DtEntrenamiento& entrenamiento = dynamic_cast<DtEntrenamiento&>(clase);
    }catch(std::bad_cast){
        cout << "Error en cast para DtEntrenamiento\n";
    }
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
  cout << "8)  Imprimir socios\n";
  cout << "9)  Salir\n\n";
  cout << "Ingrese el numero de la operacion a realizar: ";
}

bool existeSocio(string ci) {
  int indice = 0;
  bool existe = false;
  while (existe == false && indice < coleccionSocios.tope) {
    if (coleccionSocios.socios[indice]->getCI() == ci) {
      existe = true;
    } else {
      indice++;
    }
  }
  return existe;
}

void imprimirSocios(){
    for (int i = 0; i < coleccionSocios.tope; i++){
        cout << *coleccionSocios.socios[i] << endl;
    }
}

bool existeClase(int id) {
  int indice = 0;
  bool existe = false;
  while (existe == false && indice < coleccionClases.tope) {
    if (coleccionClases.clases[indice]->getId() == id) {
      existe = true;
    } else {
      indice++;
    }
  }
  return existe;
}

void imprimirClases(){
//    for (int i = 0; i < coleccionClases.tope; i++){
//        cout << *coleccionClases.clases[i] << endl;
//    }
}
