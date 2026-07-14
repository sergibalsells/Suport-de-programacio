#include <iostream>

/*30.En una empresa de acuerdo a los méritos del trabajador se le asigna una
nota de rendimiento(-1 a 1) que afecta a su nómina.Aunque es posible
obtener un valor negativo por mal rendimiento la nómina nunca puede
decrementar.Haz un programa que pregunte el sueldo del trabajador e
individualmente los siguientes méritos.Al final debe de mostrar el sueldo del
trabajador teniendo en cuenta que lo máximo que puede subir el sueldo es
un 25 % si su rendimiento es de 1.*/ 

#define LIMPIEZA 0.2f
#define EDUCACION 0.1f
#define PUNTUALIDAD 0.15f
#define PULIDO 0.25f
#define PELOTEO 0.3f 

#define MAX_RENDIMIENTO 1.0f   
#define MIN_RENDIMIENTO -1.0f
#define MAX_SUBIDA 0.25f   // 25%

int main() {

    float sueldo; 
    float rLimpieza, rEducacion, rPuntualidad, rPulido, rPeloteo; 

    std::cout << "Introduce el sueldo mensual del trabajador: ";  
    std::cin >> sueldo;  

    std::cout << "Rendimiento limpieza (+/-0.2): ";
    std::cin >> rLimpieza;

    std::cout << "Rendimiento educación (+/-0.1): "; 
    std::cin >> rEducacion;
  
    std::cout << "Rendimiento puntualidad (+/-0.15): ";
    std::cin >> rPuntualidad;

    std::cout << "Rendimiento pulido tareas (+/-0.25): ";
    std::cin >> rPulido;

    std::cout << "Rendimiento peloteo al jefe (+/-0.3): ";
    std::cin >> rPeloteo; 

    float rendimientoTotal = 
        (rLimpieza * LIMPIEZA) + (rEducacion * EDUCACION) + (rPuntualidad * PUNTUALIDAD) + (rPulido * PULIDO) + (rPeloteo * PELOTEO);
    if (rLimpieza > 1 || rEducacion > 1 || rPuntualidad > 1 || rPulido > 1 || rPeloteo > 1)
    {
        std::cout << "Los datos introducidos no son vlaidos." << std::endl; 
        return 0; 
    }
    // Limitar rendimiento entre -1 y 1
    if (rendimientoTotal > MAX_RENDIMIENTO) {
        rendimientoTotal = MAX_RENDIMIENTO;
    }
    if (rendimientoTotal < MIN_RENDIMIENTO) {
        rendimientoTotal = MIN_RENDIMIENTO;   

    }

    // El sueldo nunca baja ya que el mínimo 0
    float porcentajeSubida = rendimientoTotal * MAX_SUBIDA;    
    if (porcentajeSubida < 0) {   
        porcentajeSubida = 0;
    }
       
    float sueldoFinal = sueldo + (sueldo * porcentajeSubida);

    std::cout << "\nRendimiento total: " << rendimientoTotal << std::endl;
    std::cout << "Subida aplicada: " << porcentajeSubida * 100 << "%" << std::endl;  
    std::cout << "Sueldo final: " << sueldoFinal << " euros " << std::endl; 

    return 0;
}
