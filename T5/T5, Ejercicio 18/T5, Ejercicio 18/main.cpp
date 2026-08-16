#include <iostream>
#include <string>

//18.Crea un programa que sea capaz de verificar si una palabra introducida es
//un palíndromo.

//Verificar si es un palindromo o no 
bool esPalindromo(std::string p) {
    int i = 0;
    int j = p.size() - 1;
    while (i < j) {
        if (p[i] != p[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    std::string palabra;
    std::cout << "Introduzca una palabra: " << std::endl; 
    std::cin >> palabra;

    if (esPalindromo(palabra)) {


        std::cout << "Es palindromo";
    }
    else {
        std::cout << "No es palindromo";
    }
    return 0;
}
