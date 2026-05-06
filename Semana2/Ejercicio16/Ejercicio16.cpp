#include <iostream>

using namespace std;

int main()
{

    int opcion;

    cout << "¿Que dia de la semana es?" << endl;
    cout << "-----------Menu-----------" << endl;
    cout << "| 1. Lunes       |" << endl;
    cout << "| 2. Martes      |" << endl;
    cout << "| 3. Miercoles   |" << endl;
    cout << "| 4. Jueves      |" << endl;
    cout << "| 5. Viernes     |" << endl;
    cout << "| 6. Sabado      |" << endl;
    cout << "| 7. Domingo     |" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion <= 0 || opcion > 7)
    {
        cout << "Ingresa una opcion dentro del rango de opciones" << endl;
    }

    switch (opcion)
    {
    case 1:
        cout << "Este dia tienes elementos y fundamentos";
        break;
    case 2:
        cout << "Este dia tienes precalculo y discreta";
        break;
    case 3:
        cout << "Este dia tienes elementos y fundamentos";
        break;
    case 4:
        cout << "Este dia tienes precalculo y discreta";
        break;
    case 5:
        cout << "Este dia tienes precalculo, elementos y discreta";
        break;
    case 6:
        cout << "Libre";
        break;
    case 7:
        cout << "Libre";
        break;
    default:
        break;
    }

    return 0;
}