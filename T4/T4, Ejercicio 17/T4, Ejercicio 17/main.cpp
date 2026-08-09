#include <iostream>

//17.Crear un programa que calcule la media(promedio) de un array de números
//enteros.

#define NUM 5

void mostrarArray(int array[]) {

    std::cout << "Numeros del array: ";
    for (int i = 0; i < NUM; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void calcularMedia(int array[]) {

    int suma = 0;

    for (int i = 0; i < NUM; i++) {
        suma += array[i];
    }
    int media = suma / 5;  

    std::cout << "La media del array es: " << media << std::endl;
}

int main() {

    int array[NUM]{ 2, 3, 4, 12, 15 };

    mostrarArray(array);
    calcularMedia(array);

    return 0;
}