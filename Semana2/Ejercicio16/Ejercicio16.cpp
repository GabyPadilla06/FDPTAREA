#include <iostream>

using namespace std;

int main(){

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

    return 0;
}