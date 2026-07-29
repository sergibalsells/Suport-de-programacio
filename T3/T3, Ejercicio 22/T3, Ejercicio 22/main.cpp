#include <iostream>
#include <cstdlib>
#include <ctime>// random

/*22.Al iniciar el programa este generará un número aleatorio entre 0 y 20. El
usuario tendrá 5 intentos para acertar el número.Si no acierta el programa
le indicará si el número a acertar es mayor o menor.Si no acierta tras los 55
intentos le indicara cuál era el número que debía acertar.*/

int main() {
    const int MIN_NUM = 0;
    const int MAX_NUM = 20;
    const int INTENTOS_MAX = 5;

    std::srand(std::time(NULL));
    int numeroSecreto = MIN_NUM + std::rand() % (MAX_NUM - MIN_NUM + 1);

    int numeroUsuario = 0;
    int intentosRealizados = 0;
    bool acertado = false;

    std::cout << "Debes adivinar un numero entre " << MIN_NUM << " y " << MAX_NUM << ".\n";

    while (intentosRealizados < INTENTOS_MAX && !acertado) {
        std::cout << "\nIntento " << (intentosRealizados + 1) << " de " << INTENTOS_MAX << "Introduce un numero: ";
        std::cin >> numeroUsuario; 

        if (numeroUsuario == numeroSecreto) {
            acertado = true;
        }
        else {
            if (numeroUsuario < numeroSecreto) {
                std::cout << "El numero secreto es mayor";
            }
            else {
                std::cout << "El numero secreto es menor";
            }
        }

        intentosRealizados++;
    }

    if (acertado) {
        std::cout << "\n\nCorrecto! El numero era: " << numeroSecreto << ".\n";
    }
    else {
        std::cout << "\n\nCasi, el numero correcto era " << numeroSecreto << ".\n";
    }

    return 0;
}