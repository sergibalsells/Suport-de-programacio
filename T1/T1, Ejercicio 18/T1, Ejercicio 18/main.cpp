#include <iostream>

/*18.Crea un programa en el que se introducen 3 cifras que representan lo que
aportan 3 personas al pagar una cuenta y haz que el programa muestre que
% han aportado cada uno sobre el total.*/

int main() {

	float userInput1; 
	float userInput2; 
	float userInput3; 
	float importe = 230.34; 

	std::cout << "El importe a pagar es de : " << importe << "Euros" << std::endl;
	std::cout << std::endl; 
	std::cout << "Introduzca la cifra a represnetar Persona 1: " << std::endl; 
	std::cin >> userInput1; 
	std::cout << "Introduzca la cifra a represnetar Persona 2: " << std::endl; 
	std::cin >> userInput2; 
	std::cout << "Introduzca la cifra a represnetar Persona 3: " << std::endl; 
	std::cin >> userInput3; 

	std::cout << "El importe aportado en % de la persona 1 es de: " << ((userInput1/importe) * 100) <<" % " << std::endl;
	std::cout <<"El importe aportado en % de la persona 2 es de: " << ((userInput2 / importe) * 100) <<" % " << std::endl;
	std::cout <<"El importe aportado en % de la persona 3 es de: " << ((userInput3 / importe) * 100) << " % " << std::endl;



	return 0; 

}