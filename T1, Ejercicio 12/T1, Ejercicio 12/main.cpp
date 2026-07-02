#include <iostream>

//12. Crea un programa que al pedir un número muestre su tabla de multiplicar
//entera del 1 al 10.

int main() {

	int userImput; 

	std::cout << "Tabla de multiplicar x10" << std::endl; 

	std::cout << "Introduzca un valor para hacer su tabla de multiplicar x10 " << std::endl; 
	std::cin >> userImput; 
	

	std::cout <<userImput << "x1:" << userImput * 1 << std::endl;
	std::cout <<userImput << "x2:" << userImput * 2 << std::endl;
	std::cout <<userImput << "x3:" << userImput * 3 << std::endl;
	std::cout <<userImput << "x4:" << userImput * 4 << std::endl;
	std::cout <<userImput << "x5:" << userImput * 5 << std::endl;
	std::cout <<userImput << "x6:" << userImput * 6 << std::endl;
	std::cout <<userImput << "x7:" << userImput * 7 << std::endl;
	std::cout <<userImput << "x8:" << userImput * 8 << std::endl;
	std::cout <<userImput << "x9:" << userImput * 9 << std::endl;
	std::cout <<userImput << "x10:" << userImput * 10 << std::endl;

	return 0; 
}