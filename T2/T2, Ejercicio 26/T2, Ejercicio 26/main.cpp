#include <iostream>

/*26.Tenemos un restaurante de buffet libre que ofrece entrada gratuita a los
niños menores de 4 años, entrada de 9€ a personas entre 4 y 17 años y
entrada 18.95€ a mayores de 18 años.Haz un programa que pida la edad
de 5 comensales y luego nos informe del total de beneficios obtenidos.*/

#define NUM_COMENSALES 5
#define PRECIO_NINIO 0
#define PRECIO_JOVEN 9
#define PRECIO_ADULTO 18.95

int main() {

    int edad;
    float total = 0;

    std::cout << "Calculando beneficios del restaurante..." << std::endl;

    for (int i = 1; i <= NUM_COMENSALES; i++) {

        std::cout << "Introduce la edad del comensal " << i << ": ";
        std::cin >> edad;

        if (edad < 4) {
            total += PRECIO_NINIO;
        }
        else if (edad <= 17) {
            total += PRECIO_JOVEN;
        }  
        else {
            total += PRECIO_ADULTO;
        }
    }

    std::cout << "\nEl total de beneficios obtenidos es: " << total << " euros." << std::endl;

    return 0;
}