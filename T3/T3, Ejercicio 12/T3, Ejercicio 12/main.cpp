#include <iostream>

//12.Crea un programa que imprima todas las tablas de multiplicar del 1 al 10
//usando bucles anidados.

#define INICIO 1
#define FIN 10

int main() {

    for (int numero = INICIO; numero <= FIN; numero++) {

        std::cout << "\nTabla del " << numero << ":\n";

        for (int i = INICIO; i <= FIN; i++) {
            std::cout << numero << " x " << i << " = " << numero * i << std::endl;
        }
    }

    return 0;
}