
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include "DtClase.h"
#include "DtSocio.h"
#include "Fecha.h"
#include "Socio.h"
#include "Turno.h"
#include "Clase.h"
#include "Entrenamiento.h"
#include "Spinning.h"
#include <time.h>

#define MAX_SOCIOS 240
#define MAX_CLASES 9

using namespace std;

struct socios{
    Socio* socios[MAX_SOCIOS];
    int tope;
} coleccionSocios;

struct clases{
    Clase* clases[MAX_CLASES];
    int tope;
} coleccionClases;

//Temporal
time_t theTime = time(NULL);
struct tm *aTime = localtime(&theTime);

//FUNCIONES DEL LABORATORIOS
void agregarSocio(string, string);
void agregarClase(DtClase&);
void agregarInscripcion(string, int, Fecha);
void borrarInscripcion(string, int);
DtSocio** obtenerInfoSociosPorClase (int, int&);
DtClase& obtenerClase(int);

//FUNCIONES AUXILIARES
void menu();
bool existeClase(int);
bool existeSocio(string);
bool existeInscripcion(int, string);
void imprimirSocios();
void imprimirClases();
int buscarSocio(string);

int main() {
    //Inicializacion de colecciones
    coleccionClases.tope = 0;
    coleccionSocios.tope = 0;

    //Agregamos una clase para poder probar las demas funciones
    Turno turno = Turno::Manana;
    Spinning* nuevaClase = new Spinning(123, "Clase 1", turno, 10);
    coleccionClases.clases[0] = nuevaClase;
    coleccionClases.tope++;

    int idClase;
    string nombre;
    string cedula;
    int numOper = 0;
    bool salir = false;
    char opcion = 'n';
    int dia = aTime->tm_mday;
    int mes = aTime->tm_mon + 1;
    int anio = aTime->tm_year + 1900;
    Fecha fechaDeHoy = Fecha(dia, mes, anio);
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
        break;
    case 3:
        cout << "\n\tAgregar inscripcion\n\n";
        cout << "Ingrese la CI del socio: ";
        cin >> cedula;
        cout << "Ingrese el ID de la clase: ";
        cin >> idClase;
        try{
            agregarInscripcion(cedula, idClase, fechaDeHoy);
        }
        catch(invalid_argument& ia) {
            cout << ia.what() << "\n";
            cin.get();
        }
        break;
    case 4:
        cout << "\n\tBorrar inscripcion\n\n";
        break;
    case 5:
        cout << "\n\tObtener informacion de socio por clase\n\n";
        break;
    case 6:
        cout << "\n\tObtener clase\n\n";
        cout << "Ingrese el ID de la clase: ";
        cin >> idClase;
        try{
            DtClase& dtClase = obtenerClase(idClase);
        }
        catch(invalid_argument& ia) {
            cout << ia.what() << "\n";
            cin.get();
        }
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
    cout << "\nPresione Enter Para continuar";
    fflush(stdin);
    cin.ignore();
    } while (!salir);

    return 0;
}

//Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción
//std::invalid_argument.
//void agregarSocio(string ci, string nombre) {
//  if (coleccionSocios.tope < MAX_SOCIOS) {
//    if (coleccionSocios.tope != 0){
//        if (existeSocio(ci) == true) {
//              throw invalid_argument("Ya existe el socio");
//        }
//    }
//    coleccionSocios.socios[coleccionSocios.tope] = new Socio();
//    coleccionSocios.socios[coleccionSocios.tope]->setCI(ci);
//    coleccionSocios.socios[coleccionSocios.tope]->setNombre(nombre);
//    coleccionSocios.tope++;
//    cout << "\nSe agrego con exito.\n";
//  } else {
//    cout << "\nNo se puede agregar, se alcanzo el maximo numero de socios.\n";
//  }
//}

void agregarSocio(string ci, string nombre) {
  if (coleccionSocios.tope < MAX_SOCIOS) {
    if (existeSocio(ci) == true) {
      throw invalid_argument("Ya existe el socio");
    } else {
      Socio* nuevoSocio = new Socio(ci, nombre);
      coleccionSocios.socios[coleccionSocios.tope] = nuevoSocio;
      coleccionSocios.tope++;
      cout << "\nSe agrego con exito.\n";
    }
  } else {
    cout << "\nNo se puede agregar, se alcanzo el maximo numero de socios.\n";
  }
}

//Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción
//std::invalid_argument.
void agregarClase(DtClase & clase) {
//    coleccionClases.clases[coleccionClases.tope]->setId(clase.getId());
//    coleccionClases.clases[coleccionClases.tope]->setNombre(clase.getNombre());
//    coleccionClases.clases[coleccionClases.tope]->setTurno(clase.getTurno());
//    coleccionClases.tope++;
}

//Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
//la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
//inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
//levanta una excepción std::invalid_argument.
void agregarInscripcion(string ciSocio, int idClase, Fecha fecha) {
    if (existeSocio(ciSocio) == false && existeClase(idClase) == false){
        std::ostringstream oss;
        std::string errorMessage = std::string("\nNo existe el socio con CI: ") + ciSocio + std::string(", ni la clase con id: ");
        oss << idClase;
        errorMessage += oss.str();
        throw invalid_argument(errorMessage);
    }else if (existeSocio(ciSocio) == false) {
            std::string errorMessage = std::string("\nNo existe el socio con CI: ") + ciSocio;
      throw invalid_argument(errorMessage);
    } else if (existeClase(idClase) == false){
        std::ostringstream oss;
        std::string errorMessage = std::string("\nNo existe la clase con id: ");
        oss << idClase;
        errorMessage += oss.str();
        throw invalid_argument(errorMessage);
//    } else if (existeInscripcion(idClase, ciSocio) == true){
//        std::ostringstream oss;
//        std::string errorMessage = std::string("\nYa existe una inscripcion del socio en la clase: ");
//        oss << idClase;
//        errorMessage += oss.str();
//        throw invalid_argument(errorMessage);
    }else{
        for(int i = 0; i < coleccionClases.tope; i++){
            if (coleccionClases.clases[i]->getId() == idClase) {
                signed int cantInscripciones = coleccionClases.clases[i]->getTopeInscripciones();
                if(cantInscripciones < coleccionClases.clases[i]->cupo()){
                    int indice = buscarSocio(ciSocio);
                    Inscripcion* nuevaInscripcion = new Inscripcion(fecha, coleccionSocios.socios[indice]);
                    coleccionClases.clases[i]->agregarInscripcionAlArreglo(nuevaInscripcion);
                    cout << "\nSe registro con exito la inscripcion.\n";
                }
            }
        }
    }
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
    if (existeClase(idClase) == false) {
      throw invalid_argument("\nNo existe la clase");
    } else {
        int indice = 0;
        while (coleccionClases.clases[indice]->getId() != idClase) {
            indice++;
        }
        Spinning* spinning = dynamic_cast<Spinning*>(coleccionClases.clases[indice]);
        Entrenamiento* entrenamiento = dynamic_cast<Entrenamiento*>(coleccionClases.clases[indice]);
        if (spinning != NULL){
            DtSpinning dtClase = DtSpinning(spinning->getId(), spinning->getNombre(), spinning->getTurno(), spinning->getCantBicicletas());
            return dtClase;
        }else if (entrenamiento != NULL){
            DtEntrenamiento dtClase = DtEntrenamiento(entrenamiento->getId(), entrenamiento->getNombre(), entrenamiento->getTurno(), entrenamiento->getEnRambla());
            return dtClase;
        }else{
            DtClase dtClase = DtClase();
            return dtClase;
        }
    }
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

int buscarSocio(string ci) {
  int indice = 0;
  bool existe = false;
  while (existe == false && indice < coleccionSocios.tope) {
    if (coleccionSocios.socios[indice]->getCI() == ci) {
      existe = true;
    } else {
      indice++;
    }
  }
  return indice;
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

//Falta terminar todavia
bool existeInscripcion(int idClase, string ciSocio) {
    int indice = 0;
    while (coleccionClases.clases[indice]->getId() != idClase) {
        indice++;
    }
    bool existe = false;
    int indiceAux = 0;
    while (existe == false && indiceAux < coleccionClases.clases[indice]->getTopeInscripciones()) {
    //Inscripcion* inscripciones = coleccionClases.clases[indice]->getInscripciones();
//        if (inscripciones[indiceAux]->getSocio()->getCI() == ciSocio) {
//            existe = true;
//        } else {
//            indiceAux++;
//        }
    }
    return existe;
}

void imprimirSocios(){
    for (int i = 0; i < coleccionSocios.tope; i++){
        cout << *coleccionSocios.socios[i] << endl;
    }
}

void imprimirClases(){
//    for (int i = 0; i < coleccionClases.tope; i++){
//        cout << coleccionClases.clases[i] << endl;
//    }
}
