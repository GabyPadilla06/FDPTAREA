#include <iostream>

using namespace std;

int main()
{

    float pesoPaquete;
    int cobro, billetera = 500;

    cout << "Bienvenido al programa de paqueteria" << endl;
    cout << "Ingresa el peso de tu paquete en kg: " << endl;
    cin >> pesoPaquete;

    if (pesoPaquete > 0 && pesoPaquete <= 5)
    {
        cobro = billetera - 5;
        cout << "Su cobro se realizo correctamente, su nuevo saldo es de: " << cobro << endl;
    }
    else if (pesoPaquete >= 6.0 && pesoPaquete <= 10.0)
    {
        cobro = billetera - 10;
        cout << "Su cobro se realizo correctamente, su nuevo saldo es de: " << cobro << endl;
    }
    else if (pesoPaquete > 10.0)
    {
        cobro = billetera - 15;
        cout << "Su cobro se realizo correctamente, su nuevo saldo es de: " << cobro << endl;
    }
    else
    {
        cout << "Ingresa un numero valido" << endl;
    }

    return 0;
}