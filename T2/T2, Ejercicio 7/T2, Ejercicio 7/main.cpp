#include <iostream>

#define MIN_MES 1
#define MAX_MES 12

//7. Crea un programa que pida al usuario un número del 1 al 12 e imprima la
//cantidad de días que tiene ese mes.

int main() {

    int mes;

    std::cout << "Introdueix un numero del 1 al 12: ";
    std::cin >> mes;

    if (mes < MIN_MES || mes > MAX_MES) {
        std::cout << "Mes invalid" << std::endl;
        return 0;
    }

    int dies = 0;

    switch (mes) {
    case 1: 
         // Gener
    case 3:  
        // Març
    case 5:  
        // Maig
    case 7:  
        // Juliol
    case 8:  
        // Agost
    case 10: 
        // Octubre
    case 12: 
        // Desembre
        dies = 31;
        break;

    case 4:  
        // Abril
    case 6:  
        // Juny
    case 9:  
        // Setembre
    case 11: 
        // Novembre
        dies = 30;
        break;

    case 2:  
        // Febrer
        dies = 28; // Sense anys de traspàs
        break;
    }

    std::cout << "El mes te " << dies << " dies." << std::endl;

    return 0;
}
