#include <iostream>
#include <string>

/// La herencia es la capacidad de una clase de heredar caracter[isticas de una o mas clases base

using namespace std;

class Animal {
private:
    static int conteoAnimales;
protected:
    // Los protected permiten ser accedidos desde la herencia
    string alimento = "";
    int patas = 0;
public:
    Animal(string alimento = "");
    ~Animal();
    static int obtenerConteoAnimales();
    string obtenerAlimento() {
        return alimento;
    };
    /// Ejemplo de polimorfismo
    /// Puedo pasar cualquier animal como argumento
    void comer(Animal *animal) {
        cout << "Este animal esta comiendo " << animal->alimento <<endl;
    }
};

int Animal::conteoAnimales = 0;

Animal::Animal(string alimento) {
    cout << "Creando nuevo animal" << endl;
    this->alimento = alimento;
    conteoAnimales++;
}

Animal::~Animal() {
    cout << "Borrando este animal, sobra " << this->alimento <<endl;
    conteoAnimales--;
}

int Animal::obtenerConteoAnimales() {
    return conteoAnimales;
}

// Herencia
// Para que la herencia sea publica
class Aracnido : public Animal {
public:
    Aracnido() : Animal("insectos") { // Si tuviera argumentos, habria que pasarlos
        this->patas = 8;
    }
    void tejer() {
        cout << "Este aracnido esta tejiendo." << endl;
    }
};

class Insecto : public Animal {
public:
    Insecto(string alimento = "nectar") : Animal() {
        this->alimento = alimento;
        this->patas = 6;
    }
    void volar() {
        cout << "Este insecto vuela" <<endl;
    }

};

// Herencia multiple

class CruzaDemoniaca : public Insecto, public Aracnido {
public:
    CruzaDemoniaca(string alimento = "almas") : Insecto(), Aracnido() {
        this->Insecto::alimento = alimento;
        this->Aracnido::alimento = alimento;
        this->Insecto::patas = 10;
    }
    void mutar() {
        cout << "Este animal esta mutando!" << endl;
    }
    // Reescritura de metodos
    void comer() {
        cout << "!El demonio se alimenta de " << this-> Insecto::alimento << "!"<< endl;
    }
};

// Polimorfismo
// Ayuda al reuso de codigo, permitiendo que las clases
// interactuen intercambiando informacion entre ellos.

int main() {
    Animal animalDefault = Animal();
    Animal an1 = Animal("Bamboo");
    Animal an2 = Animal("Carne");
    cout << "# de animales: " << Animal::obtenerConteoAnimales() << endl;

    // Para crear un nuevo animal en runtime
    string userAlimento = "";
    cout << "Escribe alimento del nuevo animal: ";
    cin >> userAlimento;
    Animal *userAnimal = new Animal(userAlimento);
    animalDefault.comer(userAnimal);

    Aracnido arania = Aracnido();
    arania.tejer();

    Insecto mosquito = Insecto("Sangre");
    //mosquito.comer(); DESACTIVADO POR POLIMORFISMO
    animalDefault.comer(&mosquito);
    // Este animal esta comiendo sangre

    CruzaDemoniaca yo = CruzaDemoniaca();
    yo.Aracnido::tejer();
    yo.Insecto::volar();
    yo.mutar();
    yo.comer();

    delete userAnimal;
    /// LLAMAR AL PUNTER ANIMAL DESPUES DE ELIMINAR EL OBJETO
    /// CAUSA COMPORTAMIENTO INDETERMINADO
}
