#include <iostream>
#include <cstdlib>
#include <ctime>


/*14.Crea un programa que genere aleatoriamente 2 números entre el 1 y el 10,
los muestre al usuario y espere que introduzca el resultado de multiplicar
ambas cifras e indique si ha acertado o no.*/ 


#define MIN_NUM 1
#define MAX_NUM 10

int main() {

    srand(time(NULL));

    int num1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    int num2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    std::cout << "Primer numero: " << num1 << std::endl;
    std::cout << "Segundo numero: " << num2 << std::endl;

    int resultadoUsuario;
    std::cout << "Introduce el resultado de multiplicarlos: ";
    std::cin >> resultadoUsuario;

    int resultadoCorrecto = num1 * num2;

    if (resultadoUsuario == resultadoCorrecto) {
        std::cout << "Correcto, has acertado." << std::endl;
    }
    else {
        std::cout << "Incorrecto. El resultado correcto era: " << resultadoCorrecto << std::endl;
    }

    return 0;
}
