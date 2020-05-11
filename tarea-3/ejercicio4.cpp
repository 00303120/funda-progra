#include <iostream>
#include <math.h>
using namespace std;


// Realizar un programa en c++ que reciba 1 producto comprado (nombre, precio y cantidad comprada) y mostrar el total de dinero gastado.

int main()
{
   
    string nombre;
    int cantidad;
    double precio, total;


    cout << "-------------------------------------------------------------------" << endl;
    cout << "-----------------Inicio: Calcular dinero gastado-------------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    cout << "Ingrese el nombre del articulo: " << endl;
    cin >> nombre;

    cout << "Ingrese el precio del articulo: " << endl;
    cin >> precio;

    cout << "Ingrese el cantidad del articulo: " << endl;
    cin >> cantidad;


    total = precio * cantidad;

    cout << endl<< endl<< endl;
    cout << "El nombre del articulo: " << nombre<< endl;
    cout << "El precio del articulo: " << precio<< endl;
    cout << "El cantidad del articulo: " << cantidad<< endl;
    cout << "El total gastado es: " << total<< endl<< endl;

    
    cout << "------------------Fin: Calcular dinero gastado------------------" << endl;

    return 0;
}


