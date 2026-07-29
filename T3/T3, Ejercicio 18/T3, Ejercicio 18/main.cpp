#include <iostream>

/*18.Crea un programa que permita al usuario añadir tantos números como
quiera.Al final, cuando ya no quiera añadir más números el programa debe
de mostrar el promedio de todos los números añadidos.*/

#define CONTINUAR 'S'
#define SALIR 'N'


int main() {

    int numeros;
    int suma = 0;
    int contador = 0;
    char opcion;

    do {
        std::cout << "Introduce un numero: ";
        std::cin >> numeros;

        suma += numeros;
        contador++;

        std::cout << "¿Quieres añadir mas numeros? (S/N): ";
        std::cin >> opcion;

    } while (opcion == CONTINUAR || opcion == 's');

    float promedio = static_cast<float>(suma) / contador;

    std::cout << "\nEl promedio de los numeros es: " << promedio << std::endl;

    return 0;
}