#include <iostream>

using namespace std;

int main()
{

    float consumo;

    cout << "Bienvenido a la calculadora de tarifas" << endl;
    cout << "Ingresa tu consumo de energia: " << endl;
    cin >> consumo;

    if (consumo <= 0)
    {
        cout << "Ingresa un consumo de energia valido" << endl;
    }
    else if (consumo < 100.0)
    {
        cout << "La tarifa es baja" << endl;
    }
    else if (consumo <= 200.0)
    {
        cout << "La tarifa es media" << endl;
    }
    else
    {
        cout << "La tarifa es alta" << endl;
    }

    return 0;
}