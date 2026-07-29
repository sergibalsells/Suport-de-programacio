#include <iostream>

/*6. Crea un programa que pida la edad y el año de nacimiento del usuario.El
programa debe de mostrar cuántos años tenía en cada año desde que
nació.*/


#define NUM_MESES 12   // No tendria porque usarse, pero evita futuros magic numbers

int main() {

    int edadActual, anioNacimiento;

    std::cout << "Introduce tu edad actual: ";
    std::cin >> edadActual;

    std::cout << "Introduce tu año de nacimiento: ";
    std::cin >> anioNacimiento; 


    int anioActual = anioNacimiento + edadActual; 

    std::cout << "\nAños desde que naciste:\n";   

    for (int anio = anioNacimiento; anio <= anioActual; anio++) {

        int edadEnEseAnio = anio - anioNacimiento;

        std::cout << "En el anio " << anio << " tenias " << edadEnEseAnio << " anios." << std::endl;
    }

    return 0;
}
