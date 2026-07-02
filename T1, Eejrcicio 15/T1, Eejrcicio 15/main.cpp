#include <iostream>

//15.Crea un programa que al introducir una velocidad en km / h y un tiempo en
//horas nos indique que distancia habremos recorrido en m.


int main() {

	int userInputV; 
	int userInputH; 

	std::cout << "Introduzca una velocidad en km/h: " << std::endl; 
	std::cin >> userInputV; 

	std::cout << "Introduzca untiempo en H : " <<std::endl;
	std::cin >> userInputH;

	std::cout << "Dsitancia recorrida en metros:" << userInputV * userInputH * 1000 << std::endl; 

	return 0; 

}