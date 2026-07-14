#include <iostream>
#include <string>

/*20.Crea un programa que nos sirva para saber los ingredientes que pide un
cliente para su bocadillo.El programa preguntará por 6 ingredientes distintos
y luego debe de repetir sólo aquellos ingredientes que haya pedido el
cliente.*/

#define ING1 "jamon"
#define ING2 "queso"
#define ING3 "lechuga"
#define ING4 "tomate"
#define ING5 "atun"
#define ING6 "pollo"

int main() {

    std::string pedido1, pedido2, pedido3, pedido4, pedido5, pedido6;

    std::cout << "Elige 6 ingredientes para tu bocadillo." << std::endl;
    std::cout << "Ingredientes disponibles: jamon, queso, lechuga, tomate, atun, pollo." << std::endl;

    std::cout << "Ingrediente 1: ";
    std::cin >> pedido1;

    std::cout << "Ingrediente 2: ";
    std::cin >> pedido2;

    std::cout << "Ingrediente 3: ";
    std::cin >> pedido3;

    std::cout << "Ingrediente 4: ";
    std::cin >> pedido4;

    std::cout << "Ingrediente 5: "; 
    std::cin >> pedido5;

    std::cout << "Ingrediente 6: ";
    std::cin >> pedido6;

    std::cout << "\nHas pedido los siguientes ingredientes:" << std::endl;

    if (pedido1 == ING1 || pedido2 == ING1 || pedido3 == ING1 || pedido4 == ING1 || pedido5 == ING1 || pedido6 == ING1) {
        
        std::cout << "- Jamon" << std::endl;
    }

    if (pedido1 == ING2 || pedido2 == ING2 || pedido3 == ING2 || pedido4 == ING2 || pedido5 == ING2 || pedido6 == ING2) {
       
        std::cout << "- Queso" << std::endl;
    }

    if (pedido1 == ING3 || pedido2 == ING3 || pedido3 == ING3 || pedido4 == ING3 || pedido5 == ING3 || pedido6 == ING3) {
        
        std::cout << "- Lechuga" << std::endl;
    }

    if (pedido1 == ING4 || pedido2 == ING4 || pedido3 == ING4 || pedido4 == ING4 || pedido5 == ING4 || pedido6 == ING4) {
        
        std::cout << "- Tomate" << std::endl;
    }

    if (pedido1 == ING5 || pedido2 == ING5 || pedido3 == ING5 || pedido4 == ING5 || pedido5 == ING5 || pedido6 == ING5) {
        std::cout << "- Atun" << std::endl;
    }

    if (pedido1 == ING6 || pedido2 == ING6 || pedido3 == ING6 || pedido4 == ING6 || pedido5 == ING6 || pedido6 == ING6) {
        
        std::cout << "- Pollo" << std::endl;
    }

    return 0;
}