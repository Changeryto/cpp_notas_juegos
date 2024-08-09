#include <iostream>

using namespace std;

int main() {
    int option = 0;
    cout << "Escoge una opción [1-3]: ";
    cin >> option;
    switch(option) {
        case 1:
            cout << "Seleccionaste la primera opcion" << endl;
            break; // La ausencia de break causa que se ejecute el resto de casos
        case 2:
            cout << "Seleccionaste la segunda opcion" << endl;
            break;
        case 3:
            cout << "Seleccionaste la tercera opcion" << endl;
            break;
        default:
            cout << "El valor no existe." << endl;
            break;

    }
}
