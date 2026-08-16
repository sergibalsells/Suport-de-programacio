#include <iostream>
#include <string>

/*20.Crea un programa que pueda validar si una cadena de caracteres
introducida por el usuario tiene un formato de correo correcto :
nombre@dominio.dominio.*/

bool validarCorreo(std::string cadena) {
    int posArroba = cadena.find('@');

    if (posArroba == -1) {
        return false;
    }

    int posPunto = cadena.find('.', posArroba + 1);

    if (posPunto == -1) {
        return false;
    }

    if (posArroba == 0) {
        return false;
    
    if (posPunto == posArroba + 1) {
        return false;
    }
    if (posPunto == cadena.size() - 1) {

        return false;
    }

    return true;
}

int main() {
    std::string correo;
    std::cout << "Introduzca un correo" << std::endl;
    std::cin >> correo;

    if (validarCorreo(correo)) {
        std::cout << "Formato correcto";
    }
    else {
        std::cout << "Formato incorrecto";
    }

    return 0;   
}
