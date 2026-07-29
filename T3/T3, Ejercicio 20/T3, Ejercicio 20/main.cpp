#include <iostream>

/*20.Crea un programa donde el usuario podrá añadir números sin parar hasta
que lo indique.El programa debe de mostrar tras cada número cuál ha sido
el número mayor introducido y cuál el menor hasta el momento siendo el
mismo la primera vez que introduce un número.*/

int main() {

    int numero;
    int mayor, menor;
    char opcion;

    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    mayor = numero;
    menor = numero;

    std::cout << " El numero mayor hasta ahora: " << mayor << std::endl;
    std::cout << "El numero menor hasta ahora: " << menor << std::endl;

    do {
        std::cout << "Quieres introducir otro numero? (s/n): ";
        std::cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            std::cout << "Introduce un numero: ";
            std::cin >> numero;

            if (numero > mayor) {
                mayor = numero;
            }

            if (numero < menor) {
                menor = numero;
            }

            std::cout << "El nuemro mayor hasta ahora: " << mayor << std::endl;
            std::cout << "El numero menor hasta ahora: " << menor << std::endl;
        }

    } while (opcion == 's' || opcion == 'S');

    return 0;
}