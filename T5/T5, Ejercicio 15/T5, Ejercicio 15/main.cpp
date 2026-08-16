#include <iostream>
#include <string>

/*15.Crea un programa que reciba dos palabras sin importar la cantidad de letras
y las combine.Deberá alternar una letra de cada palabra y cuando una de
las dos palabras se quede sin letras deberá escribir todas las letras
restantes seguidas.*/

//Funcion de String para pedir las palabras
std::string pedirFrase(std::string& palabra1, std::string& palabra2) {

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> palabra1;

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> palabra2;

    return "";
}
// funcion para intercalar las palabras
std::string intercalarPalabras(std::string palabra1, std::string palabra2) {

    std::string resultado;

    int max = palabra1.length();
    if (palabra2.length() > max)
        max = palabra2.length();

    for (int i = 0; i < max; i++)
    {
        if (i < palabra1.length())
            resultado += palabra1[i]; 

         
        if (i < palabra2.length())
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