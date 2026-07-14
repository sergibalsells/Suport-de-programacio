#include <iostream>

#define PAR 2

//5. Crea un programa que pida al usuario dos números pares y si ambos lo son
//sume, de lo contrario reste.


int main() {

    int num1, num2;

    std::cout << "Introdueix el primer numero: ";
    std::cin >> num1;

    std::cout << "Introdueix el segon numero: ";
    std::cin >> num2;

    bool num1EsParell = (num1 % PAR == 0);
    bool num2EsParell = (num2 % PAR == 0);

    if (num1EsParell && num2EsParell) {
       std::cout << "Com els dos nuemros son parells, la suma es: " << (num1 + num2) << std::endl;
     }
    else {
      std::cout << "Com son inparells, la resta es: " << (num1 - num2) << std::endl;
     }

    return 0; 
}