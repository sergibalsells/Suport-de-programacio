#include <iostream>
#include <string>

/*22.En una pizzería ofrecen pizzas vegetarianas y pizzas que no.Define un total
de 8 pizzas distintas entre las que se encuentren ambos tipos.Cuando inicie
el programa preguntará al usuario que tipo de pizza quiere y deberá de
mostrar sólo las vegetarianas si se pide o en caso contrario debe de
mostrarlas todas.El usuario deberá de elegir una de ellas y seguidamente el
programa confirmará el pedido.Si elige una que no se encuentre en el menú
informaremos de ello y finalizamos el programa.*/

// Pizzas vegetarianas
#define PIZZA1 "margarita"
#define PIZZA2 "4quesos"
#define PIZZA3 "vegetal"
#define PIZZA4 "champinones"

// Pizzas no vegetarianas
#define PIZZA5 "barbacoa"
#define PIZZA6 "pepperoni"
#define PIZZA7 "carbonara"
#define PIZZA8 "jamon"

// Opciones
#define OPCION_VEGETARIANA 1
#define OPCION_NO_VEGETARIANA 2

int main() {

    int tipo;
    std::string eleccion;

    std::cout << "Bienvenido a la pizzería." << std::endl;
    std::cout << "¿Qué tipo de pizza deseas?" << std::endl;
    std::cout << "1 - Vegetariana" << std::endl;
    std::cout << "2 - No vegetariana" << std::endl;

    std::cout << "Elige una opción: ";
    std::cin >> tipo;

    if (tipo == OPCION_VEGETARIANA) {

        std::cout << "\nPizzas vegetarianas disponibles:" << std::endl;
        std::cout << "- " << PIZZA1 << std::endl;
        std::cout << "- " << PIZZA2 << std::endl;
        std::cout << "- " << PIZZA3 << std::endl;
        std::cout << "- " << PIZZA4 << std::endl;

        std::cout << "\nElige una pizza: ";
        std::cin >> eleccion;

        if (eleccion == PIZZA1 || eleccion == PIZZA2 || eleccion == PIZZA3 || eleccion == PIZZA4) {

            std::cout << "Has pedido una pizza " << eleccion << ". Pedido confirmado." << std::endl;

        }
        else {
            std::cout << "ERROR: Esa pizza no está en el menú." << std::endl;
        }

    }
    else if (tipo == OPCION_NO_VEGETARIANA) {

        std::cout << "\nPizzas disponibles:" << std::endl;
        std::cout << "- " << PIZZA1 << std::endl;
        std::cout << "- " << PIZZA2 << std::endl;
        std::cout << "- " << PIZZA3 << std::endl;
        std::cout << "- " << PIZZA4 << std::endl;
        std::cout << "- " << PIZZA5 << std::endl;
        std::cout << "- " << PIZZA6 << std::endl;
        std::cout << "- " << PIZZA7 << std::endl;
        std::cout << "- " << PIZZA8 << std::endl;

        std::cout << "\nElige una pizza: ";
        std::cin >> eleccion;

        if (eleccion == PIZZA1 || eleccion == PIZZA2 || eleccion == PIZZA3 || eleccion == PIZZA4 ||
            eleccion == PIZZA5 || eleccion == PIZZA6 || eleccion == PIZZA7 || eleccion == PIZZA8) {

            std::cout << "Has pedido una pizza " << eleccion << ". Pedido confirmado." << std::endl;

        }
        else {
            std::cout << "ERROR: Esa pizza no está en el menú." << std::endl;
        }

    }
    else {
        std::cout << "ERROR: Opción no válida." << std::endl;
    }

    return 0;
}