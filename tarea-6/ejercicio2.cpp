#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Escriba un programa que le pida al usuario cierta cantidad de números enteros y estos
// se almacenen en un arreglo. Dicho arreglo tendrá un tamaño definido por el usuario, así
// que solicite primero la cantidad de elementos a introducir, luego cree el arreglo y, por
// último, introduzca los valores.
// Amplíe el problema anterior escribiendo una función que reciba el arreglo como
// argumento y su longitud; y retorne el promedio de los elementos que lo componen.

string str_pad(string, int, string);

int main(){

    int len;
    double avg;
    int *array;

    int * read_array(int array[], int len);
    double avg_array(int array[], int len);


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "---------------------------Inicio: Promedio de un arreglo--------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "------------------------------------------------------------------------------------\n";


    // Leo los valores ingresados por el usuario
    cout << "| Digite el número de items del arreglo   |: ";
    cin >> len;
    cout << "------------------------------------------------------------------------------------\n";

    array = read_array(array, len);
    avg = avg_array(array, len);
 
    cout << "------------------------------------------------------------------------------------\n";
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "| El promedio del arreglo es              |: " << fixed << setprecision(2) << avg;
    cout << "\n------------------------------------------------------------------------------------\n";

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "----------------------------Fin: Promedio de un arreglo-----------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    
    return 0; 
}


// Lee un arreglo ingresaod por el usuario
int * read_array(int array[], int len){

    int array2[len];

    for (int i = 0; i < len; i++)
    {
        string j = str_pad(to_string(i+1), 2, "0");
        cout << "| Digite el número del item " << j <<"            |: ";
        cin >> array2[i];
    }

    array = array2;
    return array;
}


// // Lee un arreglo ingresaod por el usuario
double avg_array(int array[], int len){

    double avg = 0;

    for (int i = 0; i < len; i++)
    {
        avg += array[i];
    }

    avg = (len>0) ? avg/len : 0;

    return avg;
}

// Agrega un caracter a la cadena a la izquierda, segun la longitud solicitada
string str_pad(string value, int len, string str){

    int lenv = value.length();
    int j = len - lenv;
    string resp = value;

    for (int i = 0; i < j; i++){
        resp =  str + resp;
    }
    return resp;
}