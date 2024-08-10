#include <iostream>

using namespace std;

int main() {
    char letra = 'A';
    char *puntero = &letra;

    cout << "Letra: " << letra << endl;
    cout << "Direccion en memoria de letra: " << &letra << endl;
    cout << "Direccion de memoria convertido: " << (int *) &letra << endl;
    // Lo anterior obtiene una direccion de memoria en hexadecimal.

    cout << "Puntero: " << (int *) puntero <<endl;

    // Acceder al valor de la variable letra desde su puntero.
    cout << "Valor al que apunta el puntero: " << *puntero << endl;
}