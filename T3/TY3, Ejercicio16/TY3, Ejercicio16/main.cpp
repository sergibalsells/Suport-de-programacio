#include <iostream>

/*16.Crea un programa que pedirá un número al usuario y mostrará todos los
números de forma descendente hasta llegar al 0. Asegúrate que no se
pueden añadir números negativos, si es el caso debe pedir un nuevo
número.*/

#define INICIO 0 

int main() {
	int numero; 

	std::cout << "Introduzca un numero "; 
	std::cin >> numero; 
	if (numero <= INICIO)
	{
		std::cout << "Numero invalido, intente de nuevo " << std::endl; 
		 
	}

	for (int i = 0; i <= numero ; 0)
	{
		std::cout << "Numero "<< numero--  << std::endl; 
 	}

	
	return 0; 

}