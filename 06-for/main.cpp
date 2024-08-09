#include <iostream>

using namespace std;

int main() {
    int limit = 200;
    cout << "Escribe tu limite: ";
    cin >> limit;
    for (int i = 0; i <= limit ; i++) {
        cout << "Iteracion actual: " << i << endl;
    }
    
    int lista[] = { 100, 200, 31416 };
    cout << "Se itera sobre una lista." << endl;
    for (int i = 0; i <= (sizeof(lista)/sizeof(lista[0])); ++i) {
        cout << lista[i] << endl;
    }


    // Lo siguiente tiene un problema al permitir acceder mas alla del tamanio de la lista.
    int maxIters = 5;
    cout << "Escribe la maxima iter sobre lista: ";
    cin >> maxIters;
    for (int i; i <= maxIters; ++i) {
        cout << "Rescatado: " << lista[i] << endl;
    }

    // For range (igual al for anterior, parecido a un for each)
    for (auto &&i : lista) {
        cout << "For range: " << i << endl;
    }
}