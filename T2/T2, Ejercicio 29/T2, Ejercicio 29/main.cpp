#include <iostream>


/*29.Crea un programa que pida al usuario su renta anual y de acuerdo a los
tramos del IRPF que se muestran a continuación muestre al usuario su
sueldo neto mensual y que retención se le ha realizado.*/


#define TRAMO1 6000
#define TRAMO2 12500
#define TRAMO3 21000 
#define TRAMO4 32200
#define TRAMO5 50000
#define TRAMO6 300000

#define RET1 0.00f    
#define RET2 0.15f
#define RET3 0.25f
#define RET4 0.34f
#define RET5 0.45f
#define RET6 0.52f
#define RET7 0.55f


int main() {

    float rentaAnual;
    float retencion = 0; 

    std::cout << "Introduce tu renta anual en euros: ";    
    std::cin >> rentaAnual;
     
    if (rentaAnual <= TRAMO1) {
        retencion = RET1;
    }
    else if (rentaAnual <= TRAMO2) {
        retencion = RET2;
    }
    else if (rentaAnual <= TRAMO3) {
        retencion = RET3;
    }
    else if (rentaAnual <= TRAMO4) {
        retencion = RET4;
    }
    else if (rentaAnual <= TRAMO5) {
        retencion = RET5;
    }
    else if (rentaAnual <= TRAMO6) {   
        retencion = RET6 ;
    }
    else {
        retencion = RET7; 
    }
     

    float sueldoNetoAnual = rentaAnual - (rentaAnual * retencion);
    float sueldoNetoMensual = sueldoNetoAnual / 12;

    std::cout << "\nRetención aplicada: " << (retencion * 100) << "%" << std::endl;
    std::cout << "Sueldo neto mensual (12 pagas): " << sueldoNetoMensual << " euros" << std::endl;
      
    return 0;
} 

