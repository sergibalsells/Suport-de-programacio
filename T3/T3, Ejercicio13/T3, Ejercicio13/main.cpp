#include <iostream> 

/*13.Crea un programa que pida al usuario un número de inicio y la cantidad de
números sucesivos con los que hacer el cálculo.Para cada número el
programa elevará el número a sí mismo y lo sumará con el siguiente.Por
ejemplo, si el usuario introduce 2 y 3 el programa calculará : 2 ^ 2 + 3 ^ 3 + 4 ^ 4.13.Crea un programa que pida al usuario un número de inicio y la cantidad de
números sucesivos con los que hacer el cálculo.Para cada número el
programa elevará el número a sí mismo y lo sumará con el siguiente.Por
ejemplo, si el usuario introduce 2 y 3 el programa calculará : 2 ^ 2 + 3 ^ 3 + 4 ^ 4.*/

#define INICIO 0

int main() {

    int inicio, cantidad;

    std::cout << "Introduce el número de inicio: ";
    std::cin >> inicio;

    std::cout << "Introduce la cantidad de numeros sucesivos: ";
    std::cin >> cantidad;

    int sumaTotal = 0;

    for (int i = 0; i < cantidad; i++) {

        int numeroActual = inicio + i;

        // Calculamos numeroActual elevado a numeroActual
        int potencia = 1;
        for (int j = 0; j < numeroActual; j++) { 
            potencia *= numeroActual;
        }

        sumaTotal += potencia;
    }

    std::cout << "\nLa suma total es de: " << sumaTotal << std::endl;

    return 0;
}