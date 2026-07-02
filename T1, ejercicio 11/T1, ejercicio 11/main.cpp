#include <iostream>

//Crea un programa que haga la conversación de € a ¥, $ y £ usando valores
//actuales.


int main() {

	int userImput; 

	std::cout << "Calculadora de conversion" << std::endl; 


	std::cout << "Introduzca el valor en EUROS para hacer la conversion:" << std::endl; 
	std::cin >> userImput; 

	std::cout << "Dolares: " << userImput * 1.09 << std::endl; 
	std::cout << "Yenes: " << userImput * 160 << std::endl; 
	std::cout << "Libras: " << userImput * 0.86 << std::endl; 


	return 0; 

}