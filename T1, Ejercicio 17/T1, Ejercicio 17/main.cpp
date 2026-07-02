#include <iostream>

//17.Crea un programa donde el usuario ingresa una cantidad económica, unas
//tasas de interés y unos meses.El programa debe de mostrar los intereses y
//el total con los intereses.


int main() {

	int userInput; 

	std::cout << "----Tasas de Interes-----" << std::endl; 

	std::cout << "Introdzca un valor economico:" << std::endl; 
	std::cin >> userInput; 

	std::cout << "Tasa de interes del 3%: " << userInput * 0.03 << std::endl; 
	std::cout << "Tasa de interes del 20%: " << userInput * 0.20 << std::endl; 
	std::cout << "Tasa de interes del 10%: " << userInput * 0.10 << std::endl; 
	std::cout << "Tasa de interes del 27%: " << userInput * 0.27 << std::endl; 

	std::cout << std::endl; 
	std::cout << "Total de intereses:" << std::endl; 
	std::cout << std::endl;

	std::cout << "Total de la tasa de interes del 3%: " << (userInput * 0.03) + userInput << std::endl;
	std::cout << "Total de la tasa de interes del 20%: " << (userInput * 0.20) + userInput << std::endl;
	std::cout << "Total de la tasa de interes del 10%: " << (userInput * 0.10) + userInput << std::endl;
	std::cout << "Total de la tasa de interes del 27%: " << (userInput * 0.27) + userInput << std::endl;

	return 0; 
}