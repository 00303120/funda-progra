#include <iostream>
#include <string>

using namespace std;

// Dados dos arreglos de igual longitud, escriba un programa que genere un tercer arreglo
// cuyos valores corresponden a la suma de los elementos de las mismas posiciones de
// los dos arreglos anteriores. Escriba funciones para:
// a) Leer arreglo. Esta función recibe dos argumentos: un arreglo y la cantidad de
// elementos a leer; luego llena el arreglo.
// b) Realizar la suma de arreglos. Esta función recibe cuatro argumentos: los dos
// arreglos, la longitud de ambos y el arreglo resultante de la suma.
// c) Desplegar el resultado. Recibe el arreglo resultante de la suma y despliega su
// contenido.
// d) La función main. Que obviamente controla las llamadas a las funciones de los
// literales anteriores.

string str_pad(string, int, string);

int main(){

    int len, num, items;    
    void readArray(int [ ], int);
    void printArray(int [ ], int);
    void addArray(int [ ], int [ ], int len, int []);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "------------------------------Inicio: Sumar dos arreglos----------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";


    // Leo el tamano del arreglo
    cout << "------------------------------------------------------------------------------------\n";
    cout << "| Digite el número de items del arreglo  |: ";
    cin >> len;
    cout << "------------------------------------------------------------------------------------\n";


    int array1[len], array2[len], array3[len];

    readArray(array1,len);

    cout << "------------------------------------------------------------------------------------\n\n";

    cout << "------------------------------------------------------------------------------------\n";
    cout << "| Digite los items del arreglo #2                                                  |\n";
    cout << "------------------------------------------------------------------------------------\n";
    
    // leer
    readArray(array2,len);
    cout << "------------------------------------------------------------------------------------\n";

    cout << "\n\n====================================================================================\n";
    cout << "| Resultado de la suma de los arreglos                                             | \n";
    cout << "====================================================================================";


    // sumar 
    addArray(array1, array2, len, array3);

    // imprimir
    printArray(array3, len);
    cout << "\n------------------------------------------------------------------------------------\n";

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-------------------------------Fin: Sumar dos arreglos------------------------------\n";
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


// Suma dos arreglos
void addArray(int array1[], int array2[], int len, int array3[]){

    for (int i = 0; i < len; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
}


// Muestra un arreglo
void printArray(int array[], int len){
    
    int j;

	for (int i = 0; i < len; i++){

        j = i+1;
        cout << "\n| Suma del item " << str_pad(to_string(j), 3, " ") <<"                     |: "<< array[i];
    }
}	


// Agrega un caracter a la cadena a la izquierda, segun la longitud solicitada
string str_pad(string value, int len, string str){

    int lenv = value.length();
    int j = len - lenv;
    string resp = value;

    for (int i = 0; i < j; i++)
        resp =  str + resp;
    
    return resp;
}
