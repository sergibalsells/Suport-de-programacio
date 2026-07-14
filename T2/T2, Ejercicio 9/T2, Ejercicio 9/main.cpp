#include <iostream>
#include <string>

/*9. Crea un programa que contendrá los ingredientes para hacer una tortilla de
patatas(incluyendo la cebolla).Seguidamente el usuario debe de
mencionar tantos ingredientes como ingredientes contenga la tortilla.Si se
equivoca o repite uno ya mencionado se le informará del error
correspondiente.*/

#define INGREDIENTS_TORTILLA 4

#define INGREDIENTS_OBLIGATORIS 3

int main() {

    // Ingredients obligatoris
    std::string ing1 = "patata";
    std::string ing2 = "huevo";
    std::string ing3 = "sal";

    std::string userIng1, userIng2, userIng3;
    std::string respostaCeba;

    // Ingredient 1
    std::cout << "Introduce el ingredient 1: ";
    std::cin >> userIng1;

    if (userIng1 != ing1 && userIng1 != ing2 && userIng1 != ing3) {
        std::cout << "ERROR: Ingrediente incorrecto." << std::endl;
        return 0;
    }

    // Ingredient 2
    std::cout << "Introduce el ingrediente 2: ";
    std::cin >> userIng2;

    if (userIng2 == userIng1) {
        std::cout << "ERROR: Ingrediente repetido." << std::endl;
        return 0;
    }
    if (userIng2 != ing1 && userIng2 != ing2 && userIng2 != ing3) {
        std::cout << "ERROR: Ingrediente incorrecto." << std::endl;
        return 0;
    }

    // Ingredient 3
    std::cout << "Introduce el ingrediente 3: ";
    std::cin >> userIng3;

    if (userIng3 == userIng1 || userIng3 == userIng2) {
        std::cout << "ERROR: Ingrediente repetido." << std::endl;
        return 0;
    }
    if (userIng3 != ing1 && userIng3 != ing2 && userIng3 != ing3) {
        std::cout << "ERROR: Ingrediente incorrecto." << std::endl;
        return 0;
    }

    // Pregunta sobre la ceba
    std::cout << "Quieres añadir cebolla? (si/no): ";
    std::cin >> respostaCeba;

    if (respostaCeba == "si" || respostaCeba == "SI" || respostaCeba == "Si") {
        std::cout << "Has aniadido cebolla a la tortilla." << std::endl;
    }
    else if (respostaCeba == "no" || respostaCeba == "NO" || respostaCeba == "No") {
        std::cout << "Has decidido no aniadir cebolla." << std::endl;
    }
    else {
        std::cout << "ERROR: Respuesta invalida. Escribe 'si' o 'no'." << std::endl;
        return 0;
    }

    std::cout << "Todos los ingredientes se han añadido correctamente. " << std::endl;

    return 0;
}