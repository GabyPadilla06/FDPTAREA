#include <iostream>

using namespace std;

int main()
{

    int opcion;

    cout << "¿Que transporte necesitas?" << endl;
    cout << "-----------Menu-----------" << endl;
    cout << "| 1. Bus       |" << endl;
    cout << "| 2. Metro     |" << endl;
    cout << "| 3. Taxi      |" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion <= 0 || opcion > 3)
    {
        cout << "Ingresa una opcion dentro del rango de opciones" << endl;
    }

    switch (opcion)
    {
    case 1:
        cout << "Costo estimado: $0.25";
        break;
    case 2:
        cout << "Costo estimado: $1.00";
        break;
    case 3:
        cout << "Costo estimado: $8.00";
        break;
    default:
        break;
    }

    return 0;
}