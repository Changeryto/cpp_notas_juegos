#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;

};

int main() {
    // Crear valor y reservar memoria COTime
    Persona p = Persona();
    // Acceder y modificar el nombre de la persona
    p.nombre = "Ramon";
    p.edad = 30;

    // Crear desde punteros EXTime en memoria dinamica
    // Genera un puntero (desde la ejecucion)
    // Nota que las flechas son sintaxis de puntero
    Persona *q = new Persona();
    q->nombre = "Robin";
    q->edad = 29;



    // Acceder a valores inicializados en memoria dinamica


    cout << "Nombre: " << p.nombre << " -- Edad: " << p.edad << endl;
    cout << "Nombre: " << q->nombre << " -- Edad: " << q->edad << endl;

    cout << "Direccion de memoria de p: " << (int *) &p << endl;
    cout << "Direcciones de memoria de Ramon" << endl;
    for (int i = 0; i < 6; i++){
        cout << (int *) &p.nombre[i] << endl;
    }
    cout << "Direccion de memoria de Edad de p " << (int *) &p.edad <<endl;

    cout << "Direccion de memoria de q: " << (int *) &q << endl;
    cout << "Direcciones de memoria de Robin" << endl;
    for (int i = 0; i < 6; i++){
        cout << (int *) &q->nombre[i] << endl;
    }
    cout << "Direccion de memoria de Edad de q " << (int *) &q->edad << endl;

}
