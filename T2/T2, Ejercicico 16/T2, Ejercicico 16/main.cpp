#include <iostream>

#define ANY_MINIM 0   

/*16.Crea un programa que pida un año de origen y un año de destino y calcule
los años que han pasado, los años que faltan para llegar o si se tratan del
mismo año.*/

int main() {

    int userInput1, userInput2;

    std::cout << "Introduce un año de origen: ";
    std::cin >> userInput1;

    std::cout << "Introduce un año de destino: ";
    std::cin >> userInput2;

    if (userInput1 < userInput2) {
        std::cout << "Faltan " << (userInput2 - userInput1) << " años para llegar." << std::endl;
    }
    else if (userInput1 > userInput2) {
        std::cout << "Han pasado " << (userInput1 - userInput2) << " años." << std::endl;
    }
    else {
        std::cout << "El año " << userInput1 << " y el año " << userInput2
            << " son el mismo año." << std::endl;
    }

    return 0;
}
