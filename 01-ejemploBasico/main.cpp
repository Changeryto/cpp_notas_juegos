#include <iostream> // Incluye la salida y entrada

using namespace std; // Permite usar el espacio de nombres estandar sin necesidad de escribir desde donde se estan importando

// Primero que se ejecuta del programa (punto de entrada)
int main() {
    int edadInicial = 0; // Iniciacion
    edadInicial = 16; // Reasignacion
    const int edadFinal = 99; // Evita la reasignacion de la variable
    cout << "La edad de una persona es: "; // Arroja una cadena de texto al terminal
    cout << edadInicial << endl; // Se realiza salto de linea
    cout << "La edad mexima de una persona es: ";
    cout << edadFinal << endl;

    // Crear un array de edades (enteros)
    int listaEdades[] = { 18, 20, 24, 50 };
    // Imprimir primer valor
    cout << "Primer valor de lista de edades: ";
    cout << listaEdades[0] << endl;
}