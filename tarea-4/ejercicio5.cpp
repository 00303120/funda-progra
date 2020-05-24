
#include <iostream>
#include <string>

using namespace std;

// 5 ● Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.

int main()
{
    string phrase;
    string fstr;
    string lstr;

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "---------Inicio:  Verifique si la palabra ingresada inicia y finaliza con la misma letra.------" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;

    
    cout << "Ingresa la cadena a verificar... " << endl;

    getline(cin, phrase);


    fstr = phrase.substr (0, 1);
    lstr = phrase.substr (phrase.length()-1,1);

    cout << "\n=============================================================================================" << endl;

    if(fstr == lstr){

        cout << "La cadena coincide en su primer y ultima letra, Primera: " << fstr << ", ultima: "  << lstr << endl;
    
    }else{

        cout << "La cadena NO coincide en su primer y ultima letra, Primera: " << fstr << ", ultima: "  << lstr << endl ;
    }

    cout << "===============================================================================================" << endl<< endl;
    cout << "---------Inicio:  Verifique si la palabra ingresada inicia y finaliza con la misma letra.------" << endl;

    return 0;
}
