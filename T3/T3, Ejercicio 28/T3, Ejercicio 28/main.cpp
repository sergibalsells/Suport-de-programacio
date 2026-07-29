#include <iostream>

//28. Crea un programa que pidiendo un número al usuario lo convierta a binario
//y lo muestre por pantalla.

int main() {
    int numeroUser;
    std::cout << "Introduzca un numero para pasarlo a binario: ";
    std::cin >> numeroUser;

    int binarioAlReves = 0;

    // PRIMER PASO: generamos el binario al revés
    while (numeroUser > 0) {
        int bit = numeroUser % 2;
        binarioAlReves = binarioAlReves * 10 + bit;
        numeroUser = numeroUser / 2;
    }

    // SEGUNDO PASO: invertimos el número
    int binarioFinal = 0;

    while (binarioAlReves > 0) {
        int digito = binarioAlReves % 10;
        binarioFinal = binarioFinal * 10 + digito;
        binarioAlReves /= 10;
    }

    std::cout << "Binario: " << binarioFinal << std::endl;
    return 0;
}