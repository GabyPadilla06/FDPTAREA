#include <iostream>

using namespace std;

// Verifico y después hago
int main()
{

    int opcion;

    cout << "¿Elige una opcion?" << endl;
    cout << "-----------Menu-----------" << endl;
    cout << "| 1. Suma       |" << endl;
    cout << "| 2. Resta      |" << endl;
    cout << "| 3. Potencia   |" << endl;
    cout << "| 4. Salir       |" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    while (opcion != 4)
    {
        cout << "Imagina que aquí se hace la operacion que elegiste XD" << endl;
        cout << "Si deseas salir o hacer otra operación elige otra opción" << endl;
        cout << "-----------Menu-----------" << endl;
        cout << "| 1. Suma       |" << endl;
        cout << "| 2. Resta      |" << endl;
        cout << "| 3. Potencia   |" << endl;
        cout << "| 4. Salir      |" << endl;
        cin >> opcion;
    }
    cout << "Bye, saliste del programa";

    return 0;
}