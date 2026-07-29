#include <iostream>

//11. Crea un programa que pida un número al usuario y muestre su tabla de
//multiplicar del 0 al 9.

#define INICIO 0
#define FIN 9

int main() {
	int numero; 

	std::cout << "Introduce un numero para mostrar su tabla de multiplicar: ";
	std::cin >> numero;

	std::cout << "\nTabla de multiplicar del " << numero << ":\n";

	for (int i = INICIO; i <= FIN; i++) {
		std::cout << numero << " x " << i << " = " << numero * i << std::endl; 

	}

	return 0;

}

