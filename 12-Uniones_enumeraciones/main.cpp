#include <iostream>
#include <string>

using namespace std;

int main() {
    // Utiles para ahorrar espacios de memoria en RAM.
    union number_letter {
        int number;
        char letter;
    }; // Puede almacenar en mismo espacio de RAM un numero y una letra

    // Esto se comporta como una lista
    number_letter nla = {'A'};

    cout << "nla como numero: " << nla.number << endl;
    cout << "nla como letra: " << nla.letter << endl;

    // Esto sucede porque A es 65 en la tabla ASCII
    cout << "Conversion forzada (ItoA): " << (char) nla.number << endl;
    cout << "Conversion forzada (AtoI): " << (int) nla.letter << endl;

    // Las enumeraciones tambien sirven para hacer registro en memoria RAM
    enum diasDeSemana {lunes, martes, miercoles, jueves, viernes, sabado, domingo};

    diasDeSemana hoy = domingo;

    cout << "Hoy es: " << hoy << " en representacion numerica." << endl;

    // Generar equivalencia
    enum equivalentesDeSemana {lun = 'L', mar = 'M', mie = 'E', jue = 'J', vie = 'V', sab = 'S', dom = 'D'};
    equivalentesDeSemana maniana = lun;

    cout << "Maniana es: " << (char) maniana << "." << endl;

    // Su principal uso es optimizar el uso de memoria.
}
