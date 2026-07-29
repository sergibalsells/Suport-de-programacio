#include <iostream>

/*7. Crea un programa que pida dos números al usuario.El primero será la
cantidad de números a mostrar y el segundo los saltos entre números.El
programa empezando por 0 mostrará tantos números como haya pedido el
usuario pero saltando entre número y número la cantidad que haya indicado
al usuario.*/

#define INICIO 0 // como queremos que empieze por 0 par ano usar magic numbers. 

int main() {

    int cantidad, salto;

    std::cout << "Introduce la cantidad de números a mostrar: ";
    std::cin >> cantidad;

    std::cout << "Introduce el salto entre números: ";
    std::cin >> salto;

    int numero = INICIO; // para que empiece des del 0 

    std::cout << "\nMostrando números:\n";

    for (int i = 0; i < cantidad; i++) {
        std::cout << numero << std::endl;
        numero += salto;
    }

    return 0;
}