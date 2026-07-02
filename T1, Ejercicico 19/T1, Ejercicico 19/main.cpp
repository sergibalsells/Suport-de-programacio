#include <iostream>

//19. Crea un programa que pida la hora, minutos y segundos actuales al usuario
//y muestre el resultado en milisegundos.


int main() {

	int userInputH; 
	int userInputM; 
	int userInputS; 


	std::cout << "Introduzca una Hora: " << std::endl; 
	std::cin >> userInputH; 
	std::cout << "Introduzca unos Minutos: " << std::endl; 
	std::cin >> userInputM; 
	std::cout << "Introduzca unos Segundos: " << std::endl; 
	std::cin >> userInputS; 

	std::cout << "----Tranfromando a Milisegundos----" << std::endl; 
	
	long totalMs = (userInputH * 3600 + userInputM * 60 + userInputS) * 1000;

	std::cout << "En milisegundos es: " << totalMs << " ms" << std::endl;



	return 0; 

}