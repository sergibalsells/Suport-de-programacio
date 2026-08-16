#include <iostream>
#include <string>

/*19.Crea un programa que pida una frase al usuario.Seguidamente el programa
realizará una función de reemplazar pidiendo al usuario un fragmento a
buscar dentro de la frase inicial y un nuevo texto por el que va a ser
reemplazado.No necesariamente deben de coincidir la longitud de los
textos.*/

//Funcion para pedir la frase
std::string pedirFrase(std::string frase) {
    std::cout << "Introduzca una frase" << std::endl;
    std::getline(std::cin, frase);
    return frase;
}
//Fucnion para remplazar el texto qeu queramos de la frase
std::string reemplazarTexto(std::string frase) {
    std::string buscar, nuevo;

    std::cout << "Fragmento a buscar" << std::endl;
    std::getline(std::cin, buscar);

    std::cout << "Nuevo texto" << std::endl;
    std::getline(std::cin, nuevo);

    int pos = frase.find(buscar);
    if (pos != -1) frase.replace(pos, buscar.size(), nuevo);

    return frase;
}

int main() {
    std::string frase;

    frase = pedirFrase(frase);
    frase = reemplazarTexto(frase);

    std::cout << frase;

    return 0;
}
