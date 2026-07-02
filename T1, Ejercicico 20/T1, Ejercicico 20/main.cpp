#include <iostream>

//20. Crea un programa que al introducir una cantidad de milisegundos muestre
//la cantidad de horas, minutos y segundos que representa.


int main() {

	long userInput; 

    std::cout << "Introduzca una cantidad de milisegundos: " << std::endl;
    std::cin >> userInput;

    long long totalSeconds = userInput / 1000;

    int horas = totalSeconds / 3600;
    int minutos = (totalSeconds % 3600) / 60;
    int segundos = totalSeconds % 60;

    std::cout << "Equivale a: " << std::endl;
    std::cout << "Horas: " << horas << std::endl;
    std::cout << "Minutos: " << minutos << std::endl;
    std::cout << "Segundos: " << segundos << std::endl;

    return 0; 
}