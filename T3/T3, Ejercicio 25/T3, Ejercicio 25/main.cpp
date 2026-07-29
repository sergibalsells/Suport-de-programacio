#include <iostream>

// 25.Modifica el ejercicio anterior para que el interior esté vacío.

int main() {

	int numeroUser;

	std::cout << "Introduce un numero para crear el cuadrado:";
	std::cin >> numeroUser;

	for (int i = 0; i < numeroUser; i++)
	{
		for (int j = 0; j < numeroUser; j++) {

			bool esBordeFila = (i == 0) || (i == numeroUser - 1);
			bool esBordeColumna = (j == 0) || (j == numeroUser - 1);

			if (esBordeFila || esBordeColumna) {
				std::cout << "*"; 
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;

}