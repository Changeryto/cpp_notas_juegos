#include <iostream>

using namespace std;

int main() {
    cout << "Mostrando los pares" << endl;
    int range = 0;
    cout << "Escribe el maximo para mostrar pares: ";
    cin >> range;
    for (int i = 0; i <= range; i+=2){
        cout << "Par: " << i << endl;
    }
}