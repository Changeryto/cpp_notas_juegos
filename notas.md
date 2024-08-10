# Conocimiento sobre C++

Se inicia con los 2 cursos de Platzi. El plan es que finalmente se pueda usar el conocimiento para programar un RPG.

## Instrucciones para crear el ejecutable

```sh
g++ main.cpp -o programa.o
./programa.o
```

## Tipos de datos estándar más comunes en C++

Nombre| Tipo    |  Ejemplo| Tamaño
------|---------|---------|--------
bool  | booleano| true    | 4 bytes
int   | entero  | 100     | 4 bytes
float | flotante| 0.5     | 4 bytes
double| 64f     | 0.5     | 8 bytes
char  | ASCII   | 'A' o 65| 1 byte

## Variables

Se usa con los tipos de datos.

```c++
#inclute <iostream>

using namespace std;

int main() {
    int edadInicial = 0; // Iniciacion
    edadInicial = 16; // Reasignacion
}
```
## Operadores

Nombre         | Ejemplos
---------------|----------
Aritmeticos    | + - * / %
Comparacion    | == > < <= >= !=
Asignacion     | = += -= *= /= -- ++
Logicos        | && ||
Otros          | sizeof << >>

## Biblioteca estandar de C++

En C++ no hay tipo string, si no esta en la biblioteca estandar que debe ser importada.

Nombre      | Uso
------------|---------------------------
iostream    | Entrada y salida de datos
string      | Manejo de cadenas de texto
cmath       | Funciones matematicas comunes
exception   | Utilidad para el manejo de excepciones
array       | Manejo de arreglos de datos
vector      | Manejo de vectores de datos

## Manejo de memoria

### Segmentación de la memoria.

Codigo ejecutable --- Instrucciones
Literales no ejecutables --- Literales
Variables declaradas --- Datos estaticos
Memoria dinamica --- Heap (controlado por el programados)
 SECCION INTERMEDIA
Memoria dinámica --- Stack (gestionado por el compilador)

Toda instruccion tras la compilación están en un archivo ejecutable en la primera sección de memoria.

La sección de literales, inmutables, son acomodados aquí

Cada variable es almacenada, con un espacio de memoria, en la sección de datos estáticos. Siempre la misma cantidad de bytes.

Las secciones de memoria dinamica son heap y stack, heap crece según crecen los números de la dirección de memoria.
La sección de stack crece en el sentido contrario, esto ya que el espacio intermedio es un espacio limpio solicitado por el programa y otorgado por el sistema operativo.

En Excel por ejemplo, se reserva un espacio muy amplio, cuyos datos se reservan conforme van creciendo.
Si se agota el espacio entre heap y stack, sucede un desbordamiento de memoria.

## Punteros

Tipo especial de variable que almacena direcciones de memoria, útil para el manejo de memoria dinámica.

### Direcciones de memoria

La estructura básica de la RAM es similar a una tabla. Cada lista de elementos a almacenar tiene asignada una dirección de memoria única e irrepetible en un momento dado. Cada una puede ser accedida por el programa.
Por ejemplo, acceder a un char "A", este char está en un espacio reservado en la memoria RAM, en una dirección, por ejemplo 0x0001 (el compilador ahorra tener que recordar la dirección de memoria gracias al nombre de la variable).
De esta forma almacenamos el valor.

### Crear un puntero

Puntero a una variable:

```cpp
char letra = 'A';
char *puntero = &letra;
```

El * y el & se usan en esta sintaxis.
Para crear un puntero que almacene un caracter, podemos usar el tipo char en este caso.
El * indica que se usan direcciones de memoria.
El & indica que se pretende obtener la dirección de memoria de la variable letra.

En el ejemplo, tomamos la variable puntero (reservando un espacio de memoria) y le estamos asignando la dirección de memoria de una variable llamada letra.
Si el valor cambia, por medio del puntero tambien se puede obtener el valor, sin necesidad de leer directamente el valor.

