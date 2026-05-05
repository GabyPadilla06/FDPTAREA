#include <iostream>

using namespace std;

int main()
{
    double cantidad;
    int opcion;
    double conversion;

    cout << "Ingresa tu cantidad en dolares: " << endl;
    cin >> cantidad;

    if (cantidad < 1)
    {
        cout << "Ingresa un numero valido";
        return 1;
    }

    cout << "====== Bienvenido a la calculadora de conversiones ======" << endl;
    cout << "Por favor, elija una opcion:" << endl;
    cout << "1. USD a EUR" << endl;
    cout << "2. USD a JPY" << endl;
    cout << "3. USD a GBP" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion < 1 || opcion > 3)
    {
        cout << "Ingresa un numero dentro del rango\n";
        return 1;
    }

    switch (opcion)
    {
    case 1:
        conversion = cantidad * 0.86;
        cout << "Tu resultado es: " << conversion << " euros" << endl;
        break;
    case 2:
        conversion = cantidad * 157.26;
        cout << "Tu resultado es: " << conversion << " yenes" << endl;
        break;
    case 3:
        conversion = cantidad * 0.74;
        cout << "Tu resultado es: " << conversion << " libras" << endl;
        break;
    default:
        cout << "Datos invalidos";
        break;
    }

    return 0;
}