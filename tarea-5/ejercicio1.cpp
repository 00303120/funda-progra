#include <iostream>
#include <string>

using namespace std;

/*
Elabore una función que retorne el mcd de dos números que se le
proporcionen como argumento. Utilice el método de Euclides, que ya se
presentó en un ejemplo del documento donde se explican las instrucciones
iterativas. Su función deberá retornar el mcd de los dos enteros recibidos y
deberá ser desplegado en pantalla.
*/

int main()
{
    // Declaracion de variables
    int mayor, menor, residuo, num1, num2;

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-----------------------------Inicio: MCD de 2 Números-------------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    // Leo los valores ingresados por el usuario
    cout << "| Digite el primer número         |: ";
    cin >> num1;
    cout << "| Digite el segundo número        |: ";
    cin >> num2;

    // Evaluo cual es el numero menor y mayor y los asigno a las variables correspondiente
    mayor = num1 > num2 ? num1 : num2;
    menor = num1 < num2 ? num1 : num2;

    do
    {
        // Metodo de Euclides
        residuo = mayor % menor;

        if (residuo != 0)
        {
            mayor = menor;
            menor = residuo;
        }
    
    } while (residuo != 0);

    cout << "------------------------------------------------------------------------------------\n";
    cout << "| El MCD es                       |: " << menor << "                                             |\n";
    cout << "------------------------------------------------------------------------------------\n";


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "--------------------------------Fin: MCD de 2 Números-------------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    return 0;
}
