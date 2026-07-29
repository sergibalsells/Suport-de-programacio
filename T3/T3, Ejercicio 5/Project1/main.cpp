#include <iostream>

//5. Crea un programa capaz de elevar un número a otro.El usuario añadirá la
//base y el exponente y seguidamente el programa mostrará el resultado.


int main() {

    int userBase, userExp;
    int resultado = 1;   //Inicializamos a 1 para evitar errores. 

    std::cout << "Introduzca la base: ";
    std::cin >> userBase;

    std::cout << "Introduzca el exponente: ";
    std::cin >> userExp;

    for (int i = 0; i < userExp; ++i) {
        resultado *= userBase;
    }

    std::cout << userBase << " elevado a " << userExp << " es: " << resultado << std::endl;

    return 0;
}

