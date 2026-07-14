#include <iostream>
#include <cstdlib>
#include <ctime>


//13.Consulta la página oficial de C++ y mira cómo funciona la funcionalidad de
//random.Intenta generar un valor numérico aleatorio entre 10 y 1, 000.

#define MIN_NUM 10
#define MAX_NUM 1000

int main() {

    // Inicializamos el generador de números aleatorios
    srand(time(NULL));

    // Generamos un número entre MIN_NUM i MAX_NUM
    int numeroAleatorio = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    std::cout << "Numero aleatorio generado: " << numeroAleatorio << std::endl;

    return 0;
}
