#include <iostream>

//16.Crea un programa que pida al usuario una distancia en metros y muestre su
//equivalente en millas, yardas, pies y pulgadas(Sistema Imperial).


int main() {

	int userInput; 

	std::cout << "Intrduzca una distancia en metros:" << std::endl; 
	std::cin >> userInput; 

	std::cout << "Millas: " << userInput * 0.000621371 << std::endl; 
	std::cout <<"Yardas: " << userInput * 1.09361 << std::endl;
	std::cout <<"Pies: " << userInput * 3.28084 << std::endl;
	std::cout <<"Pulgadas: " << userInput * 39.3701 << std::endl;


	return 0; 

}