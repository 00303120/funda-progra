#include <iostream>
#include <string>

using namespace std;

// Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
// se repite dicho número en el arreglo.
// string str_pad(string, int, string);

int main(){

    int len, num, items;    
    void readArray(int [ ], int);
    int countInArray(int [ ], int, int);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "----------------Inicio: Repeticiones de un número en un Arreglo---------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "------------------------------------------------------------------------------------\n";
    

    // Leo los valores ingresados por el usuario
    cout << "| Digite el número de items del arreglo  |: ";
    cin >> len;
    cout << "------------------------------------------------------------------------------------\n";

    int array[len];
    readArray(array,len);
    cout << "------------------------------------------------------------------------------------\n";
    cout << "| Digite el número a buscar              |: ";
    cin >> num;
    cout << "------------------------------------------------------------------------------------\n";



    items = countInArray(array,len, num);
    
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "| Número de ocurrencias de " << num <<"             |: " << items;
    cout << "\n------------------------------------------------------------------------------------\n\n";

    cout << "------------------------------------------------------------------------------------\n";
    cout << "------------------Fin: Repeticiones de un número en un Arreglo----------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    
    return 0; 
}


void readArray(int array[], int len){

    for (int i = 0; i < len; i++)
    {
        cout << "| Digite el número del item " << to_string(i+1) <<"            |: ";
        cin >> array[i];
    }
}

int countInArray(int array[], int len, int num){

    int items = 0;

    for (int i = 0; i < len; i++)
    {
        if(array[i] == num){
            items ++;
        }
    }

    return items;
}