#include <iostream>

//13.Crear un programa que busque un elemento en un array de enteros y
//devuelva su posición.

#define NUM 5
// Función que muestra los números
void arrayNumeros(int array[]) {

    std::cout << "Numeros disponibles: ";
    for (int i = 0; i < NUM; i++) {
        std::cout << array[i] << " "; 
    }
    std::cout << std::endl;
}

// Función que busca la posicion del número 
void mostrarPosicion(int array[]) {

    int numero;
    std::cout << "Introduce un numero a buscar: ";
    std::cin >> numero;

    bool encontrado = false;

    for (int i = 0; i < 5; i++) {
        if (array[i] == numero) {
            std::cout << "El numero " << numero << " se encuentra en la posicion: " << i << std::endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        std::cout << "El numero no se encuentra en el array." << std::endl;
    }
}

int main() {

    int array[NUM]{ 12, 2, 3, 4, 5 };

    arrayNumeros(array);
    mostrarPosicion(array);

    return 0;
}