#include <iostream>
#include <string>


class Persona {
private:
    std::string nombre;
    int edad;
public:
    explicit Persona(std::string nombre, int edad = 0) {
        this->nombre = nombre;
        this->edad = edad;
    }
    ~Persona() {}

    Persona &setEdad(int edad) {
        this->edad = edad;
        return *this;
    }

    Persona &setNombre(std::string nombre) {
        this->nombre = nombre;
        return *this;
    }

    int getEdad() {
        return this->edad;
    }

    std::string getNombre() {
        return this->nombre;
    }

    void saludar() {
        std::cout << "Soy " << this->nombre << " de " << this->edad << " anios" << std::endl;
    }

};

int main() {
   Persona *p = new Persona("Ramon", 21);
   p->saludar();
   //p->setEdad(50);
   //p->saludar();
   // Con el return de punteros podemos hacer lo siguiente
   p->setEdad(50).setNombre("Roman");
   p->saludar();
}

// El puntero this es parte del mismo parasigma
