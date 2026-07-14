#include <iostream>

/*21.Crea un programa que nos pregunte si queremos calcular el área de un
círculo, un cuadrado o un triángulo.De acuerdo a lo que nos indique el
usuario deberemos de preguntar los valores necesarios para su cálculo y
seguidamente mostrar el resultado.Si no elige una opción válida debemos
indicarlo.*/

#define OPCION_CIRCULO 1
#define OPCION_CUADRADO 2
#define OPCION_TRIANGULO 3

int main() {

    int opcion;

    std::cout << "¿Qué área deseas calcular?" << std::endl;
    std::cout << "1 - Círculo" << std::endl;
    std::cout << "2 - Cuadrado" << std::endl;
    std::cout << "3 - Triángulo" << std::endl;

    std::cout << "Elige una opción: ";
    std::cin >> opcion;

    switch (opcion) {

    case OPCION_CIRCULO: {
        float radio;
        std::cout << "Introduce el radio del círculo: ";
        std::cin >> radio;

        float area = 3.1416f * radio * radio;
        std::cout << "El área del círculo es: " << area << std::endl;
        break;
    }

    case OPCION_CUADRADO: {
        float lado;
        std::cout << "Introduce el lado del cuadrado: ";
        std::cin >> lado;

        float area = lado * lado;
        std::cout << "El área del cuadrado es: " << area << std::endl;
        break;
    }

    case OPCION_TRIANGULO: {
        float base, altura;
        std::cout << "Introduce la base del triángulo: ";
        std::cin >> base;

        std::cout << "Introduce la altura del triángulo: ";
        std::cin >> altura;

        float area = (base * altura) / 2;
        std::cout << "El área del triángulo es: " << area << std::endl;
        break;
    }

    default:
        std::cout << "ERROR: Opción no válida." << std::endl;
        break;
    }

    return 0;
}