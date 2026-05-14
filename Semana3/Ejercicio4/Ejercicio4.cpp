#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n-----------Menu-----------" << endl;
        cout << "| 1. Suma               |" << endl;
        cout << "| 2. Resta              |" << endl;
        cout << "| 3. Potencia           |" << endl;
        cout << "| 4. Salir              |" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Imagina que aqui se hace la operacion que elegiste." << endl;
        } else if (opcion != 4) {
            cout << "Opcion invalida. Intenta de nuevo." << endl;
        }

    } while (opcion != 4);

    cout << "Bye, saliste del programa." << endl;

    return 0;
}