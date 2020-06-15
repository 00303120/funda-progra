#include <iostream>
#include <string>

using namespace std;

/*
Escriba un programa que lea tres números enteros que representan los
valores de día (dd), mes (mm) y año (aa) de una fecha cualquiera. Luego,
calcule y dé como resultado de salida los valores de día, mes y año
correspondientes al día siguiente. Su programa debe tomar en cuenta años
bisiestos. Si la fecha digitada no es válida su programa no calculará el día
siguiente e indicará el error de digitacion
*/

int last_day(int, int);
bool in_array(int array[], int, int);
string str_pad(string value, int len, string str);
string format_date(int day, int month, int year);

int main()
{
    int day, month, year, nday, nmonth, nyear, valid;
    string date, ndate;

    bool check_date(int, int, int);
    void print_success(string, string);
    string add_day(string, int);
    void print_error();

    
    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "--------------------------Inicio: Sumar 1 día a la fecha----------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    cout << "------------------------------------------------------------------------------------\n";
    // Leo los valores ingresados por el usuario
    cout << "| Digite el día de la fecha               |: ";
    cin >> day ;

    cout << "| Digite el mes de la fecha               |: ";
    cin >> month ;
    
    cout << "| Digite el año de la fecha               |: ";
    cin >> year ;

    valid = check_date(day, month, year);

    if(valid){
        date = format_date(day, month, year);
        ndate = add_day(date, 1);

        print_success(date, ndate);
    }else{
        print_error();
    }


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-----------------------------Fin: Sumar 1 día a la fecha----------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    return 0;
}


void print_success(string date, string ndate){

    string day, month, year, nday, nmonth, nyear;

    year = date.substr(0,4);
    month= date.substr(5,2);
    day= date.substr(8,2);

    nyear = ndate.substr(0,4);
    nmonth = ndate.substr(5,2);
    nday = ndate.substr(8,2);
    
    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|           Fecha Ingresada               |             Nueva Fecha                |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|       Campo        |       Valor        |       Campo        |       Valor       |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|      Día           |         "<<day<<"         |      Día           |         "<<nday<<"        |\n";
    cout << "|      Mes           |         "<<month<<"         |      Mes           |         "<<nmonth<<"        |\n";
    cout << "|      Año           |        "<<year<<"        |      Año           |        "<<nyear<<"       |\n";
    cout << "|      Fecha         |      "<<date<<"    |      Fecha         |      "<<ndate<<"   |\n";
    cout << "*----------------------------------------------------------------------------------*\n";

}

// imprimit error
void print_error(){

    cout << "------------------------------------------------------------------------------------\n\n";
    cout << "*----------------------------------------------------------------------------------*\n";
    cout << "|           Error                        |           La fecha es inválida          |\n";
    cout << "*----------------------------------------------------------------------------------*\n";
}

// agregar dias a fecha
string add_day(string date, int n){

    int day, month, year, newmonth, newday, newyear, lastday;
    string newdate;

    // mi fecha vendra como yyyy-mm-dd
    // la cortare por partes y despues la convierto a int para sumar la fecha
    year = stoi(date.substr(0,4));
    month = stoi(date.substr(5,2));
    day = stoi(date.substr(8,2));

    lastday = last_day(month, year);
    day += n;
    

    // si el nuevo dia es mayor al ultimo dia debo, validar anio y mes y sumar respectivamente
    if(day > lastday){

        month += 1;

        if(month>12){
            day = 1;
            month = 1;
            year += 1;

        }else{
            day = 1;
        }
    }

    newdate = format_date(day, month, year);

    return newdate;
}


// formatea la fecha data en YYYY-mm-dd
string format_date(int day, int month, int year){

    string date;

    date = to_string(year) +"-"+ str_pad(to_string(month), 2, "0") +"-" + str_pad(to_string(day), 2, "0");

    return date;
}

// agrega un caracter a la cadena a la izquierda, segun la longitud solicitada
string str_pad(string value, int len, string str){

    int lenv = value.length();
    int j = len - lenv;
    string resp = value;

    for (int i = 0; i < j; i++)
    {
        resp =  str + resp;
    }
    
    return resp;
}


// verifica si la fecha es valida
bool check_date(int day, int month, int year){

    int last = last_day(month, year);

    if(
        (day >=1 && day <= last) &&
        (month >=1 && month <= 12) &&
        (year >=1 && year <= 3000)
    ){

        return true; 
    }else{
        return false;
    }
}

// funcion que retorna el ultimo dia, segun el annio y mes
int last_day(int month, int year){

    int month31[] = {1, 3, 5, 7, 8, 10, 12};
    int month30[] = {4, 6, 9, 11};
    int day;
    
    if(in_array(month31,7, month)){
        day = 31;

    }else if(in_array(month30,4, month)){
        day = 30;

    }else if( year%400 == 0 || (year%4 == 0 && year%100 !=0) ){
    
        day = 29;                    
        
    }else{
        day = 28;
    }
    return day;
}

// busca en un arrglo de tipo entero, si existe un elemento
bool in_array(int array[], int size, int needle)
{
    
    for(int i=0;i<size;i++)
    {
        if (array[i] == needle){
            return true;
        }
    }
    return false;
}