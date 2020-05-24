#include <iostream>
using namespace std;

// 1. ● Realizar un programa en c++ que verifique si un número es divisible entre otro.

int main()
{

    int number1, number2, mod;



    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "-------------------------Inicio: Número divisible entre otro------------------------" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    

    cout << "Ingresa el primer número entero: " << endl;
    cin >> number1;

    cout << "Ingresa el segundo número entero: " << endl;
    cin >> number2;

    cout << "====================================================================================" << endl;

    if(number2 != 0){

        mod = number1 % number2;

        if(mod == 0){
            cout << "El número "<< number1  << ", es divisible entre " << number2  << endl<< endl;
        }else{
            cout << "El número "<< number1  << ", NO es divisible entre " << number2  << endl<< endl;
        }

    }else{
    
        cout << "La división no se puede realizar !. El segúndo número, tiene que ser diferente de 0" << endl << endl;    
    }
    cout << "====================================================================================" << endl;


    cout << "-----------------------------Fin: Número divisible entre otro-----------------------" << endl;

    
    return 0;
}
