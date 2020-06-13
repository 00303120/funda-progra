#include <iostream>
#include <string>

using namespace std;


int main()
{
    // Declaracion de variables a utilizar
    int year;
    string response;
    string validar_annio(int);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-------------------Inicio: Verificar si un año es bisiesto -------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    cout << "\nIngrese el año a evaluar: \n";
    cin >> year;


    response = validar_annio(year);
    

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "| Resultado                                                                        |";
    cout << "\n------------------------------------------------------------------------------------\n\n" ;


    // El resultado de la condicion lo almacenamos en la variable de tipo string "response" y lo mostramos en pantalla
    cout << "El año " << year << response << endl;

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "---------------------Fin: Verificar si es un año bisiesto --------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    return 0;
}

string validar_annio(int year){

    string response;
    // Verificamos las siguientes condiciones, si cumple cualquiera de las dos el año es Bisiesto
    // 1- Mod: Año/400 == 0 : Es Bisiesto
    // 2- Mod: Año/4 == 0 && Año/100 != 0 : Es Bisiesto
    
    if( year%400 == 0 || (year%4 == 0 && year%100 !=0) ){
        
        response = ", es bisiesto";
    
        // Si no cumple con las condiciones anteriores el año no es bisiesto
    }else{
        response = ", NO es un año bisiesto";
    }

    return response;
}
