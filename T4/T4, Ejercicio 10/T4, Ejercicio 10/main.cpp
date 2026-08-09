#include <iostream>

#define NUM 5 

//10.Crear un programa que pida 5 números al usuario.Luego ordenar estos
//valores de mayor a menor en el array y mostrar el resultado.


//Funcion que usamos para pedir 5 nuemros para guardarlos en la array
void pedirNumeros(int numeros[]) {
    for (int i = 0; i < NUM; i++) {
        std::cout << "Introduce un numero entero (positivo o negativo): ";
        std::cin >> numeros[i];
    }
}

//Funcion para Ordenar los numeros de mayor a menor
void guardarNumeros(int guardarnumeros[]) {

    for (int i = 0; i < NUM - 1; i++) {
        if (guardarnumeros[i] < guardarnumeros[i + 1]) {
            int temporal = guardarnumeros[i];
            guardarnumeros[i] = guardarnumeros[i + 1];
            guardarnumeros[i + 1] = temporal;
        }
    }
}

//Funcion para mostrar el array
void mostrarNumeros(int numeros[]) {
    for (int i = 0; i < NUM; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    int numeros[NUM];

    pedirNumeros(numeros);

    //bucle for para llamer las 5 veces para ordenar completamente
    for (int i = 0; i < NUM; i++) {
        guardarNumeros(numeros);
    }

    mostrarNumeros(numeros);

    return 0;
}