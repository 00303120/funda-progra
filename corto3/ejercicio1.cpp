#include <iostream>

using namespace std;

/*
1 -Calculo de salarios
Tenemos una empresa y se desea calcular el salario mensual de los empleados.
Debe de calcular el salario de N empleados, debe de solicitarle al usuario que ingrese:
Horas trabajadas y horas extras realizadas de cada empleado.
El programa debe de mostrar, por cada usuario:
El salario total y el salario real (llamaremos total al salario sin descuentos y salario real al salario que ya tiene los descuentos aplicados).
La hora normal se paga a 1.75 dólares.
La hora extra se paga a 2.50 dólares.
Los descuentos que se realizan al salario total para obtener el salario real, son:
Seguro social: 4% de su salario.
AFP: 6.25 % de su salario.s
Impuesto sobre la Renta: 10 % de su salario, esto se aplica a salarios arriba de los 500 dólares.
Nota: se aplican los descuentos después de calcular el salario total. El salario total de cada empleado se calcula sumando lo que le corresponde por horas normales trabajadas más lo que le corresponde por horas extra trabajadas.
*/

int main()
{
    // Declaracion de variables
    char key[1];
    bool continuar;

    int horas_trabajadas, horas_extra, i = 1;

    double salario_real, salario_total, descuento_afp, descuento_renta, descuento_ssocial, total_descuento;

    double calcular_salario_total(int, int);
    double calcular_afp(double);
    double calcular_ssocial(double);
    double calcular_renta(double);


    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "-------------------Inicio: Calcular salarios de empleados --------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";

    do
    {
        cout << "\n------------------------------------------------------------------------------------\n";
        cout << "| Calculando el sueldo del empleado # "<< i << "                                            |";
        cout << "\n------------------------------------------------------------------------------------\n\n";


        cout << "\nIngrese horas trabajadas: ";
        cin >> horas_trabajadas;

        cout << "\nIngrese horas extras: ";
        cin >> horas_extra;


        salario_total = calcular_salario_total(horas_trabajadas, horas_extra);
        descuento_afp = calcular_afp(salario_total);
        descuento_ssocial = calcular_ssocial(salario_total);
        descuento_renta = calcular_renta(salario_total);

        total_descuento = descuento_afp + descuento_ssocial + descuento_renta;
        salario_real = salario_total - total_descuento;
        
        cout << "\n====================================================================================\n";

        // Imprimo los datos calculados
        cout << "\nDescuento APF            $" << descuento_afp;
        cout << "\nDescuento Seguro Social  $" << descuento_ssocial;
        cout << "\nDescuento Renta:         $" << descuento_renta;
        cout << "\nDescuento Total:         $" << total_descuento;
        cout << "\n-------------------------------";
        cout << "\nSalario Total:           $" << salario_total;
        cout << "\nSalario Real:            $" << salario_real;
        
        cout << "\n====================================================================================\n";


        // Solicito al usuario que ingrese n para salir del programa y asigno false para que el bucle ya no continue ejecutandose
        cout << "\n\nPresione cualquier tecla para continuar? presione 'n' para salir: " ;

        cin >> key;

        continuar = (key[0] == 'n') ? false : true;

       
        i++;
    } while (continuar);

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "---------------------Fin: Calcular salarios de empleados ---------------------------\n";
    cout << "------------------------------------------------------------------------------------\n\n";
    
    return 0;
}

double calcular_salario_total(int horas_normal, int horas_extra){
    
    // Declaracion de variables a utilizar y asignacion de valores 
    double salario_total, monto_hnormal, monto_hextra;
    
    monto_hnormal = 1.75;
    monto_hextra = 2.50;


    salario_total = (monto_hnormal * horas_normal) + (horas_extra * monto_hextra);

    return salario_total;
}

double calcular_afp(double salario){

    // Declaracion de variables a utilizar y asignacion de valores 
    double descuento;

    descuento = salario * 0.0625;

    return descuento;
}

double calcular_ssocial(double salario){

    // Declaracion de variables a utilizar y asignacion de valores 
    double sdescuento;

    sdescuento = salario * 0.04;

    return sdescuento;
}

double calcular_renta(double salario){

    // Declaracion de variables a utilizar y asignacion de valores 
    double descuento = 0.00;

    
    if(salario>500){
    
        descuento = salario * 0.1;
    }

    return descuento;
}
