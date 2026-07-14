#include <iostream>

/*28.Escribe un programa que pida una distancia en metros y de el resultado en
kilómetros, hectómetros, decámetros y metros.Debe de escribir
correctamente añadiendo, e y cuando corresponda y sin añadir unidades
con valor 0. Por ejemplo al introducir 7037 metros el resultado esperado
sería 7km, 3dam y 7m.*/ 


#define METROS_POR_KM 1000
#define METROS_POR_HM 100
#define METROS_POR_DAM 10

int main() {

    int metros;
    std::cout << "Introduce una distancia en metros: ";
    std::cin >> metros;

    int km = metros / METROS_POR_KM;
    metros = metros % METROS_POR_KM;

    int hm = metros / METROS_POR_HM;
    metros = metros % METROS_POR_HM;

    int dam = metros / METROS_POR_DAM;
    metros = metros % METROS_POR_DAM;

    int m = metros;

    bool primero = true;

    std::cout << "Resultado: ";

    if (km > 0) {
        std::cout << km << "km";
        primero = false;
    }

    if (hm > 0) {
        if (!primero) std::cout << ", ";
        std::cout << hm << "hm";
        primero = false;
    }

    if (dam > 0) {
        if (!primero) std::cout << ", ";
        std::cout << dam << "dam";
        primero = false;
    }

    if (m > 0) {
        if (!primero) std::cout << ", ";
        std::cout << m << "m";
    }

    std::cout << std::endl;

    return 0;
}
