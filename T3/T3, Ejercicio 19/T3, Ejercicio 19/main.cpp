#include <iostream>

/*19.Crea un programa que pida al usuario todos los números que quiera.El
programa debe de gestionar dos resultados.Por un lado sumará de forma
independiente los números impares y por otro lado los números pares
mostrando el resultado al finalizar.*/


int main() {
    int numero;
    int sumaPares = 0;
    int sumaImpares = 0;
    char opcion;

    do {
        std::cout << "Introduce un numero: ";
        std::cin >> numero;

        if (numero % 2 == 0) {
            sumaPares += numero;
        }
        else {
            sumaImpares += numero;
        }

        std::cout << "Quieres continuar añadiendo numeros? (s/n): ";
        std::cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    std::cout << "La suma de los numeros pares es: " << sumaPares << std::endl;
    std::cout << "La suma de los numeros impares es: " << sumaImpares << std::endl;

    return 0;
}
