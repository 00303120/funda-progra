#include <iostream>
#include <string>

using namespace std;

// Escriba un programa que le pida al usuario cierta cantidad de números enteros y estos
// se almacenen en un arreglo. Dicho arreglo tendrá un tamaño definido por el usuario, así
// que solicite primero la cantidad de elementos a introducir, luego cree el arreglo y, por
// último, introduzca los valores.


int main(){

    int len;
    void read_array(int len);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "------------------------Inicio: Almacenar enteros en arreglo------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "------------------------------------------------------------------------------------\n";


    // Leo los valores ingresados por el usuario
    cout << "| Digite el número de items del arreglo  |: ";
    cin >> len;
    cout << "------------------------------------------------------------------------------------\n";

    read_array(len);
   
    cout << "------------------------------------------------------------------------------------\n";
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "------------------------Fin: Almacenar enteros en arreglo---------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    
    return 0; 
}


void read_array(int len){

    int array[len];

    for (int i = 0; i < len; i++)
    {
        cout << "| Digite el número del item " << to_string(i+1) <<"            |: ";
        cin >> array[i];
    }
}