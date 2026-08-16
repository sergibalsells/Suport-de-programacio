#include <iostream>
#include <string>

std::string pedirFrase() {
    std::string frase;

    std::cout << "Introduzca una frase: ";
    std::getline(std::cin, frase);

    return frase;
}

std::string cambiarVocales(std::string frase) {
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' ||
            frase[i] == 'A' || frase[i] == 'E') {
            frase[i] = 'X';
        }
    }
    return frase;
}

int main() {
    std::string frase = pedirFrase();
    std::string modificada = cambiarVocales(frase);

    std::cout << "Frase modificada: " << modificada << std::endl;
}