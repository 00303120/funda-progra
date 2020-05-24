
#include <iostream>
using namespace std;


// 3 ● Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.


int main()
{

    int number;

    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "-----------Inicio: Verificar si un número es positivo, negativo o cero--------------" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "Ingresa el número: " << endl;
    cin >> number;

  
    cout << "\n====================================================================================" << endl;

    if(number < 0){
        cout << "El número "<< number  << ", es negativo" << endl;

    }else if(number == 0){
        cout << "El número "<< number  << ", es 0" << endl;

    }else{
        cout << "El número "<< number  << ", es positivo" << endl;
    }

    cout << "====================================================================================" << endl;

    cout << "-----------Fin: Verificar si un número es positivo, negativo o cero-----------------" << endl;
    

    return 0;
}