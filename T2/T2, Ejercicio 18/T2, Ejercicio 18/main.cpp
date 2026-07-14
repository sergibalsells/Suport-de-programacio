#include <iostream>


//18.Crea un programa que pregunte la edad al usuario y muestre por pantalla si
//és mayor de edad.

#define MAYORIA_EDAD 18   // Evitamos magic numbers

int main() {

    int edad;

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    if (edad >= MAYORIA_EDAD) {
        std::cout << "Eres mayor de edad." << std::endl;
    }
    else {
        std::cout << "Eres menor de edad." << std::endl;
    }

    return 0;
}
