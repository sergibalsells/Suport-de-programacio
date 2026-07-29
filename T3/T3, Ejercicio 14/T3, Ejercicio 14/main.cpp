#include <iostream>

//14.Crea un programa que pida un número al usuario y muestre en orden tal
//cantidad de números primos empezando por el 1.

#define INICIO 1

int main() {

    int cantidad;
    std::cout << "Introduce la cantidad de números primos a mostrar: ";
    std::cin >> cantidad;

    int contador = 0;
    int numero = INICIO;

    std::cout << "\nMostrando " << cantidad << " números primos empezando por 1:\n";

    while (contador < cantidad) {

        bool esPrimo = true;

        if (numero == 1) {
            // El enunciado pide empezar por 1 aunque no sea primo
            esPrimo = true;
        }

        //vamos a comprobar si es nuemro primo 

        else {
            // Comprobar si es primo
            for (int i = 2; i < numero; i++) {
                if (numero % i == 0) {
                    esPrimo = false;
                    break;
                }
            }
        }

        if (esPrimo) {
            std::cout << numero << std::endl;
            contador++;
        }

        numero++;
    }

    return 0;
}