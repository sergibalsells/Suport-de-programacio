#include <iostream>

/*24.El usuario introduce un número que representa el tamaño de un cuadrado.
El programa debe de mostrar por pantalla un cuadrado formado por los
caracteres * del mismo tamaño que el número introducido.*/

int main() {


	int numeroUser; 
	

	std::cout << "Introduce un numero para crear el cuadrado:"; 
	std::cin >> numeroUser; 

	for (int i = 0; i < numeroUser; i++)
	{
		for (int j = 0; j < numeroUser; j++)
		{
			std::cout << " * ";
		}
		std::cout << std::endl; 
	}
	return 0; 

}