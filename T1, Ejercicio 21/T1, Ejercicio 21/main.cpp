#include <iostream>


//21.Crea un programa que se le introduzca un día, un mes y un año y calcule
//cuantos segundos han pasado desde el 1 de enero del año 0.


int main() {

    int dia, mes, anio;

    std::cout << "Introduce el dia: ";
    std::cin >> dia;

    std::cout << "Introduce el mes: ";
    std::cin >> mes;

    std::cout << "Introduce el anio: ";
    std::cin >> anio;

    long long diasTotales = 0;

    // ---- Sumamos los días de los años anteriores 
    for (int i = 0; i < anio; i++) {

        bool bisiesto = false;

        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    bisiesto = true;
                }
            }
            else {
                bisiesto = true;
            }
        }

        if (bisiesto) {
            diasTotales += 366;
        }
        else {
            diasTotales += 365;
        }
    }

    // ---- Sumamos los días de los meses completos del año actual 
    for (int m = 1; m < mes; m++) {

        if (m == 1) diasTotales += 31;
        if (m == 2) {
            bool bisiestoActual = false;

            if (anio % 4 == 0) {
                if (anio % 100 == 0) {
                    if (anio % 400 == 0) {
                        bisiestoActual = true;
                    }
                }
                else {
                    bisiestoActual = true;
                }
            }

            if (bisiestoActual) diasTotales += 29;
            else diasTotales += 28;
        }
        if (m == 3) diasTotales += 31;
        if (m == 4) diasTotales += 30;
        if (m == 5) diasTotales += 31;
        if (m == 6) diasTotales += 30;
        if (m == 7) diasTotales += 31;
        if (m == 8) diasTotales += 31;
        if (m == 9) diasTotales += 30;
        if (m == 10) diasTotales += 31;
        if (m == 11) diasTotales += 30;
        if (m == 12) diasTotales += 31;
    }

    // ---- Sumamos los días del mes actual antes del día introducido
    diasTotales += (dia - 1);

    // ---- Convertimos  los días a segundos
    long long segundos = diasTotales * 24 * 3600;

    std::cout << "Han pasado " << segundos
        << " segundos desde el 1 de enero del anio 0." << std::endl;

    return 0;
}

