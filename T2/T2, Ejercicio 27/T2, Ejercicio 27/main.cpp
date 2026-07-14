#include <iostream>

/*27.Crea un programa que calcule la nota final a un alumno.El programa pedirá
la nota del examen(60 % nota final), nota de los ejercicios(30 % nota final) y
nota de actitud(10 % nota final).*/

#define PORC_EXAMEN 0.60f
#define PORC_EJERCICIOS 0.30f
#define PORC_ACTITUD 0.10f

int main() {

    float notaExamen, notaEjercicios, notaActitud;

    std::cout << "Introduce la nota del examen (60%): ";
    std::cin >> notaExamen;

    std::cout << "Introduce la nota de los ejercicios (30%): ";
    std::cin >> notaEjercicios;

    std::cout << "Introduce la nota de actitud (10%): "; 
    std::cin >> notaActitud;

    float notaFinal = (notaExamen * PORC_EXAMEN) +
        (notaEjercicios * PORC_EJERCICIOS) +
        (notaActitud * PORC_ACTITUD);

    std::cout << "La nota final del alumno es: " << notaFinal << std::endl;

    return 0;
}