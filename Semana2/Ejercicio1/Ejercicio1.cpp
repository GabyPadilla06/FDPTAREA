#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Ingresa un numero entero del 1 al 7: " << endl;
    cin >> num;

    if (num < 1 || num > 7)
    {
        cout << "Ingresa un numero dentro del rango\n";
        return 1;
    }

    switch (num)
    {
    case 1:
        cout << "Lunes\n";
        break;
    case 2:
        cout << "Martes\n";
        break;
    case 3:
        cout << "Miercoles\n";
        break;
    case 4:
        cout << "Jueves\n";
        break;
    case 5:
        cout << "Viernes\n";
        break;
    case 6:
        cout << "Sabado\n";
        break;
    case 7:
        cout << "Domingo\n";
        break;
    default:
        cout << "Ingresa un numero valido\n";
        break;
    }

    return 0;
}