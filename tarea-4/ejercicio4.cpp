
#include <iostream>
#include <string>

using namespace std;

// 4 ● Realizar un programa en c++ que verifique si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar.

int main()
{
    string cadena;
    int length, mod;
    
    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "---Inicio: Verificar si logintud de cadena es mayor a 10  carateres y si esta es par o impar---" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;

    cout << "Ingresa la cadena a verificar: " << endl;

    getline(cin, cadena);

    
    length = cadena.length();
    
    cout << "\n===========================================================================================" << endl;

    if(length>10){

        cout << "La cadena de texto tiene más de 10 caracteres. Longitud: " << length << endl;
    
    }else{

        cout << "La cadena de texto es menor a 10 caracteres. Longitud: " << length << endl;
    }

    mod = length % 2;

    if(mod == 0){
        cout << "La longitud es par" << endl;
    }else{
        cout << "La longitud es impar" << endl;
    }

    cout << "============================================================================================" << endl;
    cout << "---Fin: Verificar si logintud de cadena es mayor a 10  carateres y si esta es par o impar---" << endl;
    
    

    return 0;
}


