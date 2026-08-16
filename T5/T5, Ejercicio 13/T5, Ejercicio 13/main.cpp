#include <iostream>
#include <string>
#include <sstream>
#include <map>

std::string frase1, frase2;

//13. Crea un programa que identifique la palabra más repetida en dos frases distintas.

void pedirFrases() {

    std::cout << "Introduzca la primera frase: " << std::endl;
    std::getline(std::cin, frase1);

    std::cout << "Introduzca la segunda frase: " << std::endl;
    std::getline(std::cin, frase2);
}

void buscarRepetidos() {

    std::map<std::string, int> contador;

    // Unir ambas frases
    std::string total = frase1 + " " + frase2;

    std::stringstream ss(total);
    std::string palabra;

    // Contar palabras
    while (ss >> palabra) {
        contador[palabra]++;
    }

    // Buscar la más repetida
    std::string masRepetida;
    int maxRepeticiones = 0;

    for (auto& p : contador) {
        if (p.second > maxRepeticiones) {
            masRepetida = p.first;
            maxRepeticiones = p.second;
        }
    }

    std::cout << "\nLa palabra más repetida es: " << masRepetida
        << " (" << maxRepeticiones << " veces)" << std::endl;
}

int main() {

    pedirFrases();
    buscarRepetidos();

    return 0;
}
