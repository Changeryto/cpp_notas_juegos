#include <iostream>

using namespace std;

int main() {
    while(true) {
        char respuesta = 'n';
        cout << "Deseas salir? [y/n]: ";
        cin >> respuesta;
        if (respuesta == 'y'){
            cout << "Adios" <<endl;
            break;
        }
    }

    int iter = 0;
    int fin = 4;

    do {
        cout << "Ayy lmao again" << iter << endl;
        ++iter;
    } while (iter < fin);
}