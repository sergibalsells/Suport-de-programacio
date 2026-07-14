#include <iostream>

//12.Crea un programa que pida dos números al usuario.Debe de determinar
//cuál de los dos es el mayor o si son iguales.  

int main() {

    float num1, num2;

    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    if (num1 == num2) {
        std::cout << "Los dos numeros son iguales." << std::endl;
    }
    else if (num1 > num2) {
        std::cout << "El primer numero (" << num1 << ") es mas grande." << std::endl;
    }
    else {
        std::cout << "El segundo numero (" << num2 << ") es mas grande." << std::endl;
    }

    return 0;
}
