#include <iostream>

/*21.Crea un programa que permita al usuario insertar números infinitamente
preguntando tras cada número si desea añadir otro o salir del programa.
Cuando finalice debe de mostrar el mayor número impar introducido y la
cantidad de números previos a este que se habían introducido, los números
pares aunque no se tengan en cuenta para ser el mayor si deben de
incluirse en el recuento de cantidad de números introducidos previamente.*/


const char OPCION_SI = 's';
const char OPCION_NO = 'n';

int main() {

 
    int numeroIntroducido = 0;
    int mayorImpar = 0;
    int contadorTotal = 0;
    int contadorAntesMayor = 0;
    bool existeImpar = false;

    char opcion = OPCION_SI;

    while (opcion == OPCION_SI) {
        std::cout << "Introduce un numero: ";
        std::cin >> numeroIntroducido;

        contadorTotal++;

        // Comprobamos si es  numero impar
        if (numeroIntroducido % 2 != 0) {
            if (!existeImpar || numeroIntroducido > mayorImpar) {
                mayorImpar = numeroIntroducido;
                contadorAntesMayor = contadorTotal - 1;
                existeImpar = true;
            }
        }

        std::cout << "Deseas introducir otro numero? (s/n): ";
        std::cin >> opcion;
    }

    if (existeImpar) {
        std::cout << "\nMayor numero impar introducido: " << mayorImpar << "\n";
        std::cout << "Cantidad de numeros antes de este: " << contadorAntesMayor << "\n";
    }
    else {
        std::cout << "\nNo se introdujo ningun numero impar.\n";
    }

    return 0;
}