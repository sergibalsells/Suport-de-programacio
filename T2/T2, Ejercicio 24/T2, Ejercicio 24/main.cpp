#include <iostream>

/*24.Tenemos 3 grupos de personas.Grupo A formado por hombres menores de
35 años.El grupo B formado por mujeres menores de 40 años y el grupo C
formado por el resto de personas.Crea un programa que pida el sexo y la
edad al usuario y le informe de que grupo le corresponde.*/


#define GRUPO_A "Grupo A"
#define GRUPO_B "Grupo B"
#define GRUPO_C "Grupo C"  

int main() {

    std::string sexo;
    int edad;

    std::cout << "Introduce tu sexo (hombre/mujer): ";
    std::cin >> sexo;

    std::cout << "Introduce tu edad: ";
    std::cin >> edad;  

    if (sexo == "hombre" && edad < 35) {
        std::cout << "Perteneces al " << GRUPO_A << std::endl;
    }
    else if (sexo == "mujer" && edad < 40) {
        std::cout << "Perteneces al " << GRUPO_B << std::endl;
    }
    else {
        std::cout << "Perteneces al " << GRUPO_C << std::endl;
    }

    return 0;


}