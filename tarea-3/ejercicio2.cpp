#include <iostream>
#include <math.h>
using namespace std;


// Realizar un programa en c++ que reciba el radio de un círculo y calcular su área y perímetro.

int main()
{
   
    double radio, area, perimetro, diametro;


    cout << "-------------------------------------------------------------------" << endl;
    cout << "-----------------Inicio: Calcular área y perímetro-----------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    cout << "Ingrese el radio de un círculo: " << endl;
    cin >> radio;


    diametro = 2 * radio;
    area = M_PI * pow(radio, 2);
    perimetro = M_PI *diametro;

    cout << endl;
    cout << "El área del círculo es: " << area << endl;
    cout << "El perímetro del círculo es: " << perimetro << endl << endl;

    
    cout << "------------------Fin: Calcular área y perímetro-----------------" << endl;

    return 0;
}


