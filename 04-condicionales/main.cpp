#include <iostream>

using namespace std;

int main() {
    bool resultado1 = true && true;
    cout << "Dos true arrojan " << resultado1 << endl;
    
    int edadPersona = 0;
    cout << "Escribe tu edad: ";
    cin >> edadPersona;
    if (18 <= edadPersona && 60 >= edadPersona) {
        cout << "Puedes votar con " << edadPersona << " años" << endl;
    } else {
        cout << "No tienes derecho al voto" << endl;
    }
}