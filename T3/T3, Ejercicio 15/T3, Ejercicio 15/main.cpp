# include  <iostream>

//15.Crea un programa que pida un número al usuario y muestre en orden tal
//cantidad de números primos pero omitiendo 1 de cada 2 números a mostrar.

#define INICIO 2

int main() {

    int cantidad;
    std::cout << "Introduce la cantidad de numeros primos a mostrar (omitiendo 1 de cada 2): ";
    std::cin >> cantidad;

    int mostrados = 0;
    int numero = INICIO;
    bool mostrar = true;   // alternamos  entre mostrar y omitir   

    std::cout << "\nMostrando " << cantidad << " números primos:\n";

    while (mostrados < cantidad) {

        // Comprobar si el numero es primo
        bool esPrimo = true;
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {

            if (mostrar) {
                std::cout << numero << std::endl;
                mostrados++;
            }

            // Alternar entre mostrar y omitir
            mostrar = !mostrar;
        }
       
        numero++;
    }

    return 0;
} 

