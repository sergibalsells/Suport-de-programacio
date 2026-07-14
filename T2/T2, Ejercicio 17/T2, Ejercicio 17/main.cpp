#include <iostream>

//17.Crea un programa que determine si una letra introducida es vocal o
//consonante.

#define VOCAL_A 'a'
#define VOCAL_E 'e'
#define VOCAL_I 'i'
#define VOCAL_O 'o'
#define VOCAL_U 'u'

int main() {

    char letra;

    std::cout << "Introduce una letra: ";
    std::cin >> letra;

    // Convertim a minúscula si l'usuari posa majúscula

    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
    }

    bool esVocal = (letra == VOCAL_A || letra == VOCAL_E || letra == VOCAL_I || letra == VOCAL_O || letra == VOCAL_U);

    if (esVocal) {
        std::cout << "Es una vocal" << std::endl;
    }
    else {
        std::cout << "Es una consonante" << std::endl;
    }

    return 0;
}