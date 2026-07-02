#include <iostream>

//24.Crea un programa que dado una temperatura en Fahrenheit la convierte en Kelvin.

int main() {

    float fahrenheit;

    std::cout << "Introduce una temperatura en grados Fahrenheit: ";
    std::cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    float kelvin = celsius + 273.15;

    std::cout << "En Kelvin es: " << kelvin << std::endl;

    return 0;
}