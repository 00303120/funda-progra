#include <iostream>
using namespace std;


// Realizar un programa en c++ que devuelva el promedio de 3 números enteros ingresados por el usuario.

int main()
{
    int number1, number2, number3, total;
    double average;


    cout << "-------------------------------------------------------------------" << endl;
    cout << "-------------------Inicio: Promedio de 3 números-------------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    cout << "Ingresa el primer número entero: " << endl;
    cin >> number1;

    cout << "Ingresa el segundo número entero: " << endl;
    cin >> number2;

    cout << "Ingresa el tercer número entero: " << endl;
    cin >> number3;

    cout << "------------El promedio de los tres números es-------------" << endl << endl;;

    total = number1 + number2 + number3;
    average = total/3;


    cout << "Promedio: " << average  << endl << endl;;
    cout << "-------------------Fin: Promedio de 3 números--------------------" << endl;

    return 0;
}
