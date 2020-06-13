#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaracion de variables
    int numero_ingresado, i = 0;
    bool correcto = false, continuar;
    char key[1];
    bool verificar_numero(int, int);
    void imprimir_despedida(bool, int);
    void imprimir_rango(int, int );

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "------------------------------Inicio: Número Mágico---------------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    cout << "\nIngrese un número entero que este en el rango de 1 a 100\n";


    do
    {
        i++;

        cout << "\n------------------------------------------------------------------------------------";
        cout << "\nIntento #"<< i ;
        cout << "\n------------------------------------------------------------------------------------\n";

        cout << "\nIngrese el número: ";
        cin >> numero_ingresado;

        if(numero_ingresado>= 1 && numero_ingresado <= 100){
            correcto = verificar_numero(numero_ingresado, i);
        }else{
            imprimir_rango(numero_ingresado, i);
        }
        
        // Solicito al usuario que ingrese n para salir del programa y asigno false para que el bucle ya no continue ejecutandose
        cout << "\n\n\nPresione cualquier tecla para continuar? presione 'n' para salir: " ;

        cin >> key;

        continuar = (key[0] == 'n') ? false : true;
        
    } while (i <5 && correcto == false && continuar == true);
    
    imprimir_despedida(correcto, i);

    cout << "\n\n------------------------------------------------------------------------------------\n";
    cout << "---------------------------------Fin: Número Mágico---------------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    return 0;     
}


bool verificar_numero(int numero_ingresado, int i){

    int numero_registrado;
    bool correcto = false;
    string pista;

    void imprimir_pista(int, int, string);
    void imprimir_premio(int, int );

    numero_registrado = 34; // Valor del número a adivinar

    if(numero_ingresado == numero_registrado){
    
        imprimir_premio(numero_ingresado, i);
        correcto = true;

    }else if(numero_ingresado > numero_registrado){
      
        pista = "menor";
        imprimir_pista(numero_ingresado, i, pista);

    }else{
        
        pista = "mayor";
        imprimir_pista(numero_ingresado, i, pista);

    }

    return correcto;    
}

void imprimir_pista(int numero, int i, string pista){

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|  Intentos Disponibles   |         Mensaje        |            Pista              |";
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|            " << 5 - i <<"            |       Incorrecto       |    El número es "<< pista <<" a "<< numero<<"     |";
    cout << "\n------------------------------------------------------------------------------------\n";
}

void imprimir_premio(int numero, int i){

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|  Intentos Realizados   |         Mensaje                                         |";
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|           " << i <<"            |   Felicidades !!!  El número "<< numero<<"  es el número secreto :D |";
    cout << "\n------------------------------------------------------------------------------------\n";
}

void imprimir_despedida(bool correcto, int i){

    if(correcto == false){
        
        cout << "\n------------------------------------------------------------------------------------\n";
        cout << "|  Intentos Realizados   |         Mensaje                                         |";
        cout << "\n------------------------------------------------------------------------------------\n";
        cout << "|           " << i <<"            |   Lo sentimos !!!  no adivinaste el número secreto      |";
        cout << "\n------------------------------------------------------------------------------------\n";
    }
}

void imprimir_rango(int numero, int i){

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|  Intentos Disponibles   |         Mensaje        |            Pista              |";
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|            " << 5 - i <<"            |         Inválido       |El número debe estar entre 1-100|";
    cout << "\n------------------------------------------------------------------------------------\n";
}