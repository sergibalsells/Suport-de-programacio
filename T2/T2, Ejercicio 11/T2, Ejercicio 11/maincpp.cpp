#include <iostream>

//11. Crea un programa que pida dos números para luego dividirlos, sin embargo
//debe de tener en cuenta que no es posible dividir algo entre 0.

#define DIVISOR_PROHIBIDO 0   // Evitem magic numbers

int main() {

    float num1, num2;

    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    if (num2 == DIVISOR_PROHIBIDO) {
        std::cout << "ERROR: No es posible dividir entre 0." << std::endl;
        return 0;
    }

    float resultat = num1 / num2;

    std::cout << "El resultado de la division es: " << resultat << std::endl;

    return 0;
}
