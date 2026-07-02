#include <iostream>


//22.Crea un programa que pida al usuario una temperatura en grados Celsius y
//la pase a Fahrenheit y Kelvin.

int main() {

    float userInput;

    std::cout << "Introduce una temperatura en grados Celsius: ";
    std::cin >> userInput;

    float fahrenheit = (userInput * 9.0 / 5.0) + 32.0;
    float kelvin = userInput + 273.15;

    std::cout << "En Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "En Kelvin: " << kelvin << std::endl;

    return 0;
}


