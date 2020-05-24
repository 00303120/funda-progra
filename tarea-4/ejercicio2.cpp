
#include <iostream>
using namespace std;

// 2 ● Realizar un programa en c++ que verifique si un número es par o impar.


int main()
{

    int number, mod;

    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "-------------------Inicio: Verificar si número es Par o Impar-----------------------" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "Ingresa el número: " << endl;
    cin >> number;

  
    cout << "\n====================================================================================" << endl;


    mod = number % 2;

    if(mod == 0){
        cout << "El número "<< number  << ", es par" << endl;
    }else{
        cout << "El número "<< number  << ", es impar" << endl;
    }

    cout << "====================================================================================" << endl;

    cout << "-----------------Fin: Verificar si número es Par o Impar---------------------------" << endl;

    
    return 0;
}