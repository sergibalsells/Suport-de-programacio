#include <iostream>
#include <string>

int main() {
    // Establecemos la palabra para adivinar
    std::string palabra = "ahorcado";
    std::string progreso(palabra.size(), '_');
    int intentos = 6;
    char letra;

    std::cout << "=== JUEGO DEL AHORCADO ===" << std::endl; 

    while (intentos > 0 && progreso != palabra) {
        std::cout << "\nPalabra: " << progreso << std::endl;
        std::cout << "Intentos restantes: " << intentos << std::endl;

        std::cout << "Introduce una letra: ";
        std::cin >> letra;

        bool acierto = false; 

        for (int i = 0; i < palabra.size(); i++) {
            if (palabra[i] == letra) {
                progreso[i] = letra;
                acierto = true;
            }
        }
        //Comprobamos si la letra es correcta o no 
        if (acierto) {
            std::cout << "Bien hecho" << std::endl;
        }
        else {
            intentos--;
            std::cout << "Fallaste" << std::endl;
        }
    }
    // Comprobamos si se ha hacertado la palabra y es victoria, o no se ha adivinado. 
    if (progreso == palabra)
    {
        std::cout << "Enorabuena la palabra era " << palabra << std::endl; 
    }
    else {
        std::cout << "Vaya la palabra era " << palabra << std::endl; 
    }


    return 0; 

}
