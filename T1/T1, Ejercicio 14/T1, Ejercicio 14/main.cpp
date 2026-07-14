#include <iostream>

//14. Crea un programa que pida 3 números al usuario y muestre el valor
//promedio de ellos.

int main() {

	int userInput1; 
	int userInput2; 
	int userInput3; 
	
	
	std::cout << "Introduzca un numero:" << std::endl;
	std::cin >> userInput1; 
	
	std::cout << "Introduzca un numero:" << std::endl;
	std::cin >> userInput2;

	std::cout << "Introduzca un numero:" << std::endl;
	std::cin >> userInput3;

	std::cout << "Valor promedio: " << ((userInput1 + userInput2 + userInput3) / 3) << std::endl; 
	

	return 0; 
}