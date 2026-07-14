#include <iostream>
#define MIN_LADO 1 




/*6. Crea un programa que pedirá al usuario los 3 lados de un triángulo.El
programa debe de categorizar este triángulo como equilátero, isósceles o
escaleno.*/

int main() {

    float cost1, cost2, cost3;

    std::cout << "Introdueix el primer costat del triangle: ";
    std::cin >> cost1;

    std::cout << "Introdueix el segon costat del triangle: ";
    std::cin >> cost2;

    std::cout << "Introdueix el tercer costat del triangle: ";
    std::cin >> cost3;

    // Validació dels costats
    if (cost1 < MIN_LADO || cost2 < MIN_LADO || cost3 < MIN_LADO) {
        std::cout << "Els costats han de ser positius." << std::endl;
        return 0;
    }

    //Mirem quin tipus de triangle és
    if (cost1 == cost2 && cost2 == cost3) {
        std::cout << "El triangle es EQUILATER." << std::endl;
    }
    else if (cost1 == cost2 || cost1 == cost3 || cost2 == cost3) {
        std::cout << "El triangle es ISOSCELES." << std::endl;
    }
    else {
        std::cout << "El triangle es ESCALE." << std::endl;
    }

    return 0;
}
