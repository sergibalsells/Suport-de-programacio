#include <iostream>
#include <string>

//17.Crear un programa que reciba una frase.El programa debe mostrar en cada
//línea de texto una palabra de las que forman la frase.

//funcion para mostrar la palabra
void mostrarPalabras(std::string frase) {

    std::string palabra; 

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] != ' ') palabra += frase[i];
        else {
            std::cout << palabra << std::endl;
            palabra = "";
        }
    }
    if (palabra != "") std::cout << palabra << std::endl;
}

int main() {
    std::string frase;

    std::cout << "Introduzca una frase: " << std::endl;
    std::getline(std::cin, frase);
    mostrarPalabras(frase);
    return 0;
}
