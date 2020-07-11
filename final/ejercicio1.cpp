#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

struct Products{
    
    string name;
    int quantity;
    float price;
    float sub_total;

}product;

string str_rpad(string, int, string);
string xsround(float);

int main()
{
    int l; // cantidad de articulos de la factura
    float gtotal;

    void read_array(Products [], int);
    void subtotal(Products [], int);
    float total(Products [], int);
    void print_array(Products [], int);

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                           Inicio: Procesamiento de facturas                       |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n\n";


    // leer cuantos items evaluaremos
    cout << "-------------------------------------------------------------------------------------\n";
    cout << "| Digite la cantidad de articulos    |: ";
    cin >> l;
    cout << "-------------------------------------------------------------------------------------\n";

    struct Products data[l];

    // Leer array
    read_array(data, l);

    // Calcular el sub total por cada articulo
    subtotal(data, l);

    // Calcular el total de la factura
    gtotal = total(data, l);

    // imprimir articulos
    print_array(data, l); 

    cout << "\n*===================================================================================*";
    cout << "\n| Total                                                           |     $" << gtotal << "      |";
    cout << "\n*===================================================================================*\n\n\n";

    cout << "\n*-----------------------------------------------------------------------------------*\n";
    cout << "|                             Fin: Procesamiento de facturas                        |\n";
    cout << "*-----------------------------------------------------------------------------------*\n\n";

    return 0;
}


// Leer cada uno de los items y los agrego a mi arreglo 
void read_array(Products data[], int l){

    cout << "\n";
    cin.ignore();

    for (int i = 0; i < l; i++)
    {
        
        cout << "*===================================================================================*";
        cout << "\n|                                 Producto  # " << to_string(i+1) <<"                                     |";
        cout << "\n*===================================================================================*\n";

        cout << "| Ingrese el nombre                  |: ";
        
        getline(cin, product.name);

        cout << "| Ingrese el precio                  |: $";
        cin >> product.price;

        cout << "| Ingrese la cantidad                |: ";
        cin >> product.quantity;
        
        cin.ignore();

        data[i] = product;
    }
    cout << "\n------------------------------------------------------------------------------------\n";
    
}

// Mostrar los items de mi arreglo
void print_array(Products data[], int l){

    cout << "\n*************************************************************************************";
    cout << "\n|                                   Resumen                                         |";
    cout << "\n*************************************************************************************";
    cout << "\n\n*===================================================================================*\n";
    cout << "|  Id  |   Nombre                  |     Precio    |    Cantidad  |    Sub Total    |";
    cout << "\n------------------------------------------------------------------------------------";

    for (int i = 0; i < l; i++)
    {
    
        cout << "\n";
        cout << "|  " << str_rpad(to_string( i +1), 4, " ");
        cout << "|   " << str_rpad(data[i].name, 24, " ");
        cout << "|     $" << str_rpad(xsround(data[i].price), 9, " ");
        cout << "|    " << str_rpad(to_string(data[i].quantity), 10, " ");
        cout << "|     $" << str_rpad(xsround(data[i].sub_total), 11, " ") << "|";
    }
}

// Costo por articulo en sub total
void subtotal(Products data[], int l){

    for (int i = 0; i < l; i++)
    {
        data[i].sub_total =  data[i].price * data[i].quantity;
    }    
}


// Costo por articulo en sub total
float total(Products data[], int l){

    float total = 0;

    for (int i = 0; i < l; i++)
    {
    
        total += data[i].sub_total;
    }

    return total;
}

// agrega un caracter a la cadena a la derecha, segun la longitud solicitada
string str_rpad(string value, int len, string str){

    int lenv = value.length();
    int j = len - lenv;
    string resp = value;

    for (int i = 0; i < j; i++){
        resp = resp + str;
    }
    
    return resp;
}

// Redondear a dos decimales y convierte a string 
string xsround(float b){
  
    stringstream stream;

    stream << std::fixed << std::setprecision(2) << b;
    string s = stream.str();

    return s;
}


   