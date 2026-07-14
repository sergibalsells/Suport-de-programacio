#include <iostream>


/*23.Crea un programa que le pida la edad al usuario y sus ingresos mensuales.
Si es mayor de 18 años y sus ingresos anuales son superiores a 15.000€
debe de indicarle que haga la declaración.*/

#define MAYORIA_EDAD 18
#define LIMITE_DECLARACION 15000

int main() {

    int edad;
    float ingresosMensuales;

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;

    std::cout << "Introduce tus ingresos mensuales en euros: ";
    std::cin >> ingresosMensuales;

    float ingresosAnuales = ingresosMensuales * 12;

    if (edad >= MAYORIA_EDAD && ingresosAnuales > LIMITE_DECLARACION) {
        std::cout << "Debes hacer la declaración de la renta." << std::endl;
    }
    else {
        std::cout << "No estás obligado a hacer la declaración." << std::endl;
    }

    return 0;
}
