#include <iostream>
#include <string>


/*19.Crea un programa que tenga almacenado un usuario y una contraseña.Al
iniciarse preguntará ambos datos al usuario y mostrará por pantalla si el
acceso es correcto o si ha cometido un error en el usuario, la contraseña o
ambas cosas.*/

#define USUARIO_CORRECTO "admin"
#define PASSWORD_CORRECTA "1234"

int main() {

    std::string usuario;
    std::string contraseña;

    std::cout << "Introduce el usuario: ";
    std::cin >> usuario;

    std::cout << "Introduce la contraseña: ";
    std::cin >> contraseña;

    bool usuarioBien = (usuario == USUARIO_CORRECTO);
    bool contraseñaBien = (contraseña == PASSWORD_CORRECTA);

    if (usuarioBien && contraseñaBien) {
        std::cout << "Acceso correcto, bienvenido." << std::endl;
    }
    else if (!usuarioBien && !contraseñaBien) {
        std::cout << "ERROR: Usuario y contraseña incorrectos." << std::endl;
    }
    else if (!usuarioBien) {
        std::cout << "ERROR: Usuario incorrecto." << std::endl;
    }
    else {
        std::cout << "ERROR: Contraseña incorrecta." << std::endl;
    }

    return 0;
}
