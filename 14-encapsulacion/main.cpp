#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre_ = "";
    int edad_ = 0;
public:
    /*
    Persona(string nombre, int edad) {
        nombre_ = nombre;
        edad_ = edad;
    }
    */
    // Asignacion inline con valores por defecto
    explicit Persona(string nombre, int edad=0) : nombre_(nombre), edad_(edad) {}
    ~Persona() {

    }
    void saludar() {
        cout << "Soy " << nombre_ << " de " << edad_ << " anios." <<endl;
    }
};

int main() {
    Persona *p = new Persona("Diana");
    Persona *p2 = new Persona("Ramon", 30);

    p->saludar();
    p2->saludar();
}
