#include <iostream>
#include <string>

//14.Crear un programa que reciba dos palabras con la misma cantidad de letras
//y las combine.Por ejemplo : palabra1 = hola, palabra2 = sopa.Resultado
//= hsoolpaa.

//Funcion de string para pedir la frase al usuario
std::string pedirFrase(std::string& palabra1, std::string& palabra2) {

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> palabra1;

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> palabra2;

    return ""; 
}

//Funcion para intercalar las palabras. 
std::string intercalarPalabras(std::string palabra1, std::string palabra2) {

    std::string resultado;

    for (int i = 0; i < palabra1.length(); i++)
    {
        resultado += palabra1[i];
        resultado += palabra2[i];
    }

    std::cout << resultado << std::endl;

    return resultado;
}

void main() {

    std::string palabra1, palabra2;

    pedirFrase(palabra1, palabra2); 

    intercalarPalabras(palabra1, palabra2);
 
}