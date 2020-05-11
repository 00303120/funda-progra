#include <iostream>
#include <math.h>
using namespace std;


// Realizar un programa en c++ que reciba a, b y c y nos devuelva el resultado de la fórmula cuadrática.


int main()
{
   
    int a = 0;
    int b = 0;
    int c = 0;
    double x = 0;
    double raiz_int = 0;
    double solucion_positiva = 0;
    double solucion_negativa = 0;




    cout << "-------------------------------------------------------------------" << endl;
    cout << "---------------------Inicio: Formula cuadrática--------------------" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    cout << "Ingrese la variable a: " << endl;
    cin >> a;
    cout << "Ingrese la variable b: " << endl;
    cin >> b;
    cout << "Ingrese la variable c: " << endl;
    cin >> c;


    // (−b±√b − 4ac )2a

    // calculamos (b − 4ac)ˆ2

    raiz_int = pow(b,2)-4*(a*c);

    if(raiz_int < 0){
        cout << "Esta ecuacion no tiene solucion" << endl;
    
    }else{

        // calculamos √b − 4ac

        solucion_positiva = (-b+sqrt(raiz_int))/(2*a);
        solucion_negativa = (-b-sqrt(raiz_int))/(2*a);

        if(solucion_positiva == solucion_negativa){
            cout << "La unica solucion es:" << solucion_positiva;
        
        }else{
            cout << "La primera solucion es: " << solucion_positiva << endl;
            cout << "La segunda solucion es: " << solucion_negativa << endl;
            cout <<  endl;
        }
    }
    

    cout << "---------------------Fin: Formula cuadrática-------------------" << endl;
    return 0;
}