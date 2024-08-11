#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre = "Anonimo";
        int edad = 0;

        // Constructor
        Persona(string n, int e) {
            nombre = n;
            edad = e;
        }
        // Destructor
        ~Persona() {
            // Solo se necesitan en caso de tener memoria dinamica
            cout << "Destructor de " << nombre << endl;
        }

        void saludar() {
            cout << "Soy " << nombre << endl;
        }

    private:
        string raza = "Desconocida";
};

// Los destructores se invocan al acabar la funcion donde pertenecen
// O al solicitar su delete.
// Los punteros no se destrullen automaticamente
// Invocar un puntero destruido genera un error de segmentacion

int main() {
    Persona ramon = Persona("Ramon", 21);
    cout << "Persona 1: " << ramon.nombre << " -- Edad: " << ramon.edad << endl;
    ramon.saludar();


    Persona *roman = new Persona("Roman", 40);
    cout << "Persona 2: " << roman->nombre << " -- Edad: " << roman->edad << endl;
    roman->saludar();
    delete roman;
}
