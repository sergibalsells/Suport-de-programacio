#include <iostream>
#include <string>
/*9. Crea un programa que tenga hardcodeado un usuario y una contraseña.El
usuario deberá de introducir ambos valores correctamente.El programa no
finaliza hasta que los introduzca correctamente indicando al usuario si lo que
ha introducido incorrecto es el usuario, la contraseña o ambas cosas.*/


#define USER_OK "admin" // establecemos como usuario admin
#define PASS_OK "1234" // establecemos como contraseña 1234

int main() {

    std::string userInput;
    std::string passInput;

    bool accesoCorrecto = false;
  

    while (!accesoCorrecto) {

        std::cout << "Introduce el usuario: ";
        std::cin >> userInput;

        std::cout << "Introduce la contrasenia: ";
        std::cin >> passInput;

        bool usuarioCorrecto = (userInput == USER_OK);
        bool contrasenaCorrecta = (passInput == PASS_OK);

        if (usuarioCorrecto && contrasenaCorrecta) {
            accesoCorrecto = true;
            std::cout << "Acceso valido" << std::endl;
        }
        else {
            if (!usuarioCorrecto && !contrasenaCorrecta) {
                std::cout << "Usuario y contraseña incorrectos." << std::endl;
            }
            else if (!usuarioCorrecto) {
                std::cout << "Usuario incorrecto." << std::endl;
            }
            else {
                std::cout << "Contraseña incorrecta." << std::endl;
            }
        }
    }

    return 0;
}