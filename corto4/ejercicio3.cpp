#include <iostream>
#include <string>
#define RAT 5 // NUMERO DE NOTAS HA INGRESAR

using namespace std;

void read_array(double [][RAT], int);
void calc_ratend(double []);

int main()
{
    int len;


    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                               Inicio: Sistema de notas                            |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";
    
    // leer cuantos estudiantes evaluaremos
    cout << "-------------------------------------------------------------------------------------\n";
    cout << "| Digite el número de estudiantes    |: ";
    cin >> len;
    cout << "-------------------------------------------------------------------------------------\n";

    double data[len][RAT];

    read_array(data, len);
   
    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                                 Fin: Sistema de notas                             |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";

    return 0;
}

// Leer un arreglo de estaturas
void read_array(double data[][RAT], int len){

    for (int i = 0; i < len; i++)
    {
        cout << "\n·***********************************************************************************·\n";
        cout << "· NOTAS DEL ESTUDIANTE # " << i+1 <<"                                                          ·\n\n";

        for (int j = 0; j < RAT; j++)
        {
            cout << "· Digite la nota # " << j+1 <<"                 |: ";
            cin >> data[i][j];
        }

        calc_ratend(data[i]);

    }
}


// Calcula la nota final del estudiante
void calc_ratend(double xi[]){

    double avg = 0;

    for (int i = 0; i < RAT; i++){
        avg += xi[i] * 0.20;
    }
                                                         
    cout << "\n· La nota final del estudiante es    |: " << avg;
    
    if(avg>6){
        cout << "\n· Felicidades aprobo el curso !!! \n";
    }else{
        cout << "\n· El estudiante reprobó :( \n" ;
    }
}