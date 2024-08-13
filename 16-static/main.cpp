#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre = "";
    int edad = 0;
public:
static int numeroDePersonas; // No modificable desde la clase. Cada que se cree un objeto Persona, el no. incrementa.
    Persona(string nombre, int edad);
    ~Persona() {

    };
    void saludar();
};

// Se usa sintaxis para indicar pertenencia
int Persona::numeroDePersonas = 0;

// Reescrbir el comportamiento de una funcion abstracta
void Persona::saludar() {
    cout << "Hola, soy " << this->nombre <<endl;
}

// Definir el constructor desde fuera
Persona::Persona(string nombre, int edad){
        this->nombre = nombre;
        this->edad = edad;
        Persona::numeroDePersonas++;
}

int main() {
    cout << "Personas creadas: " << Persona::numeroDePersonas << endl;
    Persona p1 = Persona("Gerardo", 22);
    Persona p2 = Persona("Raul", 50);
    p1.saludar();
    p2.saludar();
    cout << "Personas creadas: " << Persona::numeroDePersonas << endl;
}
