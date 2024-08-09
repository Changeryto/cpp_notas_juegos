#include <iostream>

using namespace std;

int main() {
    int a = 2;
    ++a;
    int b = 10;
    cout << a*b << endl;
    int c = a / b;
    cout << c << endl; // Peligro con los tipos de datos, perdida de informacion
    bool booleano = a < b;
    cout << booleano << endl;
    cout << "Imprimir el tamanio de un valor como la lista: ";
    int edades[] = {24, 45, 10, 0};
    cout << sizeof(edades) << endl;
    cout << "Obtener el numero de elementos de una lista: ";
    cout << sizeof(edades)/sizeof(edades[0]) << endl;

}