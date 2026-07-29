#include <iostream>
#include <cstdlib>   
#include <ctime> 

/*30.Crea un programa que pedirá al usuario una cantidad de dinero, el interés
anual, cuántos años debe de realizar la simulación y un valor mínimo y
máximo que hará variar anualmente el interés de forma aleatoria.El
programa debe de mostrar para cada año los beneficios anuales, el
beneficio total desde que inició la inversión y el interés anual aplicado junto
a la variación respecto al año anterior aplicada.*/ 

int main() {

    srand(time(NULL));

    float dinero;
    float interesAnual;
    int años;
    float minVar, maxVar;

    std::cout << "Cantidad inicial de dinero: ";
    std::cin >> dinero;

    std::cout << "Interes anual inicial (%): ";
    std::cin >> interesAnual;

    std::cout << "Anios de simulacion: ";
    std::cin >> años;

    std::cout << "Variacion minima del interes (%): ";
    std::cin >> minVar;

    std::cout << "Variacion maxima del interes (%): ";
    std::cin >> maxVar;

    float beneficioTotal = 0;
    float interesAnterior = interesAnual;  

    std::cout << "\n--- Simulacion ---\n\n";

    for (int i = 1; i <= años; i++) {

        //Hacemos la variación aleatoria entre minVar y maxVar 
        //con ayuda de la IA, porque no sabia como hacerlo al verdad. (Solo la linea esta de la variación). 
        float variacion = minVar + static_cast<float>(rand()) / RAND_MAX * (maxVar - minVar);

        float interesActual = interesAnterior + variacion;

        //Hacemos el Beneficio anual
        float beneficioAnual = dinero * (interesActual / 100);
        beneficioTotal += beneficioAnual;

        //Mostramos resultados
        std::cout << "Anio " << i << ":" << std::endl;
        std::cout << "Interes aplicado: " << interesActual << "%\n";
        std::cout << "Variacion respecto al anio anterior: " << variacion << "%\n";
        std::cout << "Beneficio anual: " << beneficioAnual << " euros\n";
        std::cout << "Beneficio total acumulado: " << beneficioTotal << " euros\n\n"; 

        //Actualizamos interés para el siguiente año
        interesAnterior = interesActual;
    }

    return 0;
}