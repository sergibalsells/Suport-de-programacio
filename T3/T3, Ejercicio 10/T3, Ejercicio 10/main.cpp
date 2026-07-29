#include <iostream>


/*10.Crea un programa que irán sumando los números que le de el usuario
infinitamente.Cada vez que sume un número le pedirá si quiere continuar o
salir.Asegúrate que al menos pida un número usando el bucle do while.*/


#define CONTINUAR 's' // No hace falta pero para evitar los magic numbers
#define SALIR 'n'

int main() {

    int numero;
    int suma = 0;
    char opcion;

    do {
        std::cout << "Introduce un número para sumar: ";
        std::cin >> numero;

        suma += numero;

        std::cout << "¿Quieres continuar? (s/n): ";
        std::cin >> opcion;

    } while (opcion == CONTINUAR);

    std::cout << "\nLa suma total es de: " << suma << std::endl;

    return 0;
}