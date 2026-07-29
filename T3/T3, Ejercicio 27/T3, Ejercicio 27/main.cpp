#include <iostream>


//27.Replicando el ejercicio anterior en este caso crea un programa que genere
//el árbol de forma invertida.

int main() {

    int numeroUser;

    std::cout << "Introduce un numero para crear el arbol: ";
    std::cin >> numeroUser;

    int estrellas = (numeroUser * 2) -1;  // empezamos con 1 estrella

    for (int i = 0; i < numeroUser; i++) {

        //Ponemos los espacios a la izquierda
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }

        //Creamos las estrellas centradas 
        for (int j = 0; j < estrellas; j++) {
            std::cout << "*";
        }

        estrellas -= 2; // le ponemos dos estrellas 
        std::cout << "\n";
    }

    return 0;
}