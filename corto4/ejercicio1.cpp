#include <iostream>
#include <string>

using namespace std;

// 1.Dado un arreglo de caracteres, que deben ser introducidos desde teclado, codifique su contenido 
// utilizando la clave del murciélago. Recuerde que la equivalencia de esta clave es así:
// M = 0	E  5
// U = 1	L  6
// R = 2	A  7
// C = 3	G  8
// I = 4	O  9


int main()
{
    string phrase; // frase ingresada por el usuario
    int len;  // longitud de string

    void stringToArray(string, char [ ]);
    char codstr(char);

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                    Inicio: Codificar con clave 'Murcielago'                       |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";
    cout << "------------------------------------------------------------------------------------\n";


    // Leo la frase ingresada por el usuario
    cout << "| Ingrese la frase para codificar |: ";
    
    getline(cin, phrase);
    len = phrase.size();
    
    char cstr[len], ncstr[len]; // String convertido en array char, ingreso por el user y codificada
    stringToArray(phrase, cstr);


    cout << "------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------------------------------------------------\n";

    for (int i = 0; i < len; i++)
    {
        char key = cstr[i];
        ncstr[i] = codstr(key);
    }

    cout << "\n====================================================================================\n";
    cout << "| La frase codificada es          |: " << ncstr;
    cout << "\n====================================================================================\n";


    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                      Fin: Codificar con clave 'Murcielago'                        |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";

    return 0;
}

// Funcion para convertir string a rray 
void stringToArray(string phrase, char cstr[ ]){

    strcpy(cstr, phrase.c_str());  
}

// Convertimos cada letra a la frase secreta
char codstr(char key){

    char secret[] = {'m','u','r','c','i','e','l','a','g','o'};
    int len = sizeof(secret)/sizeof(*secret), i;
    char skey = key;

    for ( i = 0; i < len; i++){

        if(key == secret[i]){

            skey = i + '0'; //convierto el iterador a char para retornarlo
            break;
        }
    }

    return skey;
}

