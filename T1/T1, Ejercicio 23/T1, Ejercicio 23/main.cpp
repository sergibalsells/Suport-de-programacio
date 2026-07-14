#include <iostream>

//23.Crea un programa que dada una temperatura en Fahrenheit la convierta en Celsius.

int main() {

    float fahrenheit;

    std::cout << "Introduce una temperatura en grados Fahrenheit: " <<std::endl;
    std::cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    std::cout << "En Celsius es: " << celsius << std::endl;

    return 0;
}