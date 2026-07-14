#include <iostream>
#include <string>

/*25.Crea un programa que preguntara el tipo sanguíneo al usuario y a que grupo
sanguíneo quiere donar.El programa debe indicar si es posible donar al
grupo que desea.*/

#define O_POS "0+"
#define O_NEG "0-"
#define A_POS "A+"
#define A_NEG "A-"
#define B_POS "B+"
#define B_NEG "B-"
#define AB_POS "AB+"
#define AB_NEG "AB-" 


int main() {

	std::string tipoOrigen; 
	std::string tipoDestino; 

	std::cout << "Indiqe su grupo sanguineo" << std::endl;
	std::cin >> tipoOrigen; 

	std::cout << "Indiqe a que grupo sanguineo quieres donar " << std::endl;
	std::cin >> tipoDestino;

    bool puedeDonar = false;

    //Hacemos las Compatibilidades
    if (tipoDestino == O_NEG) {
        puedeDonar = true; // O- dona a todos 
    }
    else if (tipoOrigen == O_POS) {
        if (tipoDestino == O_POS || tipoDestino == A_POS || tipoDestino == B_POS || tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }   
    else if (tipoOrigen == A_NEG) {
        if (tipoDestino == A_NEG || tipoDestino == A_POS || tipoDestino == AB_NEG || tipoDestino == AB_POS) {
            puedeDonar = true;  
        }
    }
    else if (tipoOrigen == A_POS) {
        if (tipoDestino == A_POS || tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }
    else if (tipoOrigen == B_NEG) {
        if (tipoDestino == B_NEG  || tipoDestino == B_POS || tipoDestino == AB_NEG || tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }
    else if (tipoOrigen == B_POS) {
        if (tipoDestino == B_POS || tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }
    else if (tipoOrigen == AB_NEG) {
        if (tipoDestino == AB_NEG || tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }
    else if (tipoOrigen == AB_POS) {
        if (tipoDestino == AB_POS) {
            puedeDonar = true;
        }
    }
    else {
        std::cout << "ERROR: Tipo sanguíneo no valido" << std::endl;
        return 0;
    }

    //Mostramos el Resultado
    if (puedeDonar) {
        std::cout << "Si puedes donar a " << tipoDestino << std::endl;
    }
    else {
        std::cout << "No puedes donar a " << tipoDestino << std::endl;
    }

    return 0;
}
	

