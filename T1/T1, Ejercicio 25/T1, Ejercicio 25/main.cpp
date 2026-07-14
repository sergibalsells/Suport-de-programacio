#include <iostream>


/*25.Crea un programa que al introducir una cantidad económica en euros nos
muestre la combinación de billetes y monedas más eficiente para obtener
esa cantidad.Por ejemplo, si introduzco 1, 124€ me debe de mostrar como
resultado 2 billetes de 500€, 1 de 100€, 1 de 20€, y dos monedas de 4€.*/

int main() {

    float euros;

    std::cout << "Introduce una cantidad en euros:" << std::endl; 
    std::cin >> euros;

    int centimos = euros * 100;

    //b= billetes y c= centimos 

    int b500 = centimos / 50000;
    centimos -= b500 * 50000;

    int b200 = centimos / 20000;
    centimos -= b200 * 20000;

    int b100 = centimos / 10000;
    centimos -= b100 * 10000;

    int b50 = centimos / 5000;
    centimos -= b50 * 5000;

    int b20 = centimos / 2000;
    centimos -= b20 * 2000;

    int b10 = centimos / 1000;
    centimos -= b10 * 1000;

    int b5 = centimos / 500;
    centimos -= b5 * 500;

    int m2 = centimos / 200;
    centimos -= m2 * 200;

    int m1 = centimos / 100;
    centimos -= m1 * 100;

    int c50 = centimos / 50;
    centimos -= c50 * 50;

    int c20 = centimos / 20;
    centimos -= c20 * 20;

    int c10 = centimos / 10;
    centimos -= c10 * 10;

    int c5 = centimos / 5;
    centimos -= c5 * 5;

    int c2 = centimos / 2;
    centimos -= c2 * 2;

    int c1 = centimos;

    std::cout << "\n La combinacion mas eficiente para tu caso es:\n";

    if (b500 > 0) std::cout << b500 << " billetes de 500 euros\n";
    if (b200 > 0) std::cout << b200 << " billetes de 200 euros\n";
    if (b100 > 0) std::cout << b100 << " billetes de 100 euros\n";
    if (b50 > 0) std::cout << b50 << " billetes de 50 euros\n";
    if (b20 > 0) std::cout << b20 << " billetes de 20 euros\n";
    if (b10 > 0) std::cout << b10 << " billetes de 10 euros\n";
    if (b5 > 0) std::cout << b5 << " billetes de 5 euros\n";

    if (m2 > 0) std::cout << m2 << " monedas de 2 euros\n";
    if (m1 > 0) std::cout << m1 << " monedas de 1euro\n";

    if (c50 > 0) std::cout << c50 << " monedas de 50 centimos\n";
    if (c20 > 0) std::cout << c20 << " monedas de 20 centimos\n";
    if (c10 > 0) std::cout << c10 << " monedas de 10 centimos\n";
    if (c5 > 0) std::cout << c5 << " monedas de 5 centimos\n";
    if (c2 > 0) std::cout << c2 << " monedas de 2 centimos\n";
    if (c1 > 0) std::cout << c1 << " monedas de 1 centimo\n";

    return 0; 
}
