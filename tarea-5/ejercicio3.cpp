#include <iostream>
#include <string>

using namespace std;

/*
Elabore una función que retorne un valor booleano, true o false, que indique
si un año es bisiesto o no. Para determinar si un año es bisiesto se hacen un
máximo de dos pruebas, así: si el año es divisible entre 400, es bisiesto; pero
si no es divisible entre 400 se realiza la siguiente prueba: que el año sea
divisible entre 4 y no sea divisible entre 100; si tampoco cumple esta segunda
prueba, entonces no es bisiesto. De acuerdo al valor booleano retornado,
imprima un mensaje que indique si el año es o no bisiesto.
*/


int main()
{
    // Declaracion de variables a utilizar
    int annio;
    bool bisiesto;
    bool validar_annio(int);
    void imprimir_respuesta(bool, int);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-------------------Inicio: Verificar si un año es bisiesto -------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "------------------------------------------------------------------------------------\n";

    cout << "| Ingrese el año a evaluar:       |: ";

    cin >> annio;

    // valido el annio
    bisiesto = validar_annio(annio);

    // imprimo el resultado
    imprimir_respuesta(bisiesto, annio);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "---------------------Fin: Verificar si es un año bisiesto --------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    return 0;
}

bool validar_annio(int annio){

    bool response;
    // Verificamos las siguientes condiciones, si cumple cualquiera de las dos el año es Bisiesto
    // 1- Mod: Año/400 == 0 : Es Bisiesto
    // 2- Mod: Año/4 == 0 && Año/100 != 0 : Es Bisiesto
    
    if( annio%400 == 0 || (annio%4 == 0 && annio%100 !=0) ){
        
        return true;
    }else{
        return false;
    }
}


void imprimir_respuesta(bool bisiesto, int annio){

    string message;
    
    message = bisiesto ? " es bisiesto." : " No es bisiesto." ; 
    message = "El año " + to_string(annio) + message ; 

    cout << "------------------------------------------------------------------------------------\n";
    cout << "| Resultado                       |: " << message << "                      \n";
    cout << "------------------------------------------------------------------------------------\n";
}
