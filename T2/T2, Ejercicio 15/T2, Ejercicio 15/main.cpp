#include <iostream>
#include <cstdlib>
#include <ctime>


/*15.Crea un programa que genere un número aleatorio entre el 1 y el 20. El
usuario tendrá 5 intentos para acertar ese número aleatorio.Si acierta el
número se le informará de ello, si falla se le informará si el número a acertar
es mayor o menor del dicho.*/

#define MIN_NUM 1
#define MAX_NUM 20
#define INTENTOS 5

int main() {

    srand(time(NULL));

    int numeroSecreto = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    int intentoUsuario;

    std::cout << "He generado un numero entre 1 y 20." << std::endl;
    std::cout << "Tienes " << INTENTOS << " intentos para acertarlo." << std::endl;

    for (int i = 1; i <= INTENTOS; i++) {

        std::cout << "Intento " << i << ": ";
        std::cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            std::cout << "Correcto, has acertado el numero" << std::endl;
            return 0;
        }

        if (intentoUsuario < numeroSecreto) {
            std::cout << "El numero secreto es Mas Grande." << std::endl;
        }
        else {
            std::cout << "El numero secret es Mas Pequeño." << std::endl;
        }
    }

    std::cout << "Has agotado todos los intentos. El numero correcto era: "
        << numeroSecreto << std::endl;

    return 0;
}
