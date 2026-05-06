#include <iostream>
#include <string>

using namespace std;

int main()
{
    int opcion;

    cout << "¿De que mes eres?" << endl;
    cout << "-----------Menu-----------" << endl;
    cout << "| 1. Enero       |" << endl;
    cout << "| 2. Febrero     |" << endl;
    cout << "| 3. Marzo       |" << endl;
    cout << "| 4. Abril       |" << endl;
    cout << "| 5. Mayo        |" << endl;
    cout << "| 6. Junio       |" << endl;
    cout << "| 7. Julio       |" << endl;
    cout << "| 8. Agosto      |" << endl;
    cout << "| 9. Septiembre  |" << endl;
    cout << "| 10. Octubre    |" << endl;
    cout << "| 11. Noviembre  |" << endl;
    cout << "| 12. Diciembre  |" << endl;
    cout << "--------------------------" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion <= 0 || opcion > 12)
    {
        cout << "Ingresa una opcion dentro del rango de opciones" << endl;
    }

    switch (opcion)
    {
    case 1:
        cout << "Si eres de enero tu zigno zodiacal es capricornio o acuario";
        break;
    case 2:
        cout << "Si eres de febrero tu zigno zodiacal es piscis o acuario";
        break;
    case 3:
        cout << "Si eres de marzo tu zigno zodiacal es piscis o aries";
        break;
    case 4:
        cout << "Si eres de abril tu zigno zodiacal es tauro o aries";
        break;
    case 5:
        cout << "Si eres de mayo tu zigno zodiacal es tauro o geminis";
        break;
    case 6:
        cout << "Si eres de junio tu zigno zodiacal es cancer o geminis";
        break;
    case 7:
        cout << "Si eres de julio tu zigno zodiacal es cancer o leo";
        break;
    case 8:
        cout << "Si eres de agosto tu zigno zodiacal es virgo o leo";
        break;
    case 9:
        cout << "Si eres de septiembre tu zigno zodiacal es virgo o libra";
        break;
    case 10:
        cout << "Si eres de octubre tu zigno zodiacal es escorpio o libra";
        break;
    case 11:
        cout << "Si eres de noviembre tu zigno zodiacal es escorpio o sagitario";
        break;
    case 12:
        cout << "Si eres de diciembre tu zigno zodiacal es capricornio o sagitario";
        break;
    default:
        cout << "Ingresa un mes valido";
        break;
    }

    return 0;
}