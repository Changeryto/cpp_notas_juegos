#include <iostream>
#include <string>

using namespace std;

int main() {
    // Usando base
    char textoBase[] = {'H', 'o', 'l', 'a'};
    cout << "Texto con arreglo: " << textoBase << endl;

    // Usando biblioteca string
    string textoBase2 = "Soy un string completo";
    cout << "Texto con string: " << textoBase2 <<endl;

    // Metodos de un string
    // Conteo del tamanio
    cout << "Tamanio del texto anterior: " << textoBase2.size() << endl;

    // Parseo
    string number = "129";
    cout << stoi(number) + 10 << endl;
    cout << stof(number) + 10.1 << endl;
}