#include <iostream>

/*29.Crea un programa que pedirá al usuario una cantidad de dinero, el interés
anual y durante cuántos años desea invertirlo.Debe de mostrar para cada
año el beneficio obtenido anual y el beneficio total desde que inició la
inversión.*/

int main() {

	int dinero; 
	float interesAnual; 
	int años = 0; 

	std::cout << " Introduzca una cantidad de dinero que desea invertir: "; 
	std::cin >> dinero; 

	std::cout << " Introduzca el interés anual: ";
	std::cin >> interesAnual;

	std::cout << "Introduzca los anios que desea invertir: " ;
	std::cin >> años;
	float beneficioTotal = 0;

	for (int i = 1; i <= años; i++) {

		float beneficioAnual = (dinero * interesAnual) / 100;

		beneficioTotal += beneficioAnual;

		std::cout << "Beneficio del Anio " << i << ": " << beneficioAnual << " euros\n";
		std::cout << "Beneficio total acumulado: " << beneficioTotal << " euros\n\n";
	}

	return 0;
}