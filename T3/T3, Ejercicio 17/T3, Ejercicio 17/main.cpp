#include <iostream>

/*17.Crea un programa que pida al usuario dos números.El programa debe de
mencionar todos los números naturales que haya comprendidos entre
ambos empezando siempre del menor al mayor.*/

int main() {

	int userNumber1, userNumber2;

	std::cout << "Introduzca un numero ";
	std::cin >> userNumber1;

	std::cout << "Introduzca otro numero ";
	std::cin >> userNumber2;

	for (int i = userNumber1; i < userNumber2 -1; i++) 
	{
		std::cout << i + 1 << std::endl;
	}

	return 0;
}