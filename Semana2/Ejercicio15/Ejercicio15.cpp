#include <iostream>

using namespace std;

int main()
{

    double salario, impuesto = 0.0, porcentaje = 0.0;

    cout << "Ingresa tu salario mensual: " << endl;
    cin >> salario;

    if (salario < 0)
    {
        cout << "El salario no puede ser negativo" << endl;
        return 1;
    }

    int rango;
    if (salario <= 1000)
    {
        rango = 1;
    }
    else if (salario <= 3000)
    {
        rango = 2;
    }
    else if (salario <= 6000)
    {
        rango = 3;
    }
    else if (salario <= 10000)
    {
        rango = 4;
    }
    else
    {
        rango = 5;
    }

    switch (rango)
    {
    case 1:
        porcentaje = 0;
        impuesto = 0;
        cout << "Rango: $0 - $1,000 = Libre de impuestos" << endl;
        break;
    case 2:
        porcentaje = 10;
        impuesto = salario * 0.10;
        cout << "Rango: $1,001 - $3,000 = Tasa del 10%" << endl;
        break;
    case 3:
        porcentaje = 20;
        impuesto = salario * 0.20;
        cout << "Rango: $3,001 - $6,000 = Tasa del 20%" << endl;
        break;
    case 4:
        porcentaje = 30;
        impuesto = salario * 0.30;
        cout << "Rango: $6,001 - $10,000 = Tasa del 30%" << endl;
        break;
    case 5:
        porcentaje = 35;
        impuesto = salario * 0.35;
        cout << "Rango: Más de $10,000 = Tasa del 35%" << endl;
        break;
    }

    double salarioNeto = salario - impuesto;

    cout << "Salario bruto   : $" << salario << endl;
    cout << "Tasa de impuesto: " << porcentaje << "%" << endl;
    cout << "Impuesto a pagar: $" << impuesto << endl;
    cout << "Salario neto    : $" << salarioNeto << endl;

    return 0;
}