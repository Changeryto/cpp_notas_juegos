#include <iostream>

using namespace std;

float pow(float base, int exponente = 2) {
    if(0 == exponente) {
        return 1;
    } else {
        float answer = base;
        --exponente;
        for(int i=0; i<exponente; ++i) {
            answer *= base;
        }
    return answer;
    }
    
}

int main() {
    float base = 2;
    for(int exponente = 0; exponente<10; ++exponente) {
        cout << base << "^" << exponente << " = " << pow(base, exponente) << endl;
    }
    
}