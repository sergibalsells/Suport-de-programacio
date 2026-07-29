#include <iostream>
#include <cstdlib>
#include <ctime>

/*23.Crea un programa que simule el juego de piedra, papel o tijera.El jugador
introducirá una de las 3 opciones y al darle enter el programa generará su
opción y a continuación mostrará el resultado al jugador.Gana el mejor de 5.*/

int main() {

    const int PIEDRA = 1;
    const int PAPEL = 2;
    const int TIJERA = 3;
    const int VICTORIAS_NECESARIAS = 3;

    std::srand(std::time(NULL));

    int opcionJugador = 0;
    int opcionCPU = 0;

    int victoriasJugador = 0;
    int victoriasMaq= 0;

    while (victoriasJugador < VICTORIAS_NECESARIAS &&
        victoriasMaq < VICTORIAS_NECESARIAS) {

        std::cout << "\nElige una opcion:\n";
        std::cout << "1. Piedra\n";
        std::cout << "2. Papel\n";
        std::cout << "3. Tijera\n";


        std::cout << "Tu opcion: ";
        std::cin >> opcionJugador;


        // Validación básica
        if (opcionJugador < PIEDRA || opcionJugador > TIJERA) {
            std::cout << "Opcion no valida.\n";
            continue;
        }

        opcionCPU = PIEDRA + std::rand() % 3;

        std::cout << "La màquina eligio: ";
        if (opcionCPU == PIEDRA) std::cout << "Piedra\n";
        if (opcionCPU == PAPEL) std::cout << "Papel\n";
        if (opcionCPU == TIJERA) std::cout << "Tijera\n";


        // Determinamos ganador

        if (opcionJugador == opcionCPU) {
            std::cout << "Empate.\n";
        }
        else if ((opcionJugador == PIEDRA && opcionCPU == TIJERA) ||
            (opcionJugador == PAPEL && opcionCPU == PIEDRA) ||
            (opcionJugador == TIJERA && opcionCPU == PAPEL)) {
            std::cout << "Ganaste esta ronda.\n";
            victoriasJugador++;
        }
        else {
            std::cout << "La maquina gana esta ronda.\n";
            victoriasMaq++;
        }

        std::cout << "Marcador del Jugador: " << victoriasJugador << std::endl; 
        std::cout << "Marcador de la Maquina: " << victoriasMaq << std::endl; 
    }

    if (victoriasJugador == 3)
    {
        std::cout << "Ganste la partida, enhorabuena!" << std::endl; 
    }
    else  if (victoriasMaq == 3){

        std::cout << "La maquina ha gando la partida, lastima!" << std::endl;
    }
    else {

        std::cout << "Empate!! " << std::endl;
    }

    return 0;
}

