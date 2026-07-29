#include <iostream>
#include <string>

/*8. Crea un programa que pida al usuario letras.El usuario puede empezar con
una vocal o una consonante, mientras vaya alternando entre vocal y
consonante el programa seguirá pidiendo más letras.Si en algún momento
el usuario no alterna entre ambas el programa finaliza mostrando al usuario
la cantidad de letras totales que ha alternado.*/


#define VOCAL1 'a'
#define VOCAL2 'e'
#define VOCAL3 'i'
#define VOCAL4 'o'
#define VOCAL5 'u'

int main() {

    char letra;
    bool esVocalAnterior = false;
    bool primeraLetra = true;
    int contador = 0;

    std::cout << "Introduce letras. El programa finaliza cuando no alternes vocal/consonante.\n";

    while (true) {

        std::cout << "Letra: ";
        std::cin >> letra;

        bool esVocalActual =
            (letra == VOCAL1 || letra == VOCAL2 || letra == VOCAL3 ||
                letra == VOCAL4 || letra == VOCAL5);

        if (primeraLetra) {
            //Jacemos que la primera letra siempre es válida
            primeraLetra = false;
            esVocalAnterior = esVocalActual;
            contador++;
        }
        else {
            // Debe alternar: vocal i consonante o consonante i vocal
            if (esVocalActual == esVocalAnterior) {
                // No alterna, se termina
                break;
            }
            else {
                contador++;
                esVocalAnterior = esVocalActual;
            }
        }
    }

    std::cout << "\nHas alternado correctamente " << contador << " letras." << std::endl;

    return 0;
}