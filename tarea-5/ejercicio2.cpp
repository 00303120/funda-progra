#include <iostream>
#include <string>

using namespace std;

/*
Construya un programa que lea la hora, hh, mm y ss, en el modo de 24
horas. Luego calcule y despliegue cuál es la hora un segundo después
*/


// int last_day(int, int);

string str_pad(string, int, string);
string format_time(int, int, int);
bool check_time(int, int, int);

int main()
{
    int h,m,s, nh, nm, ns;
    string time, ntime;
    bool valid;

    string add_second(string, int);
    void print_success(string, string);
    void print_error();


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-------------------------Inicio: Hora, 1 segundo adicional--------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    cout << "------------------------------------------------------------------------------------\n";
    
    // Leo los valores ingresados por el usuario
    cout << "| Digite las horas               |: ";
    cin >> h ;

    cout << "| Digite los minutos             |: ";
    cin >> m ;
    
    cout << "| Digite los segundos            |: ";
    cin >> s ;

    cout << "------------------------------------------------------------------------------------\n";

    valid = check_time(h, m, s);


    if(valid){

        time = format_time(h, m, s);

        ntime = add_second(time, 1);
        
        print_success(time, ntime);
    }else{
        print_error();
    }


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "----------------------------Fin: Hora, 1 segundo adicional--------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    return 0;
}

// agregar 1 segundo a la fecha
string add_second(string time, int n){


    int h,m,s, nh, nm, ns, ls;
    string newtime;

    // mi fecha vendra como 23:12:34
    // la cortare por partes y despues la convierto a int para sumar el timepo

    h = stoi(time.substr(0,2));
    m = stoi(time.substr(3,2));
    s = stoi(time.substr(6,2));

    s += 1;
    
    if(s>59){

        s = 0;
        m += 1;

        if(m>59){

            m = 0;
            h +=1;

            if(h>23){
                h = 1;
            }

        }
    }

    newtime = format_time(h, m, s);

    return newtime;
}



// verifica si la hora es valida
bool check_time(int h, int m, int s){

    bool valid;

    if( (h>0 && h<=23) && (m>=0 && m<=59) && (s>=0 && s<=59)){
        valid = true;
    }else{
        valid = false;
    }

    return valid;
}

// formatea la hora en hh:mm:ss
string format_time(int h, int m, int s){

    string time;

    time = str_pad(to_string(h), 2, "0") +":"+ str_pad(to_string(m), 2, "0") +":" + str_pad(to_string(s), 2, "0");

    return time;
}


// agrega un caracter a la cadena a la izquierda, segun la longitud solicitada
string str_pad(string value, int len, string str){

    int lenv = value.length();
    int j = len - lenv;
    string resp = value;

    for (int i = 0; i < j; i++){
        resp =  str + resp;
    }
    
    return resp;
}



void print_success(string time, string ntime){

    cout << "\n*----------------------------------------------------------------------------------*\n";
    cout << "|           Hora Ingresada               |             Nueva Hora                  |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|       Campo        |       Valor       |       Campo        |       Valor        |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|       Hora         |      "<<time<<"     |       Hora         |      "<<ntime<<"      |\n";
    cout << "*----------------------------------------------------------------------------------*\n";

}

// imprimit error
void print_error(){

    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|           Error                        |            La hora es inválida          |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
}