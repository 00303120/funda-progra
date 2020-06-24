#include <iostream>
#include <string>
#include <math.h>

using namespace std;


// Luego de un experimento le piden entregar un reporte con todas las mediciones
// realizadas, junto con la incerteza que generan las mediciones. La incerteza se calcula
// mediante la fórmula:
// Donde:
// n es la cantidad de mediciones realizadas.
// es el promedio de las mediciones.
// xi es el valor de cada medición.
// es la incerteza

double getDecimalNumber(double);
double countDecimalNumber(double);
int cdDouble(double [], int l);

int main(){

    int n = 0;
    double avg, var;
    void readArray(double [], int);
    double avgArray(double [], int);
    double incArray(double [], int, double);

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                           Inicio: Calcular la incerteza                           |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";

    // Leo el tamano del arreglo
    cout << "*-----------------------------------------------------------------------------------*\n";
    cout << "| Digite la cantidad de mediciones realizadas  |: ";
    cin >> n;
    
    cout << "*-----------------------------------------------------------------------------------*\n";


    // Leo los datos de las mediciones
    double data[n];
    readArray(data,n);

    cout << "*-----------------------------------------------------------------------------------*\n";


    avg = avgArray(data, n);

    var = incArray(data, n, avg);

    cout << "| La incerteza es                |: "<< var ;
    cout << "\n*-----------------------------------------------------------------------------------*\n";
    

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                            Fin: Calcular la incerteza                             |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";
    
    
    return 0;

}


void readArray(double array[], int len){

 
    for (int i = 0; i < len; i++)
    {
        cout << "| Digite la medida # " << to_string(i+1) <<"            |: ";
        cin >> array[i];
    }
}

// calcular el promedio de las mediciones
double avgArray(double data[], int len){

    double avg = 0;
    int d =0;
   

    if(len >0 )

        for (int i = 0; i < len; i++)
        {
            avg += data[i];
        }
        avg = avg/len;

    return avg;
}

// calcular la varianza
double incArray(double data[], int len, double avg){

    double x = 0, s = 0, j = 0;
   
    if(len >0 )


        for (int i = 0; i < len; i++)
        
            j = data[i] - avg;
            s += pow(j, 2);
        

        x = sqrt(s/(len-1));

    return x;
}



// funciones utilitarias

// Retorno solo los decimales de un numero
double getDecimalNumber(double num){

    double aux, decimal;

    decimal = modf(num, &aux);

    return decimal;
}

// Obtengos la cantidad de los decimales de un double
double countDecimalNumber(double num){

    int ddec = 0, iint;
    iint = (int)num;

    while(num>iint){

        num *=10;
        ddec ++;
        iint = (int)num;
    }
    return ddec;
}

// menor cantidad de decimales
int cdDouble(double data[], int l){

    int d, i;

    if(l >0 )

        d = countDecimalNumber(data[l-1]); 

        for (int i = 0; i < l; i++)
        {
            i = countDecimalNumber(data[i]); //cuenta los decimales de la medicion;
            d = i < d ? i : d;
        }
       
    return d;
}