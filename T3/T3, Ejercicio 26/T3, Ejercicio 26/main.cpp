#include <iostream>


/* 26.Usando de ejemplo el caso anterior esta vez el programa generará
visualmente un árbol de estrellas con tantas filas como haya indicado el
usuario donde en cada fila habrá un * más que en el anterior.*/

int main() {

	int numeroUser;

	std::cout << "Introduce un numero para crear el arbol: ";
	std::cin >> numeroUser;

    int estrellas = 1;  // empezamos con 1 estrella

    for (int i = 0; i < numeroUser; i++) {

        //Ponemos los espacios a la izquierda
        for (int j = 0; j < numeroUser - i - 1; j++) {
            std::cout << " ";
        }

        //Creamos las estrellas centradas 
        for (int j = 0; j < estrellas; j++) {
            std::cout << "*";
        }

        estrellas += 2; // le ponemos dos estrellas 
        std::cout << std::endl;
    }

    return 0;
}