#include <iostream>

//13.Crea un programa que pida una cantidad en gramos y muestre de resultado
//su equivalencia en kilogramos y miligramos.

int main() {

	float userImput; 

	std::cout << "Introduzca el valor en g:" << std::endl; 
	std::cin >> userImput; 

	std::cout << "Kilogramos: " << userImput / 1000 << std::endl; 
	std::cout << "Miligramos: " << userImput * 1000 << std::endl; 

	return 0; 
}