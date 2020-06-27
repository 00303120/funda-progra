#include <iostream>
#include <string>

using namespace std;

// Estructura de calculos 
struct dhe{
    int max;
    int min;
    double avg;
}cls;

int main()
{
    int len = 25;

    int data[len];
    void read_array(int [], int);
    void avg_array(int [], int);
    void where_avg(int [], int);
    
    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                Inicio: Promedio de estaturas de estudiantes (cm)                  |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";


    cout << "*************************************************************************************\n";
    cout << "* Instrucciones: ingrese las estaturas por cada estudiante en números enteros       *\n";
    cout << "* ejemplo 172 que representa 172 cm de altura                                       *\n";
    cout << "*************************************************************************************\n\n";
    
    // Leer estaturas de estudiantes
    cout << "·-----------------------------------------------------------------------------------·\n";
    read_array(data, len);
    cout << "·-----------------------------------------------------------------------------------·\n";
    
    avg_array(data, len);
    where_avg(data, len);
    

    cout << "\n====================================================================================\n";
    cout << "| El promedio de las estatura es                    |: " << cls.avg << " cm";
    cout << "\n====================================================================================\n";

    cout << "\n====================================================================================\n";
    cout << "| Número de estudiantes arriba del promedio         |: " << cls.max ;
    cout << "\n====================================================================================\n";

    cout << "\n====================================================================================\n";
    cout << "| Número de estudiantes abajo del promedio          |: " << cls.min;
    cout << "\n====================================================================================\n";

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                     Fin: Promedio de estaturas de estudiantes                     |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";

    return 0;
}

// Leer un arreglo de estaturas
void read_array(int data[], int len){

    for (int i = 0; i < len; i++)
    {
        cout << "| Digite la estatura # " << to_string(i+1) <<"          |: ";
        cin >> data[i];
    }
}

// media de edades
void avg_array(int array[], int len){

    int avg =0;

    for (int i = 0; i < len; i++)
    {
        avg += array[i];
    }

    avg = (len>0) ? avg/len : 0;
    cls.avg = avg;
}


// En que posición estan ubicacada la edades
void where_avg(int array[], int len){

    int max = 0, min = 0, oth = 0;

    for (int i = 0; i < len; i++)
    {
        if(array[i] > cls.avg){
            max++;

        }else if(array[i] < cls.avg){
            min++;
        }else{
            oth++;
        }
    }

    cls.max = max;
    cls.min = min;

}
