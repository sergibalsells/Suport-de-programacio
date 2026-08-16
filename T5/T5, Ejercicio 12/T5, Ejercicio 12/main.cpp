#include <iostream>
#include <string>

//12.Crea un programa que identifique el carácter más repetido en una frase.

std::string pedirFrase() {
    std::string frase;

    std::cout << "Introduzca una frase: ";
    std::getline(std::cin, frase);

    return frase;
}

char caracterMasRepetido(const std::string& frase) {
    int contador[256] = { 0 };   //Lo hago con la tabla ASCII

    //Cuento cada carácter
    for (int i = 0; i < frase.length(); i++) {
        unsigned char c = frase[i];
        contador[c]++;
    }

    //Busco el más repetido
    int maxRepeticiones = 0;
    char masRepetido = ' ';

    for (int i = 0; i < 256; i++) {
        if (contador[i] > maxRepeticiones) {
            maxRepeticiones = contador[i];
            masRepetido = static_cast<char>(i);
        }
    }

    return masRepetido;
}

int main() {
    std::string frase = pedirFrase();
    char repetido = caracterMasRepetido(frase);

    std::cout << "El carácter más repetido es: " << repetido << std::endl;
}
