#include <iostream>

#define COLUM 3
#define FILAS 3

char tablero[FILAS][COLUM] = {
    {'*','*','*'},
    {'*','*','*'},
    {'*','*','*'}
};

// funcion princial que uso para mostrar el tablero 
void mostrarTablero() {

    std::cout << "3 EN RAYA" << std::endl << std::endl;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUM; j++)
        {
            std::cout << " " << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// funcion para hacer que las peizas se vean colocadas en el tablero despues de cada turno 
void mostrarCambios(bool jugador1) {

    system("cls");

    // establezco el orden de trunos de cada jugador
    if (!jugador1)
        std::cout << "\nTURNO JUGADOR X\n" << std::endl;
    else
        std::cout << "\nTURNO JUGADOR O\n" <<std::endl;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUM; j++)
        {
            std::cout << " " << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// funcion para comprobar la victoria de el jugador
bool comprobarVictoria() {

    // compruebo filas
    for (int i = 0; i < FILAS; i++) {
        if (tablero[i][0] != '*' && tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]) {
            return true;
        }
    }
    // compruebo las columnas 
    for (int j = 0; j < COLUM; j++) {
        if (tablero[0][j] != '*' && tablero[0][j] == tablero[1][j] && tablero[1][j] == tablero[2][j]) {
            return true;
        }
    }
    // Compruebo la diagonal principal
    if (tablero[0][0] != '*' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
        return true;
    }

    // Compruebo la diagonal secundaria
    if (tablero[0][2] != '*' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
        return true;
    }

    return false;
}
 // funcion par comprobar el empate
bool comprobarEmpate() {
    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUM; j++) {
            if (tablero[i][j] == '*')
                return false;
        }
    }
    return true;
}
// funcion para limpiar el tablero 
void reiniciarTablero() {

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUM; j++) {
            tablero[i][j] = '*';
        }
    }  
}
// funcion para usar la funcionailiadad de los turnos entre lso dos jugadores
void juegoTurnos(bool juegoActivo = true, bool jugador1 = false, int ficha = 0) {

    while (juegoActivo)
    {
        system("cls");
        mostrarCambios(jugador1);

        std::cout << "Introduzca una posicion (1-9): " << std::endl;
        std::cin >> ficha;

        ficha -= 1;

        int fila = ficha / 3;
        int col = ficha % 3;

        if (ficha < 0 || ficha > 8) {
            std::cout << "Posición inválida." << std::endl;
            continue;
        }


        if (tablero[fila][col] != '*')
        {
            std::cout << "Esta casilla está ocupada." << std::endl;
            continue;
        }

        if (!jugador1)
        {
            tablero[fila][col] = 'X';
            jugador1 = true;
        }
        else {
            tablero[fila][col] = 'O';
            jugador1 = false;
        }

        // aqui se me han terminado las 2 horas, me falta solo hacer la 
        // comprobacion dela victoria final y el empate

        // condicion para comprobar las victorias 
        if (comprobarVictoria()) {
            system("cls");
            mostrarCambios(jugador1);

            //Condicion para establecer las victorias 
            if (!jugador1)
                std::cout << "\nGANA EL JUGADOR X\n";
            else
                std::cout << "\nGANA EL JUGADOR O\n";

            juegoActivo = false; 
            continue; 
        }
        // condicion par establecer el empate de la partiad
        if (comprobarEmpate()) {
            system("cls");
            mostrarCambios(jugador1);
            std::cout << "\n Partida en Empate\n";
            juegoActivo = false; 
            continue; 
        }
    }
}

int main() {

    reiniciarTablero();
    mostrarTablero();
    juegoTurnos();

}
