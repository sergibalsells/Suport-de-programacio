#include <iostream>
#include <string>
#include <ctime>

/*16.Crea un programa que reciba dos fechas en el formato yyyy - mm - dd e
indique cuántos días hay entre ambas fechas teniendo en cuenta los años
bisiestos.*/

//Convierto una fecha yyyy-mm-dd a time_t

time_t convertirFecha(const std::string& fecha) {
    int y = std::stoi(fecha.substr(0, 4));
    int m = std::stoi(fecha.substr(5, 2));
    int d = std::stoi(fecha.substr(8, 2));

    tm t = {};
    t.tm_year = y - 1900;
    t.tm_mon = m - 1;
    t.tm_mday = d;

    return mktime(&t);
}

//Calculo la diferencia en días entre dos time_t
int diasEntre(time_t f1, time_t f2) {
    double diff = difftime(f2, f1) / (60 * 60 * 24);
    return std::abs((int)diff);
}

int main() {
    std::string fecha1, fecha2;

    std::cout << "Introduce la primera fecha (yyyy-mm-dd): ";
    std::cin >> fecha1;

    std::cout << "Introduce la segunda fecha (yyyy-mm-dd): ";
    std::cin >> fecha2;

    time_t f1 = convertirFecha(fecha1);
    time_t f2 = convertirFecha(fecha2);

    std::cout << "Dias entre ambas fechas: " << diasEntre(f1, f2) << "\n";

    return 0;
}
