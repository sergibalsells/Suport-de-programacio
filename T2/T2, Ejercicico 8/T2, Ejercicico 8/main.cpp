#include <iostream>

/*8. Crea un programa que al iniciar pedirá el número de DNI y la letra por
separado.El programa debe de confirmar si la letra insertada corresponde
con el número de DNI.*/

#define  LETRAS_DNI 23
int main() {

    int numeroDNI;
    char letraUsuario;

    std::cout << "Introdueix el numero del DNI (sense lletra): ";
    std::cin >> numeroDNI;

    std::cout << "Introdueix la lletra del DNI: ";
    std::cin >> letraUsuario;

    // Combertimos la letra a mayuscula para evitar errores
    if (letraUsuario >= 'a' && letraUsuario <= 'z') {
        letraUsuario -= 32;
    }

    // Taula oficial de letras del DNI
    const char letras[LETRAS_DNI] = {
        'T','R','W','A','G','M','Y','F','P','D','X','B',
        'N','J','Z','S','Q','V','H','L','C','K','E'
    };

    int index = numeroDNI % LETRAS_DNI;
    char lletraCorrecta = letras[index];

    //Comprobamos las letras del usuario con la letra correcta
    if (lletraCorrecta == letraUsuario) {
        std::cout << "La letra es correcta." << std::endl;
    }
    else {
        std::cout << "La letra no es correcta. La letra correcta es: " << lletraCorrecta << std::endl;
    }

    return 0;


}