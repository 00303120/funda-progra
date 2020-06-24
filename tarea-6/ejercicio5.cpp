
#include <iostream>
#include <string>

using namespace std;

// Elabore un programa que llene un arreglo con los 100 primeros números enteros
// impares y los muestre en forma descendente. En la primera casilla estará el 1, en la
// segunda el 3, y así sucesivamente. El proceso de impresión iniciará desplegando el
// mayor de los valores y terminará desplegando es 1

string str_pad(string, int, string);

int main(){

    int len = 100;
    int array[len];
    
    void readArray(int [ ], int len);
    void sortByDesc(int [ ], int len);
    void printArray(int [ ], int len);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "---------------------Inicio: 100 números enteros (Impares)--------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    cout << "\nImprimiendo números de forma descendente\n";

    readArray(array,len);
    sortByDesc(array,len);
    printArray(array,len);

    cout << "\n ";

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "------------------------Fin: 100 números enteros (Impares)--------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    
    return 0; 
}

void readArray(int array[], int len){

    bool cont = true;
    int i = 1, j = 0;

    do
    {
        if(i%2 != 0){
            array[j] = i; 
            j++;
        }

        cont = j>= len ? false : true;
        i++;

    } while (cont);
}


// Ordena un arreglo de mayor a menor
void sortByDesc(int array[], int len){

    int aux;

	for (int i = 0;i < len; i++){

		for (int j = 0; j< len-1; j++){

			if (array[j] < array[j+1]){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor

                aux = array[j]; 
                array[j] = array[j+1]; 
                array[j+1] = aux;
			}
		}
	}
}

// Muestra un arreglo
void printArray(int array[], int len){
    
    int j;

	for (int i = 0; i < len; i++){

        j = i+1;
        cout << "\n Item " << str_pad(to_string(j), 3, " ") <<" : "<< array[i];
    }

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