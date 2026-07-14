#include <iostream>
#include <string>

/*10.Tenemos 3 interruptores seguidos.Crea un programa que al iniciarse
pregunte al usuario si están encendidos o apagados.El programa debe
determinar si la bombilla a la que están conectados está encendida.La
bombilla está encendida si dos interruptores consecutivos están encendidos.*/

#define ENCENDIDO "on"
#define APAGADO "off"

int main() {

    std::string int1, int2, int3;

    std::cout << "Interruptor 1 (on/off): ";
    std::cin >> int1;

    std::cout << "Interruptor 2 (on/off): ";
    std::cin >> int2;

    std::cout << "Interruptor 3 (on/off): ";
    std::cin >> int3;

    // Validación bàsica para el encendido o apagado
    bool valido1 = (int1 == ENCENDIDO || int1 == APAGADO);
    bool valido2 = (int2 == ENCENDIDO || int2 == APAGADO);
    bool valido3 = (int3 == ENCENDIDO || int3 == APAGADO);

    if (!valido1 || !valido2 || !valido3) {
        std::cout << "ERROR: Escribe 'on' o 'off'." << std::endl;
        return 0;
    }

    // Comprobamos los dos interruptors consecutivos encendidos
    bool consecutivos1 = (int1 == ENCENDIDO && int2 == ENCENDIDO);
    bool consecutivos2 = (int2 == ENCENDIDO && int3 == ENCENDIDO);

    if (consecutivos1 || consecutivos2) {
        std::cout << "La bombilla esta encendida." << std::endl;
    }
    else {
        std::cout << "La bombilla esta apagada" << std::endl;
    }

    return 0;
}